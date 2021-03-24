# Install script for directory: /mnt/catkin_ws/src/turtlebot3_manipulation/turtlebot3_manipulation_slam

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/mnt/catkin_ws/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/mnt/catkin_ws/build/turtlebot3_manipulation/turtlebot3_manipulation_slam/catkin_generated/installspace/turtlebot3_manipulation_slam.pc")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/turtlebot3_manipulation_slam/cmake" TYPE FILE FILES
    "/mnt/catkin_ws/build/turtlebot3_manipulation/turtlebot3_manipulation_slam/catkin_generated/installspace/turtlebot3_manipulation_slamConfig.cmake"
    "/mnt/catkin_ws/build/turtlebot3_manipulation/turtlebot3_manipulation_slam/catkin_generated/installspace/turtlebot3_manipulation_slamConfig-version.cmake"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/turtlebot3_manipulation_slam" TYPE FILE FILES "/mnt/catkin_ws/src/turtlebot3_manipulation/turtlebot3_manipulation_slam/package.xml")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/turtlebot3_manipulation_slam" TYPE DIRECTORY FILES
    "/mnt/catkin_ws/src/turtlebot3_manipulation/turtlebot3_manipulation_slam/config"
    "/mnt/catkin_ws/src/turtlebot3_manipulation/turtlebot3_manipulation_slam/launch"
    "/mnt/catkin_ws/src/turtlebot3_manipulation/turtlebot3_manipulation_slam/rviz"
    )
endif()

