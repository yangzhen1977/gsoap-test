cmake_minimum_required(VERSION 3.0)

set(TARGET_NAME test_discovery)
set(ONVIF_GSOAP_GHOME ${ONVIF_GSOAP_C_HOME})

set(GSOAP_SERVER_HEADERS
    ${ONVIF_GSOAP_GHOME}/soapH.h
    ${ONVIF_GSOAP_GHOME}/soapStub.h
    ${SYSTEM_GSOAP_HOME}/plugin
    )

set(GSOAP_SERVER_SRCS
    ${ONVIF_GSOAP_GHOME}/soapC.c
    ${ONVIF_GSOAP_GHOME}/soapServer.c
)

set(SRCS 
    ./test.c
    )
include_directories(${ONVIF_GSOAP_GHOME})

add_executable (${TARGET_NAME} ${SRCS} ${GSOAP_SERVER_SRCS})

TARGET_LINK_LIBRARIES(${TARGET_NAME} 
    gsoap
)