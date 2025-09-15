#ifndef CFD_INTERFACE_H
#define CFD_INTERFACE_H

#include <string>
#include <vector>
#include <memory>

// Forward declarations
namespace Foam {
    class Time;
    class fvMesh;
}

class CFDInterface {
public:
    enum class SolverType {
        SIMPLE,
        PIMPLE,
        PISO
    };

    struct AeroForces {
        double lift;        // Lift force (N)
        double drag;        // Drag force (N)
        double side_force;  // Side force (N)
        double roll_moment;  // Rolling moment (N·m)
        double pitch_moment; // Pitching moment (N·m)
        double yaw_moment;   // Yawing moment (N·m)
    };

    struct FlightState {
        double airspeed;    // True airspeed (m/s)
        double alpha;       // Angle of attack (radians)
        double beta;        // Sideslip angle (radians)
        double altitude;    // Altitude (m)
        double rho;         // Air density (kg/m³)
        double p, q, r;     // Angular rates (rad/s)
        double phi, theta, psi; // Euler angles (radians)
    };

    // Constructor/Destructor
    CFDInterface();
    ~CFDInterface();

    // Initialize the CFD solver
    bool initialize(const std::string& casePath, SolverType solverType = SolverType::PIMPLE);

    // Update the simulation with current flight state
    bool updateSimulation(const FlightState& state);

    // Get aerodynamic forces and moments
    AeroForces getAerodynamicForces() const;

    // Save the current solution
    void writeSolution() const;

    // Check if the solver is running
    bool isRunning() const;

private:
    // Private implementation to hide OpenFOAM details
    class Impl;
    std::unique_ptr<Impl> pimpl_;
};

#endif // CFD_INTERFACE_H
