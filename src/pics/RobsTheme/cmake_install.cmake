# Install script for directory: /home/ubuntu/k3b-19.12.3/src/pics/RobsTheme

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr")
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

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xk3bx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/share/k3b/pics/RobsTheme/splash.png;/usr/share/k3b/pics/RobsTheme/project_left.png;/usr/share/k3b/pics/RobsTheme/project_right.png;/usr/share/k3b/pics/RobsTheme/media_audio.png;/usr/share/k3b/pics/RobsTheme/media_data.png;/usr/share/k3b/pics/RobsTheme/media_video.png;/usr/share/k3b/pics/RobsTheme/media_empty.png;/usr/share/k3b/pics/RobsTheme/media_left.png;/usr/share/k3b/pics/RobsTheme/media_mixed.png;/usr/share/k3b/pics/RobsTheme/media_none.png;/usr/share/k3b/pics/RobsTheme/progress_working.png;/usr/share/k3b/pics/RobsTheme/progress_fail.png;/usr/share/k3b/pics/RobsTheme/progress_success.png;/usr/share/k3b/pics/RobsTheme/progress_right.png;/usr/share/k3b/pics/RobsTheme/dialog_left.png;/usr/share/k3b/pics/RobsTheme/dialog_right.png;/usr/share/k3b/pics/RobsTheme/welcome_bg.png;/usr/share/k3b/pics/RobsTheme/k3b.theme")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/share/k3b/pics/RobsTheme" TYPE FILE FILES
    "/home/ubuntu/k3b-19.12.3/src/pics/RobsTheme/splash.png"
    "/home/ubuntu/k3b-19.12.3/src/pics/RobsTheme/project_left.png"
    "/home/ubuntu/k3b-19.12.3/src/pics/RobsTheme/project_right.png"
    "/home/ubuntu/k3b-19.12.3/src/pics/RobsTheme/media_audio.png"
    "/home/ubuntu/k3b-19.12.3/src/pics/RobsTheme/media_data.png"
    "/home/ubuntu/k3b-19.12.3/src/pics/RobsTheme/media_video.png"
    "/home/ubuntu/k3b-19.12.3/src/pics/RobsTheme/media_empty.png"
    "/home/ubuntu/k3b-19.12.3/src/pics/RobsTheme/media_left.png"
    "/home/ubuntu/k3b-19.12.3/src/pics/RobsTheme/media_mixed.png"
    "/home/ubuntu/k3b-19.12.3/src/pics/RobsTheme/media_none.png"
    "/home/ubuntu/k3b-19.12.3/src/pics/RobsTheme/progress_working.png"
    "/home/ubuntu/k3b-19.12.3/src/pics/RobsTheme/progress_fail.png"
    "/home/ubuntu/k3b-19.12.3/src/pics/RobsTheme/progress_success.png"
    "/home/ubuntu/k3b-19.12.3/src/pics/RobsTheme/progress_right.png"
    "/home/ubuntu/k3b-19.12.3/src/pics/RobsTheme/dialog_left.png"
    "/home/ubuntu/k3b-19.12.3/src/pics/RobsTheme/dialog_right.png"
    "/home/ubuntu/k3b-19.12.3/src/pics/RobsTheme/welcome_bg.png"
    "/home/ubuntu/k3b-19.12.3/src/pics/RobsTheme/k3b.theme"
    )
endif()

