# Flight Simulator Project

This repository contains the setup and configuration for a flight simulator based on the MSCSim project.

## Prerequisites

- Ubuntu 20.04
- CMake 3.16+
- Qt5
- OpenSceneGraph
- QWT
- FreeALUT
- MSCSim data packages

## Installation

1. Install system dependencies:
```bash
sudo add-apt-repository universe
sudo apt update
sudo apt install -y \
    build-essential \
    cmake \
    qtbase5-dev \
    libqt5opengl5-dev \
    libopenscenegraph-dev \
    libqwt-qt5-dev \
    freeglut3-dev \
    libalut-dev

# Install MSCSim data packages
sudo apt install mscsim-data mscsim-data-terrain
```

2. Clone and build FreeALUT (if not already installed):
```bash
git clone https://github.com/vancegroup/freealut.git
cd freealut
mkdir build && cd build
cmake ..
make
sudo make install
sudo ldconfig
```

## Building

```bash
mkdir -p build
cd build
cmake .. -DQWT_INCLUDE_DIR=/usr/include/qwt -DQWT_LIBRARY=/usr/lib/x86_64-linux-gnu/libqwt-qt5.so
make
```

## Configuration

1. Update `data/scenery/scenery.xml` to point to the correct terrain data paths
2. Adjust aircraft configuration in `data/aircraft/` as needed
3. For better performance, consider adjusting LOD settings in `data/settings.xml`

## Running

```bash
cd build
./mscsim
```

## Troubleshooting

- **Missing alut.h**: Ensure FreeALUT is installed and in your include path
- **Missing gauges**: Verify QWT is properly linked and the include paths are correct
- **Poor performance**: Adjust LOD settings and texture quality in the configuration
- **Missing terrain**: Check the paths in `scenery.xml` point to the correct data location

## License

This project is licensed under the GPL v3 License - see the LICENSE file for details.
