cmake_minimum_required(VERSION 2.8.3)
project(tiburon_gui)
add_definitions(-std=c++14)
find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy
  genmsg
  qt_build
  roscpp
  roslib
  image_transport cv_bridge
)
find_package(OpenCV REQUIRED)

find_package(Qt4 REQUIRED COMPONENTS
  QtCore
  QtGui
)

file(GLOB QT_FORMS RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} ui/*.ui)
set(QT_MOC 
	include/tiburon_gui/mainwin.h 
	include/tiburon_gui/gate.h
	include/tiburon_gui/bluebucket.h
	include/tiburon_gui/redbucket.h
	include/tiburon_gui/yellowflare.h
	include/tiburon_gui/redflare.h)
SET(QT_SOURCES 
	src/mainwin.cpp 
	src/gate.cpp
	src/bluebucket.cpp
	src/redbucket.cpp
	src/yellowflare.cpp
	src/redflare.cpp)

QT4_WRAP_UI(QT_FORMS_HPP ${QT_FORMS})
QT4_WRAP_CPP(QT_MOC_HPP ${QT_MOC})

catkin_package(
CATKIN_DEPENDS message_runtime
)

include(
  ${QT_USE_FILE}
)

include_directories(
include
  ${OpenCV_INCLUDE_DIRS}
  ${catkin_INCLUDE_DIRS}
  ${QT_INCLUDE_DIRS}
  ${CMAKE_CURRENT_BINARY_DIR}
)

add_library(qt_lib ${QT_SOURCES} ${QT_FORMS_HPP} ${QT_MOC_HPP})
target_link_libraries(qt_lib ${QT_LIBRARIES} ${catkin_LIBRARIES} ${OPENCV_LIBS})

add_library(tub_lib ${QT_SOURCES} ${QT_MOC})#include/tiburon_gui/mainwin.h  src/mainwin.cpp include/tiburon_gui/gate.h  src/gate.cpp)
target_link_libraries(tub_lib qt_lib ${OpenCV_LIBS})

add_executable(gui src/main.cpp)
target_link_libraries(gui tub_lib ${catkin_LIBRARIES} ${OpenCV_LIBS})
