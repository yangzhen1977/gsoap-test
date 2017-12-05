cmake_minimum_required(VERSION 3.0)

set(TARGET_NAME test_probe)

set(GSOAP_SERVER_HEADERS
    ${ONVIF_GSOAP_HOME}/soapH.h
    ${ONVIF_GSOAP_HOME}/soapStub.h
    )

set(GSOAP_SERVER_SRCS
    ${ONVIF_GSOAP_HOME}/soapC.cpp
    ${ONVIF_GSOAP_HOME}/soapClient.cpp
    ${ONVIF_GSOAP_HOME}/soapServer.cpp
    ${ONVIF_GSOAP_HOME}/nsmap.cpp
    ${SYSTEM_GSOAP_HOME}/custom/duration.c
)

set(SRCS 
    ./test.cpp
    )

add_executable (${TARGET_NAME} ${SRCS} ${GSOAP_SERVER_SRCS})

TARGET_LINK_LIBRARIES(${TARGET_NAME} 
    gsoap++
    uuid
)