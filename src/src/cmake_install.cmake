# Install script for directory: /home/ubuntu/k3b-19.12.3/src

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
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/k3b" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/k3b")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/k3b"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/ubuntu/k3b-19.12.3/bin/k3b")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/k3b" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/k3b")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/k3b"
         OLD_RPATH "/home/ubuntu/k3b-19.12.3/bin:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/k3b")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xk3bx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/applications" TYPE PROGRAM FILES "/home/ubuntu/k3b-19.12.3/src/org.kde.k3b.desktop")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xk3bx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/knotifications5" TYPE FILE FILES "/home/ubuntu/k3b-19.12.3/src/k3b.notifyrc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xk3bx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kxmlgui5/k3b" TYPE FILE FILES
    "/home/ubuntu/k3b-19.12.3/src/k3bui.rc"
    "/home/ubuntu/k3b-19.12.3/src/k3bdeviceui.rc"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xk3bx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/metainfo" TYPE FILE FILES "/home/ubuntu/k3b-19.12.3/src/org.kde.k3b.appdata.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xk3bx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/knsrcfiles" TYPE FILE FILES "/home/ubuntu/k3b-19.12.3/src/option/k3btheme.knsrc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xk3bx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/mime/packages" TYPE FILE FILES "/home/ubuntu/k3b-19.12.3/src/x-k3b.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xk3bx" OR NOT CMAKE_INSTALL_COMPONENT)
  
set(DESTDIR_VALUE "$ENV{DESTDIR}")
if (NOT DESTDIR_VALUE)
    # under Windows relative paths are used, that's why it runs from CMAKE_INSTALL_PREFIX
    message(STATUS "Updating MIME database at ${CMAKE_INSTALL_PREFIX}/share/mime")
    execute_process(COMMAND "/usr/bin/update-mime-database" "share/mime"
                    WORKING_DIRECTORY "${CMAKE_INSTALL_PREFIX}")
endif (NOT DESTDIR_VALUE)

endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/ubuntu/k3b-19.12.3/src/helper/cmake_install.cmake")
  include("/home/ubuntu/k3b-19.12.3/src/icons/cmake_install.cmake")
  include("/home/ubuntu/k3b-19.12.3/src/pics/cmake_install.cmake")
  include("/home/ubuntu/k3b-19.12.3/src/services/cmake_install.cmake")

endif()

