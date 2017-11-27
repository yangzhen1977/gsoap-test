#!/usr/bin/env bash

cd csdn-gsoap-wsdl

wsdl2h -o ../onvif.h -c++ -s -t ./typemap.dat devicemgmt.wsdl media.wsdl event.wsdl display.wsdl deviceio.wsdl imaging.wsdl ptz.wsdl receiver.wsdl recording.wsdl search.wsdl remotediscovery.wsdl replay.wsdl analytics.wsdl analyticsdevice.wsdl actionengine.wsdl accesscontrol.wsdl doorcontrol.wsdl

