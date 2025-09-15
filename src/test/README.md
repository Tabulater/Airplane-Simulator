# Weather System Test Application

This directory contains a test application for the weather system in the MScSim flight simulator. The test application provides an interactive environment to visualize and test different weather conditions and effects.

## Building the Test Application

The test application is built automatically when you build the main MScSim project. It will be created as `test_weather` in your build directory.

### Prerequisites

- CMake 3.16 or higher
- C++17 compatible compiler
- OpenSceneGraph (with osgDB, osgGA, osgParticle, osgViewer, osgShadow, osgText)
- OpenGL

### Building

1. Create a build directory (if you haven't already):
   ```
   mkdir build
   cd build
   ```

2. Run CMake to configure the project:
   ```
   cmake ..
   ```

3. Build the project:
   ```
   cmake --build .
   ```

The test application will be created as `test_weather` in your build directory.

## Running the Test Application

To run the test application:

```
./test_weather
```

## Controls

- **1-0, -, =**: Change weather preset
  - 1: Clear
  - 2: Few clouds
  - 3: Scattered clouds
  - 4: Broken clouds
  - 5: Overcast
  - 6: Light rain
  - 7: Heavy rain
  - 8: Thunderstorm
  - 9: Light snow
  - 0: Heavy snow
  - -: Fog
  - =: Hail

- **c**: Toggle clouds
- **f**: Toggle fog
- **w**: Toggle wind
- **p**: Toggle precipitation

## Features

- Interactive weather preset switching
- Real-time weather effects
- Dynamic cloud rendering
- Configurable fog and visibility
- Precipitation effects (rain, snow, hail)
- Wind simulation

## Integration with MScSim

The weather system is designed to be easily integrated into the main MScSim flight simulator. The `WeatherSystem` class provides a clean interface for controlling weather conditions and effects.

## Troubleshooting

If you encounter any issues:

1. **Missing fonts**: The application uses Arial font. If it's not found, it may use a default font which might not look as good. Install Arial or modify the code to use a different font.

2. **Performance issues**: The weather effects can be GPU-intensive. Try reducing the quality settings in the `WeatherSystem` class if you experience performance problems.

3. **Missing textures**: The application may look for texture files in specific locations. Make sure the working directory is set correctly when running the application.

## License

This software is part of the MScSim flight simulator and is licensed under the same terms as the main project.
