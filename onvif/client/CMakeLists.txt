cmake_minimum_required(VERSION 3.0)

set(TARGET_NAME discover)

set(GSOAP_CLIENT_HEADERS
    ${ONVIF_GSOAP_HOME}/soapH.h
    ${ONVIF_GSOAP_HOME}/soapStub.h
    )

set(GSOAP_CLIENT_SRCS
    ${ONVIF_GSOAP_HOME}/soapC.cpp
    ${ONVIF_GSOAP_HOME}/soapClient.cpp
    ${ONVIF_GSOAP_HOME}/nsmap.cpp
    ${SYSTEM_GSOAP_HOME}/custom/duration.c
)

set(SRCS 
    ./discover.cpp
    )

add_executable (${TARGET_NAME} ${SRCS} ${GSOAP_CLIENT_SRCS})

TARGET_LINK_LIBRARIES(${TARGET_NAME} 
    gsoap++
    uuid
)