# Airplane Simulator

[![Build Status](https://github.com/yourusername/airplane-simulator/actions/workflows/build.yml/badge.svg)](https://github.com/yourusername/airplane-simulator/actions)
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)

A high-fidelity flight simulator built with OpenSceneGraph and Qt, featuring realistic flight dynamics, detailed aircraft models, and stunning visual effects.

## ✨ Features

### 🛩️ Aircraft Fleet
- **Helicopters**: AW101, R44, UH-60 Black Hawk
- **Fighters**: F-16 Fighting Falcon, F-35A Lightning II, P-51 Mustang Mk III
- **Civilian**: Cessna 172, C-130 Hercules
- **Gliders**: PW-5

### 🌍 Scenery & Environment
- High-resolution photorealistic scenery of Oahu island
- Global low-resolution satellite imagery
- Dynamic weather system with clouds, fog, and atmospheric effects
- Accurate celestial bodies with 1000+ visible stars

### 🎮 Flight Systems
- Advanced flight dynamics based on real-world data
- Realistic avionics and instrumentation
- Interactive cockpit controls
- Built-in moving map with navigation aids

## 🚀 Getting Started

### System Requirements
- **OS**: Windows 10/11, Linux (Ubuntu/Debian)
- **CPU**: Quad-core processor (3.0 GHz+)
- **GPU**: Dedicated GPU with 4GB+ VRAM
- **RAM**: 8GB minimum, 16GB recommended
- **Storage**: 20GB available space

### Installation

#### Windows
1. Download the latest installer from [Releases](https://github.com/yourusername/airplane-simulator/releases)
2. Run the installer and follow the on-screen instructions
3. Launch from Start Menu or Desktop shortcut

#### Linux (Ubuntu/Debian)
```bash
# Install required dependencies
sudo apt update
sudo apt install -y libopenal1 libalut0 libopenscenegraph-3.4 libqt5opengl5

# Download and install packages
wget https://github.com/yourusername/airplane-simulator/releases/latest/download/airplane-simulator_amd64.deb
sudo dpkg -i airplane-simulator_amd64.deb

# Launch the simulator
airplane-simulator
```

## 🛠️ Building from Source

### Prerequisites
- CMake 3.21+
- Qt 6.0+
- OpenSceneGraph 3.6+
- OpenAL 1.1+
- libxml2

#### Windows Dependencies
1. Install [Qt 6.x](https://www.qt.io/download-qt-installer)
2. Install [OpenSceneGraph](https://github.com/openscenegraph/OpenSceneGraph)
3. Install [OpenAL SDK](https://www.openal.org/downloads/)
4. Set environment variables:
   - `QT_DIR`: Path to Qt installation
   - `OSG_ROOT`: Path to OpenSceneGraph
   - `OPENAL_DIR`: Path to OpenAL SDK

#### Linux Dependencies
```bash
# Ubuntu/Debian
sudo apt install -y build-essential cmake \
    libopenscenegraph-dev libqt6opengl6-dev \
    libopenal-dev libalut-dev libxml2-dev
```

### Building with CMake
```bash
# Clone the repository
git clone https://github.com/yourusername/airplane-simulator.git
cd airplane-simulator

# Create build directory
mkdir -p build && cd build

# Configure and build
cmake -DCMAKE_BUILD_TYPE=Release ..
cmake --build . --config Release -- -j$(nproc)

# Run the simulator
./bin/airplane-simulator
```

### Building with qmake (legacy)
```bash
cd src
qmake mscsim.pro
make -j$(nproc)
```

## 📸 Screenshots

| Feature | Preview |
|---------|---------|
| **Cockpit View** | ![Cockpit](screenshot_aw101.jpg) |
| **External View** | ![External View](screenshot_f16.jpg) |
| **Weather Effects** | ![Weather](screenshot_clouds.jpg) |
| **Night Flying** | ![Night](screenshot_stars.jpg) |

## 🤝 Contributing

Contributions are welcome! Please read our [Contributing Guidelines](CONTRIBUTING.md) for details.

## 📄 License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## 🙏 Acknowledgments
- OpenSceneGraph community
- Qt Framework
- OpenAL team
- All contributors and testers
