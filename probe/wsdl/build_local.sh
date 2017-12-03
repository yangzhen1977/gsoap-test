#!/usr/bin/env bash

cd csdn-gsoap-wsdl

wsdl2h -o ../onvif-c.h -c -s -t ./typemap.dat devicemgmt.wsdl media.wsdl event.wsdl display.wsdl deviceio.wsdl imaging.wsdl ptz.wsdl receiver.wsdl recording.wsdl search.wsdl remotediscovery.wsdl replay.wsdl analytics.wsdl analyticsdevice.wsdl actionengine.wsdl accesscontrol.wsdl doorcontrol.wsdl
wsdl2h -o ../onvif-cpp.h -c++ -s -t ./typemap.dat devicemgmt.wsdl media.wsdl event.wsdl display.wsdl deviceio.wsdl imaging.wsdl ptz.wsdl receiver.wsdl recording.wsdl search.wsdl remotediscovery.wsdl replay.wsdl analytics.wsdl analyticsdevice.wsdl actionengine.wsdl accesscontrol.wsdl doorcontrol.wsdl
wsdl2h -o ../onvif-c11.h -c++11 -s -t ./typemap.dat devicemgmt.wsdl media.wsdl event.wsdl display.wsdl deviceio.wsdl imaging.wsdl ptz.wsdl receiver.wsdl recording.wsdl search.wsdl remotediscovery.wsdl replay.wsdl analytics.wsdl analyticsdevice.wsdl actionengine.wsdl accesscontrol.wsdl doorcontrol.wsdl

