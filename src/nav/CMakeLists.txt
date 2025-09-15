set( MODULE_NAME nav )

set( CPP_FILES
    nav_DataBase.cpp
    nav_Frequency.cpp
    nav_Manager.cpp
)

add_library( ${MODULE_NAME} STATIC ${CPP_FILES} )
if( NOT USE_QT4 )
    target_link_libraries(${MODULE_NAME} PRIVATE Qt6::Xml)
endif()
