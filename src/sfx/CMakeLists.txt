set( MODULE_NAME sfx )

set( CPP_FILES
    sfx_Manager.cpp
    sfx_Sample.cpp
    sfx_Thread.cpp
)

set( MOC_SRC_FILES
    sfx_Thread.h
)

add_library( ${MODULE_NAME} STATIC ${CPP_FILES} ${MOC_SRC_FILES} )
if( NOT USE_QT4 )
    target_link_libraries(${MODULE_NAME} PRIVATE Qt6::Core)
endif()
