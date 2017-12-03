#!/usr/bin/envbash
#http://blog.csdn.net/ghostyu/article/details/8182516

#http://www.onvif.org/onvif/ver10/device/wsdl/devicemgmt.wsdl
#http://www.onvif.org/onvif/ver10/events/wsdl/event.wsdl
#http://www.onvif.org/onvif/ver10/display.wsdl
#http://www.onvif.org/onvif/ver10/deviceio.wsdl
#http://www.onvif.org/onvif/ver20/imaging/wsdl/imaging.wsdl
#http://www.onvif.org/onvif/ver10/media/wsdl/media.wsdl
#http://www.onvif.org/onvif/ver20/ptz/wsdl/ptz.wsdl
#http://www.onvif.org/onvif/ver10/receiver.wsdl
#http://www.onvif.org/onvif/ver10/recording.wsdl
#http://www.onvif.org/onvif/ver10/search.wsdl
#http://www.onvif.org/onvif/ver10/network/wsdl/remotediscovery.wsdl
#http://www.onvif.org/onvif/ver10/replay.wsdl
#http://www.onvif.org/onvif/ver20/analytics/wsdl/analytics.wsdl
#http://www.onvif.org/onvif/ver10/analyticsdevice.wsdl
#http://www.onvif.org/onvif/ver10/schema/onvif.xsd
#http://www.onvif.org/ver10/actionengine.wsdl
#http://www.onvif.org/ver10/pacs/accesscontrol.wsdl
#http://www.onvif.org/ver10/pacs/doorcontrol.wsdl
#http://www.onvif.org/ver10/advancedsecurity/wsdl/advancedsecurity.wsdl
#http://www.onvif.org/ver10/accessrules/wsdl/accessrules.wsdl
#http://www.onvif.org/ver10/credential/wsdl/credential.wsdl
#http://www.onvif.org/ver10/schedule/wsdl/schedule.wsdl

WSDLS=http://www.onvif.org/onvif/ver10/network/wsdl/remotediscovery.wsdl

#cp  /usr/share/gsoap/WS/WS-typemap.dat ./
#typemap.dat:
#https://www.genivia.com/resources.html#How_do_I_use_gSOAP_with_the_ONVIF_specifications?  

wsdl2h -c     -s -t typemap.dat -o onvif-c.h  ${WSDLS}
wsdl2h -c++   -s -t typemap.dat -o onvif-cpp.h  ${WSDLS}     
wsdl2h -c++11 -s -t typemap.dat -o onvif-c11.h  ${WSDLS}
