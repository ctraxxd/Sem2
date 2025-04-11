cmake_minimum_required(VERSION 3.29)
project(Task1)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(CMAKE_PREFIX_PATH "/Users/ctraxxd/Qt/6.8.2/macos")

find_package(Qt6 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)

add_executable(Task1 main.cpp
        mainWindow.cpp
        mainWindow.h
        workWithDate.cpp
        workWithDate.h)
target_link_libraries(Task1
        Qt::Core
        Qt::Gui
        Qt::Widgets
)

