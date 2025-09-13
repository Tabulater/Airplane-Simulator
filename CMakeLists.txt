cmake_minimum_required(VERSION 3.16)
project(FlightSimulator VERSION 1.0 LANGUAGES CXX)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find required packages
find_package(Qt5 COMPONENTS Core Gui Widgets OpenGL REQUIRED)
find_package(OpenGL REQUIRED)
find_package(OpenSceneGraph REQUIRED COMPONENTS osgDB osgGA osgParticle osgViewer osgShadow osgText)
find_package(ALUT REQUIRED)

# Check for required OSG components
set(REQUIRED_OSG_COMPONENTS
    osg
    osgDB
    osgGA
    osgParticle
    osgViewer
    osgShadow
    osgText
)

foreach(COMPONENT ${REQUIRED_OSG_COMPONENTS})
    if(NOT ${OSG${COMPONENT}_FOUND} AND NOT ${COMPONENT}_FOUND)
        message(FATAL_ERROR "Required OpenSceneGraph component ${COMPONENT} not found.")
    endif()
endforeach()

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
    ${CMAKE_CURRENT_SOURCE_DIR}/src/Aircraft
    ${CMAKE_CURRENT_SOURCE_DIR}/src/FlightDynamics
    ${CMAKE_CURRENT_SOURCE_DIR}/src/Navigation
    ${CMAKE_CURRENT_SOURCE_DIR}/src/Environment
)

# Add executable
# Add source files
file(GLOB_RECURSE SRC_FILES 
    src/*.cpp 
    src/Aircraft/*.cpp 
    src/FlightDynamics/*.cpp
    src/Navigation/*.cpp
    src/Environment/*.cpp
)

add_executable(mscsim ${SRC_FILES})

# Include directories
target_include_directories(mscsim PRIVATE 
    ${CMAKE_CURRENT_SOURCE_DIR}/src
    ${Qt5Core_INCLUDE_DIRS}
    ${Qt5Gui_INCLUDE_DIRS}
    ${Qt5Widgets_INCLUDE_DIRS}
    ${OPENGL_INCLUDE_DIR}
    ${OPENSCENEGRAPH_INCLUDE_DIRS}
    ${QWT_INCLUDE_DIR}
    ${ALUT_INCLUDE_DIR}
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
    ${OSG_LIBRARY}
    ${OSGDB_LIBRARY}
    ${OSGGA_LIBRARY}
    ${OSGPARTICLE_LIBRARY}
    ${OSGVIEWER_LIBRARY}
    ${OSGSHADOW_LIBRARY}
    ${OSGTEXT_LIBRARY}
    ${QWT_LIBRARY}
    ${ALUT_LIBRARIES}
    ${CMAKE_THREAD_LIBS_INIT}
)

# Set C++ standard and properties
set_target_properties(mscsim PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED ON
    POSITION_INDEPENDENT_CODE ON
)

# Copy required DLLs on Windows
if(WIN32)
    add_custom_command(TARGET mscsim POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_if_different
            ${QT5_CORE_DLL} $<TARGET_FILE_DIR:mscsim>
        COMMAND ${CMAKE_COMMAND} -E copy_if_different
            ${QT5_GUI_DLL} $<TARGET_FILE_DIR:mscsim>
        COMMAND ${CMAKE_COMMAND} -E copy_if_different
            ${QT5_WIDGETS_DLL} $<TARGET_FILE_DIR:mscsim>
        COMMAND ${CMAKE_COMMAND} -E copy_if_different
            ${QT5_OPENGL_DLL} $<TARGET_FILE_DIR:mscsim>
    )
endif()

# Install target
install(TARGETS mscsim DESTINATION bin)

# Copy data files
file(GLOB_RECURSE DATA_FILES "data/*")
foreach(DATA_FILE ${DATA_FILES})
    get_filename_component(DATA_DIR ${DATA_FILE} DIRECTORY)
    install(FILES ${DATA_FILE} DESTINATION ${DATA_DIR})
endforeach()
