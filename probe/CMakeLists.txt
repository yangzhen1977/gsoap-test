cmake_minimum_required (VERSION 2.8.11)
project (test)

set(SYSTEM_GSOAP_HOME /usr/share/gsoap)
set(ONVIF_GSOAP_C_HOME ${PROJECT_SOURCE_DIR}/gsoap/c)
set(ONVIF_GSOAP_CPP_HOME ${PROJECT_SOURCE_DIR}/gsoap/cpp)
set(ONVIF_GSOAP_C11_HOME ${PROJECT_SOURCE_DIR}/gsoap/c11)

#include(FindPkgConfig)
#pkg_check_modules(UUID REQUIRED uuid)

#include_directories(
#    ${UUID_INCLUDE_DIRS}
#)

add_subdirectory (discovery)
#add_subdirectory (server)
#add_subdirectory (client)