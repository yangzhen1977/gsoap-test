#!/usr/bin/env bash

(
mkdir c 2>/dev/null
cd c &&  soapcpp2 -c  ../../wsdl/onvif.h -I /usr/share/gsoap/import -I /usr/share/gsoap
)

(
mkdir cpp 2>/dev/null
cd cpp &&  soapcpp2 -c++  ../../wsdl/onvif.h -I /usr/share/gsoap/import -I /usr/share/gsoap
)

(
mkdir c11 2>/dev/null
cd c11 &&  soapcpp2 -c++11  ../../wsdl/onvif.h -I /usr/share/gsoap/import -I /usr/share/gsoap
)