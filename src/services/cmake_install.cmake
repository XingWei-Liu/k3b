# Install script for directory: /home/ubuntu/k3b-19.12.3/src/services

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/solid/actions" TYPE FILE FILES
    "/home/ubuntu/k3b-19.12.3/src/services/k3b_audiocd_rip.desktop"
    "/home/ubuntu/k3b-19.12.3/src/services/k3b_copy_disc.desktop"
    "/home/ubuntu/k3b-19.12.3/src/services/k3b_create_data_project_from_blank_medium.desktop"
    "/home/ubuntu/k3b-19.12.3/src/services/k3b_create_audio_cd_from_blank_medium.desktop"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xk3bx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/solid/actions" TYPE FILE FILES "/home/ubuntu/k3b-19.12.3/src/services/k3b_videodvd_rip.desktop")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xk3bx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kservices5/ServiceMenus" TYPE FILE FILES
    "/home/ubuntu/k3b-19.12.3/src/services/k3b_create_audio_cd.desktop"
    "/home/ubuntu/k3b-19.12.3/src/services/k3b_create_data_project.desktop"
    "/home/ubuntu/k3b-19.12.3/src/services/k3b_create_video_cd.desktop"
    "/home/ubuntu/k3b-19.12.3/src/services/k3b_write_bin_image.desktop"
    "/home/ubuntu/k3b-19.12.3/src/services/k3b_write_iso_image.desktop"
    )
endif()

