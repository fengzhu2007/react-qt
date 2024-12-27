cmake_minimum_required(VERSION 3.10)

project(ReactQtDemo  VERSION 0.1 LANGUAGES C CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)



find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)



include_directories(SYSTEM "../src")



if (CMAKE_BUILD_TYPE STREQUAL "Debug")
    add_definitions(-DQ_DEBUG)
endif()


set(DEMO_SOURCES
        main.cpp
        demo_window.h demo_window.cpp
)




if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(ReactQtDemo
        MANUAL_FINALIZATION
        ${DEMO_SOURCES}
    )

else()
    if(ANDROID)
        add_library(ReactQtDemo SHARED
            ${DEMO_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(ReactQtDemo
            ${DEMO_SOURCES}

        )
    endif()
endif()



if(CMAKE_HOST_WIN32)


target_link_libraries(ReactQtDemo PRIVATE Qt${QT_VERSION_MAJOR}::Widgets DbgHelp ReactQt wRect)

else()
target_link_libraries(ReactQtDemo PRIVATE Qt${QT_VERSION_MAJOR}::Widgets App wRect)

endif()



if(${QT_VERSION} VERSION_LESS 6.1.0)
  set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.ReactQtDemo)
endif()
set_target_properties(ReactQtDemo PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
install(TARGETS ReactQtDemo
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(ReactQtDemo)
endif()



