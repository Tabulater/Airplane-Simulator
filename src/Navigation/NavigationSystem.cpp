#include "NavigationSystem.h"
#include <osg/Geode>
#include <osg/ShapeDrawable>
#include <osg/MatrixTransform>
#include <osg/PositionAttitudeTransform>
#include <osgText/Text>
#include <osgDB/ReadFile>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <cmath>

// Earth radius in meters
static const double EARTH_RADIUS = 6371000.0;

// Convert degrees to radians
static inline double deg2rad(double deg) { return deg * M_PI / 180.0; }

// Calculate distance between two points in meters using Haversine formula
static double calculateDistance(double lat1, double lon1, double lat2, double lon2) {
    double dLat = deg2rad(lat2 - lat1);
    double dLon = deg2rad(lon2 - lon1);
    double a = 
        sin(dLat/2) * sin(dLat/2) +
        cos(deg2rad(lat1)) * cos(deg2rad(lat2)) * 
        sin(dLon/2) * sin(dLon/2);
    double c = 2 * atan2(sqrt(a), sqrt(1-a));
    return EARTH_RADIUS * c;
}

// Singleton instance
NavigationSystem* NavigationSystem::_instance = nullptr;

NavigationSystem* NavigationSystem::instance() {
    if (!_instance) {
        _instance = new NavigationSystem();
    }
    return _instance;
}

NavigationSystem::NavigationSystem() {
    _visualizationNode = new osg::Group;
}

NavigationSystem::~NavigationSystem() {
    // Cleanup if needed
}

bool NavigationSystem::loadNavigationData(const std::string& dataPath) {
    bool success = true;
    
    // Load airports
    if (!loadAirports(dataPath + "/airports.dat")) {
        success = false;
    }
    
    // Load navigation aids
    if (!loadNavAids(dataPath + "/nav.dat")) {
        success = false;
    }
    
    // Load waypoints
    if (!loadWaypoints(dataPath + "/fixes.dat")) {
        success = false;
    }
    
    // Create visualization
    createVisualization();
    
    return success;
}

bool NavigationSystem::loadAirports(const std::string& filename) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        return false;
    }
    
    std::string line;
    while (std::getline(file, line)) {
        if (line.empty() || line[0] == '#') continue;
        
        std::istringstream iss(line);
        Airport airport;
        std::string token;
        
        // Simple CSV parsing (in a real implementation, use a proper CSV parser)
        std::getline(iss, airport.icao, ',');
        std::getline(iss, token, ',');
        airport.name = token.substr(1, token.length() - 2); // Remove quotes
        std::getline(iss, token, ',');
        airport.city = token.substr(1, token.length() - 2);
        std::getline(iss, token, ',');
        airport.country = token.substr(1, token.length() - 2);
        std::getline(iss, token, ',');
        airport.latitude = std::stod(token);
        std::getline(iss, token, ',');
        airport.longitude = std::stod(token);
        std::getline(iss, token, ',');
        airport.elevation = std::stod(token);
        std::getline(iss, airport.timezone, ',');
        
        _airports.push_back(airport);
        _airportIndex[airport.icao] = _airports.size() - 1;
    }
    
    return true;
}

bool NavigationSystem::loadNavAids(const std::string& filename) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        return false;
    }
    
    std::string line;
    while (std::getline(file, line)) {
        if (line.empty() || line[0] == '#') continue;
        
        std::istringstream iss(line);
        NavAid navAid;
        std::string token;
        
        // Simple CSV parsing
        std::getline(iss, navAid.id, ',');
        std::getline(iss, token, ',');
        navAid.name = token.substr(1, token.length() - 2);
        
        std::getline(iss, token, ',');
        if (token == "VOR") navAid.type = NavAidType::VOR;
        else if (token == "VOR-DME") navAid.type = NavAidType::VOR_DME;
        else if (token == "VORTAC") navAid.type = NavAidType::VORTAC;
        else if (token == "NDB") navAid.type = NavAidType::NDB;
        else if (token == "ILS") navAid.type = NavAidType::ILS;
        else if (token == "DME") navAid.type = NavAidType::DME;
        else if (token == "TACAN") navAid.type = NavAidType::TACAN;
        
        std::getline(iss, token, ',');
        navAid.latitude = std::stod(token);
        std::getline(iss, token, ',');
        navAid.longitude = std::stod(token);
        std::getline(iss, token, ',');
        navAid.elevation = std::stod(token);
        std::getline(iss, token, ',');
        navAid.frequency = std::stod(token);
        std::getline(iss, token, ',');
        navAid.range = std::stoi(token);
        std::getline(iss, navAid.icao_region, ',');
        
        _navAids.push_back(navAid);
        _navAidIndex[navAid.id] = _navAids.size() - 1;
    }
    
    return true;
}

bool NavigationSystem::loadWaypoints(const std::string& filename) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        return false;
    }
    
    std::string line;
    while (std::getline(file, line)) {
        if (line.empty() || line[0] == '#') continue;
        
        std::istringstream iss(line);
        Waypoint waypoint;
        std::string token;
        
        // Simple CSV parsing
        std::getline(iss, waypoint.id, ',');
        std::getline(iss, waypoint.name, ',');
        std::getline(iss, waypoint.icao_region, ',');
        std::getline(iss, waypoint.type, ',');
        std::getline(iss, token, ',');
        waypoint.latitude = std::stod(token);
        std::getline(iss, token, ',');
        waypoint.longitude = std::stod(token);
        
        _waypoints.push_back(waypoint);
        _waypointIndex[waypoint.id] = _waypoints.size() - 1;
    }
    
    return true;
}

NavigationSystem::Airport* NavigationSystem::findNearestAirport(double lat, double lon, double maxDistance) {
    Airport* nearest = nullptr;
    double minDistance = maxDistance * 1852.0; // Convert NM to meters
    
    for (auto& airport : _airports) {
        double dist = calculateDistance(lat, lon, airport.latitude, airport.longitude);
        if (dist < minDistance) {
            minDistance = dist;
            nearest = &airport;
        }
    }
    
    return nearest;
}

NavigationSystem::NavAid* NavigationSystem::findNavAid(const std::string& id) {
    auto it = _navAidIndex.find(id);
    if (it != _navAidIndex.end()) {
        return &_navAids[it->second];
    }
    return nullptr;
}

std::shared_ptr<NavigationSystem::FlightPlan> NavigationSystem::createFlightPlan(
    const std::string& departure,
    const std::string& arrival,
    const std::vector<std::string>& waypoints,
    double cruiseAlt) {
    
    auto plan = std::make_shared<FlightPlan>();
    plan->departure_airport = departure;
    plan->arrival_airport = arrival;
    plan->cruise_altitude = cruiseAlt;
    plan->waypoints = waypoints;
    
    // Generate a simple route string
    std::ostringstream route;
    route << departure << " DCT ";
    for (const auto& wp : waypoints) {
        route << wp << " DCT ";
    }
    route << arrival;
    
    plan->route_string = route.str();
    return plan;
}

void NavigationSystem::update(double currentTime) {
    // Update any dynamic navigation elements
    // For example, update DME distances, VOR radials, etc.
}

void NavigationSystem::createVisualization() {
    // Create visualization for airports
    for (const auto& airport : _airports) {
        osg::ref_ptr<osg::Geode> airportGeode = new osg::Geode;
        
        // Create a simple representation of the airport
        osg::ref_ptr<osg::ShapeDrawable> airportShape = new osg::ShapeDrawable(
            new osg::Sphere(osg::Vec3(0.0f, 0.0f, 0.0f), 100.0f)
        );
        airportShape->setColor(osg::Vec4(1.0f, 0.0f, 0.0f, 1.0f));
        airportGeode->addDrawable(airportShape);
        
        // Add airport label
        osg::ref_ptr<osgText::Text> label = new osgText::Text;
        label->setText(airport.icao);
        label->setPosition(osg::Vec3(0.0f, 0.0f, 150.0f));
        label->setColor(osg::Vec4(1.0f, 1.0f, 1.0f, 1.0f));
        airportGeode->addDrawable(label);
        
        // Position the airport
        osg::ref_ptr<osg::MatrixTransform> transform = new osg::MatrixTransform;
        osg::Matrixd matrix;
        matrix.makeTranslate(
            airport.longitude * 100000.0,  // Scale for visualization
            airport.latitude * 100000.0,
            airport.elevation
        );
        transform->setMatrix(matrix);
        transform->addChild(airportGeode);
        
        _visualizationNode->addChild(transform);
    }
    
    // Create visualization for navigation aids
    for (const auto& navAid : _navAids) {
        osg::ref_ptr<osg::Geode> navGeode = new osg::Geode;
        
        // Different shapes for different types of navaids
        switch (navAid.type) {
            case NavAidType::VOR:
            case NavAidType::VOR_DME:
            case NavAidType::VORTAC: {
                osg::ref_ptr<osg::ShapeDrawable> vorShape = new osg::ShapeDrawable(
                    new osg::Cylinder(osg::Vec3(0.0f, 0.0f, 0.0f), 50.0f, 10.0f)
                );
                vorShape->setColor(osg::Vec4(0.0f, 1.0f, 0.0f, 1.0f));
                navGeode->addDrawable(vorShape);
                break;
            }
            case NavAidType::NDB: {
                osg::ref_ptr<osg::ShapeDrawable> ndbShape = new osg::ShapeDrawable(
                    new osg::Box(osg::Vec3(0.0f, 0.0f, 0.0f), 30.0f)
                );
                ndbShape->setColor(osg::Vec4(1.0f, 1.0f, 0.0f, 1.0f));
                navGeode->addDrawable(ndbShape);
                break;
            }
            case NavAidType::ILS: {
                osg::ref_ptr<osg::ShapeDrawable> ilsShape = new osg::ShapeDrawable(
                    new osg::Cone(osg::Vec3(0.0f, 0.0f, 0.0f), 40.0f, 20.0f)
                );
                ilsShape->setColor(osg::Vec4(1.0f, 0.0f, 1.0f, 1.0f));
                navGeode->addDrawable(ilsShape);
                break;
            }
            default:
                break;
        }
        
        // Add label
        osg::ref_ptr<osgText::Text> label = new osgText::Text;
        label->setText(navAid.id);
        label->setPosition(osg::Vec3(0.0f, 0.0f, 60.0f));
        label->setColor(osg::Vec4(1.0f, 1.0f, 1.0f, 1.0f));
        navGeode->addDrawable(label);
        
        // Position the navaid
        osg::ref_ptr<osg::MatrixTransform> transform = new osg::MatrixTransform;
        osg::Matrixd matrix;
        matrix.makeTranslate(
            navAid.longitude * 100000.0,  // Scale for visualization
            navAid.latitude * 100000.0,
            navAid.elevation
        );
        transform->setMatrix(matrix);
        transform->addChild(navGeode);
        
        _visualizationNode->addChild(transform);
    }
}
