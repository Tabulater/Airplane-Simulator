#ifndef NAVIGATION_SYSTEM_H
#define NAVIGATION_SYSTEM_H

#include <string>
#include <vector>
#include <memory>
#include <unordered_map>
#include <osg/Referenced>
#include <osg/ref_ptr>

// Forward declarations
namespace osg {
    class Node;
    class Group;
}

class NavigationSystem : public osg::Referenced {
public:
    // Types of navigation aids
    enum class NavAidType {
        VOR,
        VOR_DME,
        VORTAC,
        NDB,
        ILS,
        DME,
        TACAN
    };

    // Navigation aid structure
    struct NavAid {
        std::string id;
        std::string name;
        NavAidType type;
        double latitude;
        double longitude;
        double elevation;  // in meters
        double frequency;  // in MHz
        int range;        // in nautical miles
        std::string icao_region;
        
        // For VOR/ILS
        double magnetic_variation;  // in degrees
        
        // For ILS
        double heading;    // in degrees true
        double glide_path; // in degrees
        
        // For DME/TACAN
        int channel;
    };

    // Airport structure
    struct Airport {
        std::string icao;
        std::string name;
        std::string city;
        std::string country;
        double latitude;
        double longitude;
        double elevation;  // in meters
        std::string timezone;
        
        // Runway information
        struct Runway {
            std::string id1;
            std::string id2;
            double length;  // in meters
            double width;   // in meters
            double heading1; // in degrees true
            double heading2; // in degrees true
            double lat1, lon1; // Threshold 1
            double lat2, lon2; // Threshold 2
            bool has_ils;
            int ils_frequency; // in kHz
            double ils_heading; // in degrees true
            double ils_glide_path; // in degrees
        };
        
        std::vector<Runway> runways;
        
        // Communication frequencies
        struct Frequency {
            std::string type;  // ATIS, TOWER, GROUND, etc.
            double value;      // in MHz
        };
        
        std::vector<Frequency> frequencies;
    };

    // Waypoint structure
    struct Waypoint {
        std::string id;
        std::string name;
        std::string icao_region;
        std::string type;  // VFR, IFR, etc.
        double latitude;
        double longitude;
    };

    // Flight plan
    struct FlightPlan {
        std::string id;
        std::string departure_airport;
        std::string arrival_airport;
        std::string alternate_airport;
        std::vector<std::string> waypoints;
        double cruise_altitude;  // in feet
        std::string route_string;
    };

    // Singleton access
    static NavigationSystem* instance();
    
    // Load navigation data
    bool loadNavigationData(const std::string& dataPath);
    
    // Get navigation aids
    const std::vector<NavAid>& getNavAids() const { return _navAids; }
    
    // Get airports
    const std::vector<Airport>& getAirports() const { return _airports; }
    
    // Find nearest airport
    Airport* findNearestAirport(double lat, double lon, double maxDistance = 100.0);
    
    // Find navigation aid by ID
    NavAid* findNavAid(const std::string& id);
    
    // Create a flight plan
    std::shared_ptr<FlightPlan> createFlightPlan(
        const std::string& departure,
        const std::string& arrival,
        const std::vector<std::string>& waypoints = {},
        double cruiseAlt = 8000.0);
    
    // Get the 3D node for visualization
    osg::Node* getVisualizationNode() const { return _visualizationNode.get(); }
    
    // Update navigation system (for dynamic elements like DME updates)
    void update(double currentTime);

protected:
    NavigationSystem();
    virtual ~NavigationSystem();
    
    // Load specific data files
    bool loadAirports(const std::string& filename);
    bool loadNavAids(const std::string& filename);
    bool loadWaypoints(const std::string& filename);
    
    // Create visualization
    void createVisualization();
    
private:
    static NavigationSystem* _instance;
    
    std::vector<NavAid> _navAids;
    std::vector<Airport> _airports;
    std::vector<Waypoint> _waypoints;
    
    // Indexes for faster lookup
    std::unordered_map<std::string, size_t> _airportIndex;
    std::unordered_map<std::string, size_t> _navAidIndex;
    std::unordered_map<std::string, size_t> _waypointIndex;
    
    // Visualization
    osg::ref_ptr<osg::Group> _visualizationNode;
};

#endif // NAVIGATION_SYSTEM_H
