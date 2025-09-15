# Airplane Simulator

[![Build Status](https://github.com/Tabulater/Airplane-Simulator/actions/workflows/build.yml/badge.svg)](https://github.com/Tabulater/Airplane-Simulator/actions)
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)

A high-fidelity flight simulator built with OpenSceneGraph and Qt, featuring realistic flight dynamics, detailed aircraft models, and stunning visual effects.

## ✨ Features

### 🛩️ Aircraft Fleet
- **Helicopters**: AW101, R44, UH-60 Black Hawk
- **Fighters**: F-16 Fighting Falcon, F-35A Lightning II, P-51 Mustang Mk III
- **Civilian**: Cessna 172, C-130 Hercules
- **Gliders**: PW-5

### 🌍 Scenery & Environment
- High-resolution photorealistic scenery
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
1. Download the latest installer from [Releases](https://github.com/Tabulater/Airplane-Simulator/releases)
2. Run the installer and follow the on-screen instructions
3. Launch from Start Menu or Desktop shortcut

#### Linux (Ubuntu/Debian)
```bash
# Install required dependencies
sudo apt update
sudo apt install -y libopenal1 libalut0 libopenscenegraph-3.4 libqt5opengl5

# Download and install packages
wget [https://github.com/Tabulater/Airplane-Simulator/releases/latest/download/airplane-simulator_amd64.deb](https://github.com/Tabulater/Airplane-Simulator/releases/latest/download/airplane-simulator_amd64.deb)
sudo dpkg -i airplane-simulator_amd64.deb

# Launch the simulator
airplane-simulator