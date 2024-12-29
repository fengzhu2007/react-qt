cmake_minimum_required(VERSION 3.10)

project(ReactQt  VERSION 0.1 LANGUAGES C CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)




find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core Widgets Xml Sql Gui Network Concurrent LinguistTools Svg Quick QuickWidgets QuickControls2)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core Widgets Xml Sql Gui Network Concurrent LinguistTools Svg Quick QuickWidgets QuickControls2)




add_library(ReactQt SHARED
        react_qt_global.h
        widgets/push_button.h widgets/push_button.cpp
        plugin.h plugin.cpp
        widgets/label.h widgets/label.cpp
        widgets/dialog.h widgets/dialog.cpp
        widgets/widget.h widgets/widget.cpp
        widgets/frame.h widgets/frame.cpp
        widgets/action.h widgets/action.cpp
        widgets/h_box_layout.h widgets/h_box_layout.cpp
        widgets/v_box_layout.h widgets/v_box_layout.cpp


)





target_link_libraries(ReactQt PRIVATE Qt${QT_VERSION_MAJOR}::Core Qt${QT_VERSION_MAJOR}::Widgets  Qt${QT_VERSION_MAJOR}::Gui  Qt${QT_VERSION_MAJOR}::Svg Qt${QT_VERSION_MAJOR}::Qml Qt${QT_VERSION_MAJOR}::Gui)




target_compile_definitions(ReactQt PRIVATE REACT_QT_LIBRARY)




set(TRANSLATIONS
    zh_CN
)

if(WIN32)
add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy        ${CMAKE_BINARY_DIR}/react-qt/src/${PROJECT_NAME}.dll        ${CMAKE_BINARY_DIR}/src/${PROJECT_NAME}.dll
    COMMENT "Copying file to binary directory"
)
else()


endif()
