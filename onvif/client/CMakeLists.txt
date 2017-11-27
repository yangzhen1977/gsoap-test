cmake_minimum_required(VERSION 3.0)

set(TARGET_NAME calc_client)

set(GSOAP_CLIENT_HEADERS
    ../gsoap/soapH.h
    ../gsoap/soapStub.h
    )

set(GSOAP_CLIENT_SRCS
    ../gsoap/soapC.cpp
    ../gsoap/soapClient.cpp
)

set(SRCS 
    ./calc_client.cpp
    )

add_executable (${TARGET_NAME} ${SRCS} ${GSOAP_CLIENT_SRCS})

TARGET_LINK_LIBRARIES(${TARGET_NAME} 
    gsoap++
)