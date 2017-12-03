#!/usr/bin/envbash


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

wsdl2h -o onvif-c.h -c ${WSDLS}
wsdl2h -o onvif-cpp.h -c++ ${WSDLS}     
wsdl2h -o onvif-c11.h -c++11 ${WSDLS}

