# Weather System

The weather system in MScSim provides realistic atmospheric conditions including clouds, fog, precipitation, and wind effects. This document outlines the key components and how to use them.

## Components

### 1. WeatherSystem Class

The main class that manages all weather-related effects. It provides:
- Weather presets (clear, few clouds, scattered, broken, overcast, rain, snow, etc.)
- Dynamic weather transitions
- Cloud layer management
- Fog effects
- Precipitation (rain, snow, hail)
- Wind simulation
- Atmospheric lighting

### 2. CloudLayer Class

Represents a single layer of clouds with configurable properties:
- Cloud type (cirrus, alto, stratus, cumulus, cumulonimbus)
- Coverage and density
- Altitude and thickness
- Movement (speed and direction)
- Color and appearance

### 3. Weather Presets

The system includes several predefined weather presets:
- `CLEAR`: Clear skies
- `FEW_CLOUDS`: Mostly clear with some clouds
- `SCATTERED`: Partly cloudy
- `BROKEN`: Mostly cloudy
- `OVERCAST`: Completely overcast
- `LIGHT_RAIN`: Light rain
- `HEAVY_RAIN`: Heavy rain
- `THUNDERSTORM`: Thunderstorm with rain and lightning
- `LIGHT_SNOW`: Light snowfall
- `HEAVY_SNOW`: Heavy snowfall
- `FOG`: Dense fog
- `HAIL`: Hail storm
- `DUST_STORM`: Dust/sand storm
- `TORNADO`: Tornado conditions

## Usage

### Basic Setup

```cpp
#include "Environment/WeatherSystem.h"
#include "Environment/CloudLayer.h"

// Create and initialize the weather system
osg::ref_ptr<WeatherSystem> weatherSystem = new WeatherSystem;
if (weatherSystem->initialize()) {
    // Add to your scene graph
    root->addChild(weatherSystem);
    
    // Set a weather preset
    weatherSystem->setWeatherPreset(WeatherSystem::WeatherPreset::CLEAR);
}

// In your update loop
double currentTime = viewer->elapsedTime();
osg::Vec3 observerPos = camera->getViewMatrix().getTrans();
weatherSystem->update(currentTime, observerPos);
```

### Creating Custom Cloud Layers

```cpp
// Create a custom cloud layer
CloudLayer::Parameters params;
params.type = CloudLayer::CUMULUS;
params.coverage = 0.7f;  // 70% coverage
params.density = 0.6f;   // Medium density
params.altitude = 1000.0f; // 1000m above ground
params.thickness = 500.0f; // 500m thick
params.scale = 1.5f;     // Scale of cloud patterns
params.speed = 1.0f;     // Movement speed
params.direction.set(1.0f, 0.5f); // Movement direction
params.color.set(1.0f, 1.0f, 1.0f, 1.0f); // White clouds

osg::ref_ptr<CloudLayer> cloudLayer = new CloudLayer(params);
weatherSystem->addCloudLayer(cloudLayer);
```

### Dynamic Weather Transitions

```cpp
// Smoothly transition to a new weather preset
weatherSystem->transitionToPreset(
    WeatherSystem::WeatherPreset::THUNDERSTORM, // Target preset
    30.0f  // Transition duration in seconds
);

// Or transition specific parameters
weatherSystem->transitionClouds(0.8f, 0.7f, 20.0f); // coverage, density, duration
weatherSystem->transitionFog(0.8f, 2000.0f, 20.0f); // density, visibility, duration
```

## Integration with Aircraft Systems

The weather system can affect aircraft performance and systems:
- Wind affects flight dynamics
- Precipitation can reduce visibility and affect aerodynamics
- Icing conditions can form on aircraft surfaces
- Turbulence can be simulated based on weather conditions

## Performance Considerations

For optimal performance:
1. Limit the number of active cloud layers (2-3 recommended)
2. Use lower resolution noise textures for distant clouds
3. Disable precipitation when not needed
4. Adjust the level of detail based on distance from the observer

## Configuration

Weather parameters can be configured in `data/weather/weather_config.xml` or programmatically at runtime.
