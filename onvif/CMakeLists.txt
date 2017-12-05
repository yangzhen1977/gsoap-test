cmake_minimum_required (VERSION 2.8.11)
project (calc)

set(SYSTEM_GSOAP_HOME /usr/share/gsoap)
set(ONVIF_GSOAP_HOME ${PROJECT_SOURCE_DIR}/gsoap/cpp)

include_directories(${ONVIF_GSOAP_HOME})

add_subdirectory (client)