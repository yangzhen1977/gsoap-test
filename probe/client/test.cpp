 
#include "soapwsddProxy.h"
#include "wsdd.nsmap"  
#include <iostream>


int main(int argc, char* argv[])
{
    wsddProxy w;
    w.soap->recv_timeout = 5;

    wsdd__ScopesType scope;
    soap_default_wsdd__ScopesType(w.soap, &scope);
    scope.__item = "onvif://www.onvif.org";


    struct wsdd__ProbeType req;
    soap_default_wsdd__ProbeType(w.soap, &req);
    req.Scopes = &scope;
    req.Types = "tdn:NetworkVideoTransmitter";

    int result = w.send_Probe(&req);

    std::cout << "probe result "<< result << std::endl;
    if( 0 == result){
        struct wsdd__ProbeMatchesType resp;
        result = w.ProbeMatches(&resp);
        std::cout << "maches result "<< result << std::endl;
    }

    return 0;
}