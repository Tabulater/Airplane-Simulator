cmake_minimum_required(VERSION 3.21)

# Set Qt version to 6
set(QT_VERSION 6)

project( airplane-simulator )

################################################################################

set( CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/../bin )

################################################################################

set( CMAKE_INCLUDE_CURRENT_DIR ON )

set(CMAKE_CXX_STANDARD 17 )
set(CMAKE_CXX_STANDARD_REQUIRED ON )

################################################################################

# add_definitions( -DSIM_CONSOLE_OUTPUT )
# add_definitions( -DSIM_OSG_DEBUG_INFO )
add_definitions( -DSIM_INTERSECTIONS )
# add_definitions( -DSIM_LOCAL_DATA_DIR )
add_definitions( -DSIM_SKYDOME_SCALING )
add_definitions( -DSIM_USE_THREADS )
add_definitions( -DSIM_VERTICALSYNC )

if( UNIX )
    add_definitions( -D_LINUX_ )
elseif( WIN32 )
    add_definitions( -DWIN32 )
    add_definitions( -D_WINDOWS )
    add_definitions( -D_CRT_SECURE_NO_DEPRECATE )
    add_definitions( -D_SCL_SECURE_NO_WARNINGS )
    add_definitions( -D_USE_MATH_DEFINES )
endif()

################################################################################

set( CMAKE_CXX_FLAGS "-Wall -O3 -std=c++17" )

################################################################################

include_directories( . )

if( WIN32 )
    include_directories( ${OSG_ROOT}/include/ )
    # Use the explicitly set LIBXML2_INCLUDE_DIR
    include_directories( ${LIBXML2_INCLUDE_DIR} )
    # Also add the parent directory as some code might include <libxml/tree.h>
    get_filename_component(LIBXML2_PARENT_DIR ${LIBXML2_INCLUDE_DIR} DIRECTORY)
    include_directories( ${LIBXML2_PARENT_DIR} )
    
    # Add OpenAL include path
    include_directories( "C:/Program Files (x86)/OpenAL 1.1 SDK/include" )
    
    message(STATUS "LibXml2 include path: ${LIBXML2_INCLUDE_DIR}")
    message(STATUS "LibXml2 parent dir: ${LIBXML2_PARENT_DIR}")
elseif( UNIX )
    include_directories( /usr/include/libxml2 )
endif()

################################################################################

set( CMAKE_AUTOMOC ON )
set( CMAKE_AUTORCC ON )
set( CMAKE_AUTOUIC ON )

if( WIN32 )
    find_package(Qt${QT_VERSION} COMPONENTS Core Widgets OpenGL OpenGLWidgets Svg Xml REQUIRED)
    set(QT_X11EXTRAS_LIBRARIES "")
else()
    find_package(Qt${QT_VERSION} COMPONENTS Core Widgets OpenGL OpenGLWidgets Svg X11Extras Xml REQUIRED)
    set(QT_X11EXTRAS_LIBRARIES Qt${QT_VERSION}::X11Extras)
endif()

# Set Qt include and library variables
set(QT_INCLUDES 
    ${Qt${QT_VERSION}Core_INCLUDE_DIRS}
    ${Qt${QT_VERSION}Widgets_INCLUDE_DIRS}
    ${Qt${QT_VERSION}OpenGL_INCLUDE_DIRS}
)

set(QT_LIBRARIES
    Qt${QT_VERSION}::Core
    Qt${QT_VERSION}::Widgets
    Qt${QT_VERSION}::OpenGL
    Qt${QT_VERSION}::OpenGLWidgets
    Qt${QT_VERSION}::Svg
    Qt${QT_VERSION}::Xml
    ${QT_X11EXTRAS_LIBRARIES}
)

################################################################################

find_package( OpenSceneGraph REQUIRED
    OpenThreads
    osg
    osgDB
    osgGA
    osgParticle
    osgSim
    osgText
    osgUtil
    osgViewer
    osgWidget
)
include_directories( ${OPENSCENEGRAPH_INCLUDE_DIRS} )

################################################################################

# Find LibXml2 with explicit paths if provided
if(DEFINED LIBXML2_INCLUDE_DIR AND DEFINED LIBXML2_LIBRARIES)
    set(LibXml2_INCLUDE_DIR ${LIBXML2_INCLUDE_DIR})
    set(LibXml2_LIBRARIES ${LIBXML2_LIBRARIES})
    set(LibXml2_FOUND TRUE)
    message(STATUS "Using manually specified LibXml2: ${LIBXML2_LIBRARIES}")
    message(STATUS "LibXml2 includes: ${LIBXML2_INCLUDE_DIR}")
else()
    find_package(LibXml2 REQUIRED)
    message(STATUS "Found LibXml2: ${LibXml2_LIBRARIES}")
    message(STATUS "LibXml2 includes: ${LibXml2_INCLUDE_DIRS}")
endif()

################################################################################

# Find iconv or use Windows API as fallback
if(WIN32)
    # On Windows, we'll use WideCharToMultiByte/MultiByteToWideChar
    add_definitions(-DHAVE_WINDOWS_CODEPAGE)
    set(HAVE_ICONV FALSE)
else()
    find_package(Iconv)
    if(ICONV_FOUND)
        add_definitions(-DHAVE_ICONV)
        set(HAVE_ICONV TRUE)
    else()
        message(WARNING "iconv not found, limited character set support")
        set(HAVE_ICONV FALSE)
    endif()
endif()

find_package( OpenAL REQUIRED )
include_directories( ${OPENAL_INCLUDE_DIR} )

################################################################################

# Make ALUT optional
option(USE_ALUT "Enable ALUT support" ON)
if(USE_ALUT)
    find_library(ALUT_LIBRARY alut)
    if(ALUT_LIBRARY)
        message(STATUS "Found ALUT: ${ALUT_LIBRARY}")
        add_definitions(-DHAVE_ALUT)
    else()
        message(STATUS "ALUT not found, building without ALUT support")
    endif()
endif()

################################################################################

if( UNIX )
    find_library( X11_LIBRARY X11 )
    find_library( XSS_LIBRARY Xss )
endif()

################################################################################

add_subdirectory( cgi )
add_subdirectory( fdm )
add_subdirectory( fdm_aw101 )
add_subdirectory( fdm_c130 )
add_subdirectory( fdm_c172 )
add_subdirectory( fdm_f16 )
add_subdirectory( fdm_f35a )
add_subdirectory( fdm_p51 )
add_subdirectory( fdm_pw5 )
add_subdirectory( fdm_r44 )
add_subdirectory( fdm_uh60 )
add_subdirectory( g1000 )
add_subdirectory( gui )
add_subdirectory( hid )
add_subdirectory( nav )
add_subdirectory( sfx )

################################################################################

set( CPP_FILES
    Autopilot.cpp
    main.cpp
    Manager.cpp
    Simulation.cpp
)

set( HEADERS
    charset_utils.h
    cgi/defs.h
    cgi/Module.h
    cgi/Path.h
)

set( MOC_SRC_FILES
    Manager.h
    Simulation.h
)

set( RCC_SRC_FILES
    mscsim.qrc
)

set( SOURCES ${CPP_FILES} ${HEADERS} ${MOC_SRC_FILES} ${RCC_SRC_FILES} )
set( SOURCES ${CPP_FILES} ${MOC_SRC_FILES} ${RCC_SRC_FILES} )

if( WIN32 )
    ENABLE_LANGUAGE(RC)
    set( SOURCES mscsim.rc ${SOURCES} )
endif()

################################################################################

add_executable( ${PROJECT_NAME} WIN32 ${SOURCES} )

################################################################################

if( WIN32 )
    # Add Windows character set conversion library
    set(PLATFORM_LIBS ${PLATFORM_LIBS} kernel32 user32 gdi32 winspool shell32 ole32 oleaut32 uuid comdlg32 advapi32)
    
    set( LIBS
        ${QT_LIBRARIES}
        ${OPENSCENEGRAPH_LIBRARIES}
        ${LIBXML2_LIBRARIES}
        ${PLATFORM_LIBS}
        ${OPENAL_LIBRARY}
        winmm
    )
    if(ALUT_LIBRARY)
        list(APPEND LIBS ${ALUT_LIBRARY})
    endif()
endif()

if( UNIX )
    set( LIBS
        ${QT_LIBRARIES}
        ${OPENSCENEGRAPH_LIBRARIES}
        ${LIBXML2_LIBRARIES}
        ${OPENAL_LIBRARY}
    )
    if(ALUT_LIBRARY)
        list(APPEND LIBS ${ALUT_LIBRARY})
    endif()
    if(X11_LIBRARY)
        list(APPEND LIBS ${X11_LIBRARY})
    endif()
    if(XSS_LIBRARY)
        list(APPEND LIBS ${XSS_LIBRARY})
    endif()
endif()

################################################################################

target_link_libraries( ${PROJECT_NAME}

    -Wl,--start-group

    cgi
    fdm
    fdm_aw101
    fdm_c130
    fdm_c172
    fdm_f16
    fdm_f35a
    fdm_p51
    fdm_pw5
    fdm_r44
    fdm_uh60
    g1000
    gui
    hid
    nav
    sfx

    ${LIBS}

    -Wl,--end-group
)
