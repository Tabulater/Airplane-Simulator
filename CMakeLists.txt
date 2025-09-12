cmake_minimum_required(VERSION 3.16)
project(FlightSimulator VERSION 1.0 LANGUAGES CXX)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find required packages
find_package(Qt5 COMPONENTS Core Gui Widgets OpenGL REQUIRED)
find_package(OpenGL REQUIRED)
find_package(OpenSceneGraph REQUIRED)
find_package(ALUT REQUIRED)

# Find QWT
find_path(QWT_INCLUDE_DIR NAMES qwt.h PATH_SUFFIXES qwt-qt5 qwt)
find_library(QWT_LIBRARY NAMES qwt-qt5 qwt)

if(NOT QWT_INCLUDE_DIR OR NOT QWT_LIBRARY)
    message(FATAL_ERROR "QWT not found. Please install libqwt-qt5-dev")
endif()

# Include directories
include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}/src
    ${Qt5Core_INCLUDE_DIRS}
    ${Qt5Gui_INCLUDE_DIRS}
    ${Qt5Widgets_INCLUDE_DIRS}
    ${OPENGL_INCLUDE_DIR}
    ${OPENSCENEGRAPH_INCLUDE_DIRS}
    ${QWT_INCLUDE_DIR}
    ${ALUT_INCLUDE_DIR}
)

# Add executable
add_executable(mscsim
    src/main.cpp
    # Add other source files here
)

# Link libraries
target_link_libraries(mscsim
    PRIVATE
    Qt5::Core
    Qt5::Gui
    Qt5::Widgets
    Qt5::OpenGL
    ${OPENGL_LIBRARIES}
    ${OPENSCENEGRAPH_LIBRARIES}
    ${QWT_LIBRARY}
    ${ALUT_LIBRARIES}
)

# Install target
install(TARGETS mscsim DESTINATION bin)

# Copy data files
file(GLOB_RECURSE DATA_FILES "data/*")
foreach(DATA_FILE ${DATA_FILES})
    get_filename_component(DATA_DIR ${DATA_FILE} DIRECTORY)
    install(FILES ${DATA_FILE} DESTINATION ${DATA_DIR})
endforeach()
