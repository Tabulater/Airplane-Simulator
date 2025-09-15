#!/bin/bash

# Exit on error
set -e

echo "Setting up Flight Simulator build environment..."

# Create build directory
mkdir -p ../build
cd ../build

# Configure with CMake
echo "Running CMake..."
cmake .. \
    -DCMAKE_BUILD_TYPE=Release \
    -DQWT_INCLUDE_DIR=/usr/include/qwt \
    -DQWT_LIBRARY=/usr/lib/x86_64-linux-gnu/libqwt-qt5.so

# Build the project
echo "Building project..."
make -j$(nproc)

echo "Build complete! Run with: ./build/mscsim"
