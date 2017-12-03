// Reminder: Modify typemap.dat to customize the header file generated by wsdl2h
/* onvif-cpp.h
   Generated by wsdl2h 2.8.28 from http://www.onvif.org/onvif/ver10/network/wsdl/remotediscovery.wsdl and typemap.dat
   2017-12-03 07:22:00 GMT

   DO NOT INCLUDE THIS FILE DIRECTLY INTO YOUR PROJECT BUILDS
   USE THE soapcpp2-GENERATED SOURCE CODE FILES FOR YOUR PROJECT BUILDS

gSOAP XML Web services tools
Copyright (C) 2000-2016, Robert van Engelen, Genivia Inc. All Rights Reserved.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
--------------------------------------------------------------------------------
A commercial use license is available from Genivia Inc., contact@genivia.com
--------------------------------------------------------------------------------
*/

/** @page page_notes Notes

@note HINTS:
 - Run soapcpp2 on onvif-cpp.h to generate the SOAP/XML processing logic.
   Use soapcpp2 -I to specify paths for #import
   To build with STL, 'stlvector.h' is imported from 'import' dir in package.
   Use soapcpp2 -j to generate improved proxy and server classes.
 - Use wsdl2h -c and -s to generate pure C code or C++ code without STL.
 - Use 'typemap.dat' to control namespace bindings and type mappings.
   It is strongly recommended to customize the names of the namespace prefixes
   generated by wsdl2h. To do so, modify the prefix bindings in the Namespaces
   section below and add the modified lines to 'typemap.dat' to rerun wsdl2h.
 - Use Doxygen (www.doxygen.org) on this file to generate documentation.
 - Use wsdl2h -R to generate REST operations.
 - Use wsdl2h -nname to use name as the base namespace prefix instead of 'ns'.
 - Use wsdl2h -Nname for service prefix and produce multiple service bindings
 - Use wsdl2h -d to enable DOM support for xsd:anyType.
 - Use wsdl2h -g to auto-generate readers and writers for root elements.
 - Use wsdl2h -b to auto-generate bi-directional operations (duplex ops).
 - Use wsdl2h -U to map XML names to C++ Unicode identifiers instead of _xNNNN.
 - Use wsdl2h -u to disable the generation of unions.
 - Struct/class members serialized as XML attributes are annotated with a '@'.
 - Struct/class members that have a special role are annotated with a '$'.

@warning
   DO NOT INCLUDE THIS ANNOTATED FILE DIRECTLY IN YOUR PROJECT SOURCE CODE.
   USE THE FILES GENERATED BY soapcpp2 FOR YOUR PROJECT'S SOURCE CODE:
   THE soapStub.h FILE CONTAINS THIS CONTENT WITHOUT ANNOTATIONS.

@copyright LICENSE:
@verbatim
--------------------------------------------------------------------------------
gSOAP XML Web services tools
Copyright (C) 2000-2016, Robert van Engelen, Genivia Inc. All Rights Reserved.
The wsdl2h tool and its generated software are released under the GPL.
This software is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
--------------------------------------------------------------------------------
GPL license.

This program is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free Software
Foundation; either version 2 of the License, or (at your option) any later
version.

This program is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
PARTICULAR PURPOSE. See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with
this program; if not, write to the Free Software Foundation, Inc., 59 Temple
Place, Suite 330, Boston, MA 02111-1307 USA

Author contact information:
engelen@genivia.com / engelen@acm.org

This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
--------------------------------------------------------------------------------
A commercial-use license is available from Genivia, Inc., contact@genivia.com
--------------------------------------------------------------------------------
@endverbatim

*/


//gsoapopt c++,w

/******************************************************************************\
 *                                                                            *
 * Definitions                                                                *
 *   http://www.onvif.org/ver10/network/wsdl                                  *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Import                                                                     *
 *                                                                            *
\******************************************************************************/

#import "wsdd10.h"	// wsdd10 = <http://schemas.xmlsoap.org/ws/2005/04/discovery>

/******************************************************************************\
 *                                                                            *
 * Schema Namespaces                                                          *
 *                                                                            *
\******************************************************************************/


/* NOTE:

It is strongly recommended to customize the names of the namespace prefixes
generated by wsdl2h. To do so, modify the prefix bindings below and add the
modified lines to typemap.dat to rerun wsdl2h:

tdn = "http://www.onvif.org/ver10/network/wsdl"

*/

#define SOAP_NAMESPACE_OF_tdn	"http://www.onvif.org/ver10/network/wsdl"
//gsoap tdn   schema namespace:	http://www.onvif.org/ver10/network/wsdl
//gsoap tdn   schema elementForm:	qualified
//gsoap tdn   schema attributeForm:	unqualified

/******************************************************************************\
 *                                                                            *
 * Built-in Schema Types and Top-Level Elements and Attributes                *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Forward Declarations                                                       *
 *                                                                            *
\******************************************************************************/



/******************************************************************************\
 *                                                                            *
 * Schema Types and Top-Level Elements and Attributes                         *
 *   http://www.onvif.org/ver10/network/wsdl                                  *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Schema Complex Types and Top-Level Elements                                *
 *   http://www.onvif.org/ver10/network/wsdl                                  *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Additional Top-Level Elements                                              *
 *   http://www.onvif.org/ver10/network/wsdl                                  *
 *                                                                            *
\******************************************************************************/

/// @brief Top-level root element "http://www.onvif.org/ver10/network/wsdl":Hello of XSD type "http://schemas.xmlsoap.org/ws/2005/04/discovery":HelloType.
/// @note Use wsdl2h option -g to auto-generate a top-level root element declaration and processing code.

/// @brief Top-level root element "http://www.onvif.org/ver10/network/wsdl":HelloResponse of XSD type "http://schemas.xmlsoap.org/ws/2005/04/discovery":ResolveType.
/// @note Use wsdl2h option -g to auto-generate a top-level root element declaration and processing code.

/// @brief Top-level root element "http://www.onvif.org/ver10/network/wsdl":Probe of XSD type "http://schemas.xmlsoap.org/ws/2005/04/discovery":ProbeType.
/// @note Use wsdl2h option -g to auto-generate a top-level root element declaration and processing code.

/// @brief Top-level root element "http://www.onvif.org/ver10/network/wsdl":ProbeResponse of XSD type "http://schemas.xmlsoap.org/ws/2005/04/discovery":ProbeMatchesType.
/// @note Use wsdl2h option -g to auto-generate a top-level root element declaration and processing code.

/// @brief Top-level root element "http://www.onvif.org/ver10/network/wsdl":Bye of XSD type "http://schemas.xmlsoap.org/ws/2005/04/discovery":ByeType.
/// @note Use wsdl2h option -g to auto-generate a top-level root element declaration and processing code.

/// @brief Top-level root element "http://www.onvif.org/ver10/network/wsdl":ByeResponse of XSD type "http://schemas.xmlsoap.org/ws/2005/04/discovery":ResolveType.
/// @note Use wsdl2h option -g to auto-generate a top-level root element declaration and processing code.


/******************************************************************************\
 *                                                                            *
 * Additional Top-Level Attributes                                            *
 *   http://www.onvif.org/ver10/network/wsdl                                  *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Services                                                                   *
 *                                                                            *
\******************************************************************************/

// This service supports SOAP 1.2 namespaces:
#import "soap12.h"

//gsoap tdn  service name:	RemoteDiscoveryBinding 
//gsoap tdn  service type:	RemoteDiscoveryPort 
//gsoap tdn  service namespace:	http://www.onvif.org/ver10/network/wsdl 
//gsoap tdn  service transport:	http://schemas.xmlsoap.org/soap/http 

/** @mainpage Service Definitions

@section Service_bindings Service Bindings

  - @ref RemoteDiscoveryBinding

@section Service_more More Information

  - @ref page_notes "Notes"

  - @ref page_XMLDataBinding "XML Data Binding"

  - @ref SOAP_ENV__Header "SOAP Header Content" (when applicable)

  - @ref SOAP_ENV__Detail "SOAP Fault Detail Content" (when applicable)


*/

/**

@page RemoteDiscoveryBinding Binding "RemoteDiscoveryBinding"

@section RemoteDiscoveryBinding_operations Operations of Binding "RemoteDiscoveryBinding"

  - @ref __tdn__Hello

  - @ref __tdn__Bye

  - @ref __tdn__Probe

@section RemoteDiscoveryBinding_ports Endpoints of Binding "RemoteDiscoveryBinding"

@note Multiple service bindings collected as one, use wsdl2h option -Nname to produce a separate service for each binding


*/

/******************************************************************************\
 *                                                                            *
 * Service Binding                                                            *
 *   RemoteDiscoveryBinding                                                   *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Service Operation                                                          *
 *   __tdn__Hello                                                             *
 *                                                                            *
\******************************************************************************/


/** Operation "__tdn__Hello" of service binding "RemoteDiscoveryBinding".

  - SOAP document/literal style messaging

  - Action: "http://www.onvif.org/ver10/network/wsdl/Hello"

  - Addressing input action: "http://www.onvif.org/ver10/network/wsdl/Hello"

  - Addressing output action: "http://www.onvif.org/ver10/network/wsdl/HelloResponse"

C stub function (defined in soapClient.c[pp] generated by soapcpp2):
@code
  int soap_call___tdn__Hello(
    struct soap *soap,
    NULL, // char *endpoint = NULL selects default endpoint for this operation
    NULL, // char *action = NULL selects default action for this operation
    // input parameters:
    wsdd__HelloType                     tdn__Hello,
    // output parameters:
    wsdd__ResolveType                  &tdn__HelloResponse
  );
@endcode

C server function (called from the service dispatcher defined in soapServer.c[pp]):
@code
  int __tdn__Hello(
    struct soap *soap,
    // input parameters:
    wsdd__HelloType                     tdn__Hello,
    // output parameters:
    wsdd__ResolveType                  &tdn__HelloResponse
  );
@endcode

C++ proxy class (defined in soapRemoteDiscoveryBindingProxy.h):
@code
  class RemoteDiscoveryBindingProxy;
@endcode
Important: use soapcpp2 option '-j' (or '-i') to generate improved and easy-to-use proxy classes;

C++ service class (defined in soapRemoteDiscoveryBindingService.h):
@code
  class RemoteDiscoveryBindingService;
@endcode
Important: use soapcpp2 option '-j' (or '-i') to generate improved and easy-to-use service classes;

*/

//gsoap tdn  service method-protocol:	Hello SOAP
//gsoap tdn  service method-style:	Hello document
//gsoap tdn  service method-encoding:	Hello literal
//gsoap tdn  service method-input-action:	Hello http://www.onvif.org/ver10/network/wsdl/Hello
//gsoap tdn  service method-output-action:	Hello http://www.onvif.org/ver10/network/wsdl/HelloResponse
int __tdn__Hello(
    wsdd__HelloType                     tdn__Hello,	///< Input parameter
    wsdd__ResolveType                  &tdn__HelloResponse	///< Output parameter
);

/******************************************************************************\
 *                                                                            *
 * Service Operation                                                          *
 *   __tdn__Bye                                                               *
 *                                                                            *
\******************************************************************************/


/** Operation "__tdn__Bye" of service binding "RemoteDiscoveryBinding".

  - SOAP document/literal style messaging

  - Action: "http://www.onvif.org/ver10/network/wsdl/Bye"

  - Addressing input action: "http://www.onvif.org/ver10/network/wsdl/Bye"

  - Addressing output action: "http://www.onvif.org/ver10/network/wsdl/ByeResponse"

C stub function (defined in soapClient.c[pp] generated by soapcpp2):
@code
  int soap_call___tdn__Bye(
    struct soap *soap,
    NULL, // char *endpoint = NULL selects default endpoint for this operation
    NULL, // char *action = NULL selects default action for this operation
    // input parameters:
    wsdd__ByeType                       tdn__Bye,
    // output parameters:
    wsdd__ResolveType                  &tdn__ByeResponse
  );
@endcode

C server function (called from the service dispatcher defined in soapServer.c[pp]):
@code
  int __tdn__Bye(
    struct soap *soap,
    // input parameters:
    wsdd__ByeType                       tdn__Bye,
    // output parameters:
    wsdd__ResolveType                  &tdn__ByeResponse
  );
@endcode

C++ proxy class (defined in soapRemoteDiscoveryBindingProxy.h):
@code
  class RemoteDiscoveryBindingProxy;
@endcode
Important: use soapcpp2 option '-j' (or '-i') to generate improved and easy-to-use proxy classes;

C++ service class (defined in soapRemoteDiscoveryBindingService.h):
@code
  class RemoteDiscoveryBindingService;
@endcode
Important: use soapcpp2 option '-j' (or '-i') to generate improved and easy-to-use service classes;

*/

//gsoap tdn  service method-protocol:	Bye SOAP
//gsoap tdn  service method-style:	Bye document
//gsoap tdn  service method-encoding:	Bye literal
//gsoap tdn  service method-input-action:	Bye http://www.onvif.org/ver10/network/wsdl/Bye
//gsoap tdn  service method-output-action:	Bye http://www.onvif.org/ver10/network/wsdl/ByeResponse
int __tdn__Bye(
    wsdd__ByeType                       tdn__Bye,	///< Input parameter
    wsdd__ResolveType                  &tdn__ByeResponse	///< Output parameter
);

/******************************************************************************\
 *                                                                            *
 * Service Operation                                                          *
 *   __tdn__Probe                                                             *
 *                                                                            *
\******************************************************************************/


/** Operation "__tdn__Probe" of service binding "RemoteDiscoveryBinding".

  - SOAP document/literal style messaging

  - Action: "http://www.onvif.org/ver10/network/wsdl/Probe"

  - Addressing input action: "http://www.onvif.org/ver10/network/wsdl/Probe"

  - Addressing output action: "http://www.onvif.org/ver10/network/wsdl/ProbeResponse"

C stub function (defined in soapClient.c[pp] generated by soapcpp2):
@code
  int soap_call___tdn__Probe(
    struct soap *soap,
    NULL, // char *endpoint = NULL selects default endpoint for this operation
    NULL, // char *action = NULL selects default action for this operation
    // input parameters:
    wsdd__ProbeType                     tdn__Probe,
    // output parameters:
    wsdd__ProbeMatchesType             &tdn__ProbeResponse
  );
@endcode

C server function (called from the service dispatcher defined in soapServer.c[pp]):
@code
  int __tdn__Probe(
    struct soap *soap,
    // input parameters:
    wsdd__ProbeType                     tdn__Probe,
    // output parameters:
    wsdd__ProbeMatchesType             &tdn__ProbeResponse
  );
@endcode

C++ proxy class (defined in soapRemoteDiscoveryBindingProxy.h):
@code
  class RemoteDiscoveryBindingProxy;
@endcode
Important: use soapcpp2 option '-j' (or '-i') to generate improved and easy-to-use proxy classes;

C++ service class (defined in soapRemoteDiscoveryBindingService.h):
@code
  class RemoteDiscoveryBindingService;
@endcode
Important: use soapcpp2 option '-j' (or '-i') to generate improved and easy-to-use service classes;

*/

//gsoap tdn  service method-protocol:	Probe SOAP
//gsoap tdn  service method-style:	Probe document
//gsoap tdn  service method-encoding:	Probe literal
//gsoap tdn  service method-input-action:	Probe http://www.onvif.org/ver10/network/wsdl/Probe
//gsoap tdn  service method-output-action:	Probe http://www.onvif.org/ver10/network/wsdl/ProbeResponse
int __tdn__Probe(
    wsdd__ProbeType                     tdn__Probe,	///< Input parameter
    wsdd__ProbeMatchesType             &tdn__ProbeResponse	///< Output parameter
);

/**

@page RemoteDiscoveryBinding Binding "RemoteDiscoveryBinding"

@section RemoteDiscoveryBinding_policy_enablers Policy Enablers of Binding "RemoteDiscoveryBinding"

None specified.

*/

/******************************************************************************\
 *                                                                            *
 * XML Data Binding                                                           *
 *                                                                            *
\******************************************************************************/


/**

@page page_XMLDataBinding XML Data Binding

SOAP/XML services use data bindings contractually bound by WSDL and auto-
generated by wsdl2h and soapcpp2 (see Service Bindings). Plain data bindings
are adopted from XML schemas as part of the WSDL types section or when running
wsdl2h on a set of schemas to produce non-SOAP-based XML data bindings.

The following readers and writers are C/C++ data type (de)serializers auto-
generated by wsdl2h and soapcpp2. Run soapcpp2 on this file to generate the
(de)serialization code, which is stored in soapC.c[pp]. Include "soapH.h" in
your code to import these data type and function declarations. Only use the
soapcpp2-generated files in your project build. Do not include the wsdl2h-
generated .h file in your code.

Data can be read and deserialized from:
  - an int file descriptor, using soap->recvfd = fd
  - a socket, using soap->socket = (int)...
  - a C++ stream (istream, stringstream), using soap->is = (istream*)...
  - a C string, using soap->is = (const char*)...
  - any input, using the soap->frecv() callback

Data can be serialized and written to:
  - an int file descriptor, using soap->sendfd = (int)...
  - a socket, using soap->socket = (int)...
  - a C++ stream (ostream, stringstream), using soap->os = (ostream*)...
  - a C string, using soap->os = (const char**)...
  - any output, using the soap->fsend() callback

The following options are available for (de)serialization control:
  - soap->encodingStyle = NULL; to remove SOAP 1.1/1.2 encodingStyle
  - soap_mode(soap, SOAP_XML_TREE); XML without id-ref (no cycles!)
  - soap_mode(soap, SOAP_XML_GRAPH); XML with id-ref (including cycles)
  - soap_set_namespaces(soap, struct Namespace *nsmap); to set xmlns bindings


@section tdn Top-level root elements of schema "http://www.onvif.org/ver10/network/wsdl"

  - <tdn:Hello> (use wsdl2h option -g to auto-generate type _tdn__Hello)

  - <tdn:HelloResponse> (use wsdl2h option -g to auto-generate type _tdn__HelloResponse)

  - <tdn:Probe> (use wsdl2h option -g to auto-generate type _tdn__Probe)

  - <tdn:ProbeResponse> (use wsdl2h option -g to auto-generate type _tdn__ProbeResponse)

  - <tdn:Bye> (use wsdl2h option -g to auto-generate type _tdn__Bye)

  - <tdn:ByeResponse> (use wsdl2h option -g to auto-generate type _tdn__ByeResponse)

*/

/* End of onvif-cpp.h */
