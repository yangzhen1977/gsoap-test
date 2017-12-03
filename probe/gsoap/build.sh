#!/usr/bin/env bash
(
echo "*****************************************************"
echo "                       gsoap c"
mkdir c 2>/dev/null
rm -fr c/*
cd c || exit 1
soapcpp2 -c  ../../wsdl/onvif-c.h      -x -I /usr/share/gsoap/import -I /usr/share/gsoap 
echo "                       gosap c succes"
) || exit 1

(
echo "*****************************************************"
echo "                       gsoap c++"
mkdir cpp 2>/dev/null
rm -fr cpp/*
cd cpp || exit 1
soapcpp2 -c++ ../../wsdl/onvif-cpp.h   -x -I /usr/share/gsoap/import -I /usr/share/gsoap 
echo "                       gosap c++ succes"
) || exit 1

(
echo "*****************************************************"
echo "                       gsoap c++11"
mkdir c11 2>/dev/null
rm -fr c11/*
cd c11 || exit 1
soapcpp2 -c++11 ../../wsdl/onvif-c11.h  -x -I /usr/share/gsoap/import -I /usr/share/gsoap 
echo "                       gosap c++11 succes"
) || exit 1