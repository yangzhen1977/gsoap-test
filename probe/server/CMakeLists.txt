cmake_minimum_required(VERSION 3.0)

set(TARGET_NAME test_probe)

set(GSOAP_SERVER_HEADERS
    ${ONVIF_GSOAP_HOME}/soapH.h
    ${ONVIF_GSOAP_HOME}/soapStub.h
    ${SYSTEM_GSOAP_HOME}/plugin
    )

include_directories(${SYSTEM_GSOAP_HOME}/plugin
)

set(GSOAP_SERVER_SRCS
    ${ONVIF_GSOAP_HOME}/soapClient.cpp
    ${ONVIF_GSOAP_HOME}/soapServer.cpp
    ${SYSTEM_GSOAP_HOME}/plugin/wsddapi.c
    ${SYSTEM_GSOAP_HOME}/plugin/wsaapi.c
    ${ONVIF_GSOAP_HOME}/soapC.cpp
)

set(SRCS 
    ./test.cpp
    )
set(CMAKE_C_COMPILER ${CMAKE_CXX_COMPILER})
add_executable (${TARGET_NAME} ${SRCS} ${GSOAP_SERVER_SRCS})

TARGET_LINK_LIBRARIES(${TARGET_NAME} 
    gsoap++
    ${UUID_LIBRARIES}
)