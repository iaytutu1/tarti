/* walabotservice.h
   Generated by wsdl2h 2.8.79 from C:/Users/user1/Desktop/WalabotService.wsdl and C:/gsoap-2.8/gsoap/WS
   2019-02-18 06:35:24 GMT

   DO NOT INCLUDE THIS FILE DIRECTLY INTO YOUR PROJECT BUILDS
   USE THE soapcpp2-GENERATED SOURCE CODE FILES FOR YOUR PROJECT BUILDS

gSOAP XML Web services tools
Copyright (C) 2000-2018, Robert van Engelen, Genivia Inc. All Rights Reserved.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
--------------------------------------------------------------------------------
A commercial use license is available from Genivia Inc., contact@genivia.com
--------------------------------------------------------------------------------
*/

/**

@page page_notes Notes

@note HINTS:
 - Run soapcpp2 on walabotservice.h to generate the SOAP/XML processing logic:
   Use soapcpp2 -I to specify paths for #import
   Use soapcpp2 -j to generate improved proxy and server classes.
   Use soapcpp2 -r to generate a report.
 - Edit 'typemap.dat' to control namespace bindings and type mappings:
   It is strongly recommended to customize the names of the namespace prefixes
   generated by wsdl2h. To do so, modify the prefix bindings in the Namespaces
   section below and add the modified lines to 'typemap.dat' to rerun wsdl2h.
 - Run Doxygen (www.doxygen.org) on this file to generate documentation.
 - Use wsdl2h -c to generate pure C code.
 - Use wsdl2h -R to include the REST operations defined by the WSDLs.
 - Use wsdl2h -O3 or -O4 to optimize by removing unused schema components.
 - Use wsdl2h -d to enable DOM support for xsd:any and xsd:anyType.
 - Use wsdl2h -F to simulate struct-type derivation in C (also works in C++).
 - Use wsdl2h -f to generate flat C++ class hierarchy, removes type derivation.
 - Use wsdl2h -g to generate top-level root elements with readers and writers.
 - Use wsdl2h -U to map XML names to C++ Unicode identifiers instead of _xNNNN.
 - Use wsdl2h -u to disable the generation of unions.
 - Use wsdl2h -L to remove this @note and all other @note comments.
 - Use wsdl2h -nname to use name as the base namespace prefix instead of 'ns'.
 - Use wsdl2h -Nname for service prefix and produce multiple service bindings
 - Struct/class members serialized as XML attributes are annotated with a '@'.
 - Struct/class members that have a special role are annotated with a '$'.

@warning
   DO NOT INCLUDE THIS ANNOTATED FILE DIRECTLY IN YOUR PROJECT SOURCE CODE.
   USE THE FILES GENERATED BY soapcpp2 FOR YOUR PROJECT'S SOURCE CODE:
   THE GENERATED soapStub.h FILE CONTAINS THIS CONTENT WITHOUT ANNOTATIONS.

@copyright LICENSE:
@verbatim
--------------------------------------------------------------------------------
gSOAP XML Web services tools
Copyright (C) 2000-2019, Robert van Engelen, Genivia Inc. All Rights Reserved.
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
 *   http://tempuri.org/                                                      *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Import                                                                     *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Schema Namespaces                                                          *
 *                                                                            *
\******************************************************************************/


/* NOTE:

It is strongly recommended to customize the names of the namespace prefixes
generated by wsdl2h. To do so, modify the prefix bindings below and add the
modified lines to 'typemap.dat' then rerun wsdl2h (use wsdl2h -t typemap.dat):

ns1 = "http://tempuri.org/"

*/

#define SOAP_NAMESPACE_OF_ns1	"http://tempuri.org/"
//gsoap ns1   schema namespace:	http://tempuri.org/
//gsoap ns1   schema elementForm:	qualified
//gsoap ns1   schema attributeForm:	unqualified

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


class _ns1__SensorDoWork;

class _ns1__SensorDoWorkResponse;

class _ns1__HelloWorld;

class _ns1__HelloWorldResponse;


/******************************************************************************\
 *                                                                            *
 * Schema Types and Top-Level Elements and Attributes                         *
 *   http://tempuri.org/                                                      *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Schema Complex Types and Top-Level Elements                                *
 *   http://tempuri.org/                                                      *
 *                                                                            *
\******************************************************************************/

/// @brief Top-level root element "http://tempuri.org/":SensorDoWork
/// @brief "http://tempuri.org/":SensorDoWork is a complexType.
///
/// @note class _ns1__SensorDoWork operations:
/// - _ns1__SensorDoWork* soap_new__ns1__SensorDoWork(soap*) allocate and default initialize
/// - _ns1__SensorDoWork* soap_new__ns1__SensorDoWork(soap*, int num) allocate and default initialize an array
/// - _ns1__SensorDoWork* soap_new_req__ns1__SensorDoWork(soap*, ...) allocate, set required members
/// - _ns1__SensorDoWork* soap_new_set__ns1__SensorDoWork(soap*, ...) allocate, set all public members
/// - _ns1__SensorDoWork::soap_default(soap*) default initialize members
/// - int soap_read__ns1__SensorDoWork(soap*, _ns1__SensorDoWork*) deserialize from a stream
/// - int soap_write__ns1__SensorDoWork(soap*, _ns1__SensorDoWork*) serialize to a stream
/// - _ns1__SensorDoWork* _ns1__SensorDoWork::soap_dup(soap*) returns deep copy of _ns1__SensorDoWork, copies the (cyclic) graph structure when a context is provided, or (cycle-pruned) tree structure with soap_set_mode(soap, SOAP_XML_TREE) (use soapcpp2 -Ec)
/// - _ns1__SensorDoWork::soap_del() deep deletes _ns1__SensorDoWork data members, use only after _ns1__SensorDoWork::soap_dup(NULL) (use soapcpp2 -Ed)
/// - int _ns1__SensorDoWork::soap_type() returns SOAP_TYPE__ns1__SensorDoWork or derived type identifier
//class _ns1__SensorDoWork
//{ public:
///// Pointer to soap context that manages this instance
//    struct soap                         *soap                          ;
//};

/// @brief Top-level root element "http://tempuri.org/":SensorDoWorkResponse
/// @brief "http://tempuri.org/":SensorDoWorkResponse is a complexType.
///
/// @note class _ns1__SensorDoWorkResponse operations:
/// - _ns1__SensorDoWorkResponse* soap_new__ns1__SensorDoWorkResponse(soap*) allocate and default initialize
/// - _ns1__SensorDoWorkResponse* soap_new__ns1__SensorDoWorkResponse(soap*, int num) allocate and default initialize an array
/// - _ns1__SensorDoWorkResponse* soap_new_req__ns1__SensorDoWorkResponse(soap*, ...) allocate, set required members
/// - _ns1__SensorDoWorkResponse* soap_new_set__ns1__SensorDoWorkResponse(soap*, ...) allocate, set all public members
/// - _ns1__SensorDoWorkResponse::soap_default(soap*) default initialize members
/// - int soap_read__ns1__SensorDoWorkResponse(soap*, _ns1__SensorDoWorkResponse*) deserialize from a stream
/// - int soap_write__ns1__SensorDoWorkResponse(soap*, _ns1__SensorDoWorkResponse*) serialize to a stream
/// - _ns1__SensorDoWorkResponse* _ns1__SensorDoWorkResponse::soap_dup(soap*) returns deep copy of _ns1__SensorDoWorkResponse, copies the (cyclic) graph structure when a context is provided, or (cycle-pruned) tree structure with soap_set_mode(soap, SOAP_XML_TREE) (use soapcpp2 -Ec)
/// - _ns1__SensorDoWorkResponse::soap_del() deep deletes _ns1__SensorDoWorkResponse data members, use only after _ns1__SensorDoWorkResponse::soap_dup(NULL) (use soapcpp2 -Ed)
/// - int _ns1__SensorDoWorkResponse::soap_type() returns SOAP_TYPE__ns1__SensorDoWorkResponse or derived type identifier
//class _ns1__SensorDoWorkResponse
//{ public:
///// Pointer to soap context that manages this instance
//    struct soap                         *soap                          ;
//};

/// @brief Top-level root element "http://tempuri.org/":HelloWorld
/// @brief "http://tempuri.org/":HelloWorld is a complexType.
///
/// @note class _ns1__HelloWorld operations:
/// - _ns1__HelloWorld* soap_new__ns1__HelloWorld(soap*) allocate and default initialize
/// - _ns1__HelloWorld* soap_new__ns1__HelloWorld(soap*, int num) allocate and default initialize an array
/// - _ns1__HelloWorld* soap_new_req__ns1__HelloWorld(soap*, ...) allocate, set required members
/// - _ns1__HelloWorld* soap_new_set__ns1__HelloWorld(soap*, ...) allocate, set all public members
/// - _ns1__HelloWorld::soap_default(soap*) default initialize members
/// - int soap_read__ns1__HelloWorld(soap*, _ns1__HelloWorld*) deserialize from a stream
/// - int soap_write__ns1__HelloWorld(soap*, _ns1__HelloWorld*) serialize to a stream
/// - _ns1__HelloWorld* _ns1__HelloWorld::soap_dup(soap*) returns deep copy of _ns1__HelloWorld, copies the (cyclic) graph structure when a context is provided, or (cycle-pruned) tree structure with soap_set_mode(soap, SOAP_XML_TREE) (use soapcpp2 -Ec)
/// - _ns1__HelloWorld::soap_del() deep deletes _ns1__HelloWorld data members, use only after _ns1__HelloWorld::soap_dup(NULL) (use soapcpp2 -Ed)
/// - int _ns1__HelloWorld::soap_type() returns SOAP_TYPE__ns1__HelloWorld or derived type identifier
//class _ns1__HelloWorld
//{ public:
///// Pointer to soap context that manages this instance
//    struct soap                         *soap                          ;
//};

/// @brief Top-level root element "http://tempuri.org/":HelloWorldResponse
/// @brief "http://tempuri.org/":HelloWorldResponse is a complexType.
///
/// @note class _ns1__HelloWorldResponse operations:
/// - _ns1__HelloWorldResponse* soap_new__ns1__HelloWorldResponse(soap*) allocate and default initialize
/// - _ns1__HelloWorldResponse* soap_new__ns1__HelloWorldResponse(soap*, int num) allocate and default initialize an array
/// - _ns1__HelloWorldResponse* soap_new_req__ns1__HelloWorldResponse(soap*, ...) allocate, set required members
/// - _ns1__HelloWorldResponse* soap_new_set__ns1__HelloWorldResponse(soap*, ...) allocate, set all public members
/// - _ns1__HelloWorldResponse::soap_default(soap*) default initialize members
/// - int soap_read__ns1__HelloWorldResponse(soap*, _ns1__HelloWorldResponse*) deserialize from a stream
/// - int soap_write__ns1__HelloWorldResponse(soap*, _ns1__HelloWorldResponse*) serialize to a stream
/// - _ns1__HelloWorldResponse* _ns1__HelloWorldResponse::soap_dup(soap*) returns deep copy of _ns1__HelloWorldResponse, copies the (cyclic) graph structure when a context is provided, or (cycle-pruned) tree structure with soap_set_mode(soap, SOAP_XML_TREE) (use soapcpp2 -Ec)
/// - _ns1__HelloWorldResponse::soap_del() deep deletes _ns1__HelloWorldResponse data members, use only after _ns1__HelloWorldResponse::soap_dup(NULL) (use soapcpp2 -Ed)
/// - int _ns1__HelloWorldResponse::soap_type() returns SOAP_TYPE__ns1__HelloWorldResponse or derived type identifier
//class _ns1__HelloWorldResponse
//{ public:
///// Element "HelloWorldResult" of type xs:string.
//    char*                                HelloWorldResult               0;	///< Optional element.
///// Pointer to soap context that manages this instance
//    struct soap                         *soap                          ;
//};


/******************************************************************************\
 *                                                                            *
 * Additional Top-Level Elements                                              *
 *   http://tempuri.org/                                                      *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Additional Top-Level Attributes                                            *
 *   http://tempuri.org/                                                      *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Services                                                                   *
 *                                                                            *
\******************************************************************************/

// This service supports SOAP 1.2 namespaces:
#import "soap12.h"

//gsoap ns1  service name:	WalabotServiceSoap 
//gsoap ns1  service type:	WalabotServiceSoap 
//gsoap ns1  service port:	http://localhost:8080/WalabotService.asmx 
//gsoap ns1  service namespace:	http://tempuri.org/ 
//gsoap ns1  service transport:	http://schemas.xmlsoap.org/soap/http 

/** @mainpage Service Definitions

@section Service_bindings Service Bindings

  - @ref WalabotServiceSoap

@section Service_more More Information

  - @ref page_notes "Notes"

  - @ref page_XMLDataBinding "XML Data Binding"

  - @ref SOAP_ENV__Header "SOAP Header Content" (when applicable)

  - @ref SOAP_ENV__Detail "SOAP Fault Detail Content" (when applicable)


*/

/**

@page WalabotServiceSoap Binding "WalabotServiceSoap"

@section WalabotServiceSoap_operations Operations of Binding "WalabotServiceSoap"

  - @ref __ns1__SensorDoWork

  - @ref __ns1__HelloWorld

  - @ref __ns1__SensorDoWork_

  - @ref __ns1__HelloWorld_

@section WalabotServiceSoap_ports Default endpoints of Binding "WalabotServiceSoap"

  - http://localhost:8080/WalabotService.asmx

@note Multiple service bindings collected as one, use wsdl2h option -Nname to produce a separate service for each binding


*/

/******************************************************************************\
 *                                                                            *
 * Service Binding                                                            *
 *   WalabotServiceSoap                                                       *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Service Operation                                                          *
 *   __ns1__SensorDoWork                                                      *
 *                                                                            *
\******************************************************************************/


/** Operation "__ns1__SensorDoWork" of service binding "WalabotServiceSoap".

  - SOAP document/literal style messaging

  - Default endpoints:
    - http://localhost:8080/WalabotService.asmx

  - Default SOAP action or REST location path:
    - "http://tempuri.org/SensorDoWork"

  - Addressing input action: "http://tempuri.org/SensorDoWork"

  - Addressing output action: "http://tempuri.org/SensorDoWorkResponse"

C stub function (defined in soapClient.c[pp] generated by soapcpp2):
@code
  int soap_call___ns1__SensorDoWork(
    struct soap *soap,
    NULL, // char *endpoint = NULL selects default endpoint for this operation
    NULL, // char *action = NULL selects default action for this operation
    // input parameters:
    _ns1__SensorDoWork*                 ns1__SensorDoWork,
    // output parameters:
    _ns1__SensorDoWorkResponse         &ns1__SensorDoWorkResponse
  );
@endcode

C server function (called from the service dispatcher defined in soapServer.c[pp]):
@code
  int __ns1__SensorDoWork(
    struct soap *soap,
    // input parameters:
    _ns1__SensorDoWork*                 ns1__SensorDoWork,
    // output parameters:
    _ns1__SensorDoWorkResponse         &ns1__SensorDoWorkResponse
  );
@endcode

C++ proxy class (defined in soapWalabotServiceSoapProxy.h generated with soapcpp2):
@code
  class WalabotServiceSoapProxy;
@endcode
Important: use soapcpp2 option '-j' (or '-i') to generate improved and easy-to-use proxy classes;

C++ service class (defined in soapWalabotServiceSoapService.h generated with soapcpp2):
@code
  class WalabotServiceSoapService;
@endcode
Important: use soapcpp2 option '-j' (or '-i') to generate improved and easy-to-use service classes;

*/

//gsoap ns1  service method-protocol:	SensorDoWork SOAP
//gsoap ns1  service method-style:	SensorDoWork document
//gsoap ns1  service method-encoding:	SensorDoWork literal
//gsoap ns1  service method-input-action:	SensorDoWork http://tempuri.org/SensorDoWork
//gsoap ns1  service method-output-action:	SensorDoWork http://tempuri.org/SensorDoWorkResponse
int __ns1__SensorDoWork(
    _ns1__SensorDoWork*                 ns1__SensorDoWork,	///< Input parameter
    _ns1__SensorDoWorkResponse         &ns1__SensorDoWorkResponse	///< Output parameter
);

/******************************************************************************\
 *                                                                            *
 * Service Operation                                                          *
 *   __ns1__HelloWorld                                                        *
 *                                                                            *
\******************************************************************************/


/** Operation "__ns1__HelloWorld" of service binding "WalabotServiceSoap".

  - SOAP document/literal style messaging

  - Default endpoints:
    - http://localhost:8080/WalabotService.asmx

  - Default SOAP action or REST location path:
    - "http://tempuri.org/HelloWorld"

  - Addressing input action: "http://tempuri.org/HelloWorld"

  - Addressing output action: "http://tempuri.org/HelloWorldResponse"

C stub function (defined in soapClient.c[pp] generated by soapcpp2):
@code
  int soap_call___ns1__HelloWorld(
    struct soap *soap,
    NULL, // char *endpoint = NULL selects default endpoint for this operation
    NULL, // char *action = NULL selects default action for this operation
    // input parameters:
    _ns1__HelloWorld*                   ns1__HelloWorld,
    // output parameters:
    _ns1__HelloWorldResponse           &ns1__HelloWorldResponse
  );
@endcode

C server function (called from the service dispatcher defined in soapServer.c[pp]):
@code
  int __ns1__HelloWorld(
    struct soap *soap,
    // input parameters:
    _ns1__HelloWorld*                   ns1__HelloWorld,
    // output parameters:
    _ns1__HelloWorldResponse           &ns1__HelloWorldResponse
  );
@endcode

C++ proxy class (defined in soapWalabotServiceSoapProxy.h generated with soapcpp2):
@code
  class WalabotServiceSoapProxy;
@endcode
Important: use soapcpp2 option '-j' (or '-i') to generate improved and easy-to-use proxy classes;

C++ service class (defined in soapWalabotServiceSoapService.h generated with soapcpp2):
@code
  class WalabotServiceSoapService;
@endcode
Important: use soapcpp2 option '-j' (or '-i') to generate improved and easy-to-use service classes;

*/

//gsoap ns1  service method-protocol:	HelloWorld SOAP
//gsoap ns1  service method-style:	HelloWorld document
//gsoap ns1  service method-encoding:	HelloWorld literal
//gsoap ns1  service method-input-action:	HelloWorld http://tempuri.org/HelloWorld
//gsoap ns1  service method-output-action:	HelloWorld http://tempuri.org/HelloWorldResponse
int __ns1__HelloWorld(
    _ns1__HelloWorld*                   ns1__HelloWorld,	///< Input parameter
    _ns1__HelloWorldResponse           &ns1__HelloWorldResponse	///< Output parameter
);

/******************************************************************************\
 *                                                                            *
 * Service Operation                                                          *
 *   __ns1__SensorDoWork_                                                     *
 *                                                                            *
\******************************************************************************/


/** Operation "__ns1__SensorDoWork_" of service binding "WalabotServiceSoap".

  - SOAP document/literal style messaging

  - Default endpoints:
    - http://localhost:8080/WalabotService.asmx

  - Default SOAP action or REST location path:
    - "http://tempuri.org/SensorDoWork"

  - Addressing input action: "http://tempuri.org/SensorDoWork"

  - Addressing output action: "http://tempuri.org/SensorDoWorkResponse"

C stub function (defined in soapClient.c[pp] generated by soapcpp2):
@code
  int soap_call___ns1__SensorDoWork_(
    struct soap *soap,
    NULL, // char *endpoint = NULL selects default endpoint for this operation
    NULL, // char *action = NULL selects default action for this operation
    // input parameters:
    _ns1__SensorDoWork*                 ns1__SensorDoWork,
    // output parameters:
    _ns1__SensorDoWorkResponse         &ns1__SensorDoWorkResponse
  );
@endcode

C server function (called from the service dispatcher defined in soapServer.c[pp]):
@code
  int __ns1__SensorDoWork_(
    struct soap *soap,
    // input parameters:
    _ns1__SensorDoWork*                 ns1__SensorDoWork,
    // output parameters:
    _ns1__SensorDoWorkResponse         &ns1__SensorDoWorkResponse
  );
@endcode

C++ proxy class (defined in soapWalabotServiceSoapProxy.h generated with soapcpp2):
@code
  class WalabotServiceSoapProxy;
@endcode
Important: use soapcpp2 option '-j' (or '-i') to generate improved and easy-to-use proxy classes;

C++ service class (defined in soapWalabotServiceSoapService.h generated with soapcpp2):
@code
  class WalabotServiceSoapService;
@endcode
Important: use soapcpp2 option '-j' (or '-i') to generate improved and easy-to-use service classes;

*/

//gsoap ns1  service method-protocol:	SensorDoWork_ SOAP
//gsoap ns1  service method-style:	SensorDoWork_ document
//gsoap ns1  service method-encoding:	SensorDoWork_ literal
//gsoap ns1  service method-input-action:	SensorDoWork_ http://tempuri.org/SensorDoWork
//gsoap ns1  service method-output-action:	SensorDoWork_ http://tempuri.org/SensorDoWorkResponse
int __ns1__SensorDoWork_(
    _ns1__SensorDoWork*                 ns1__SensorDoWork,	///< Input parameter
    _ns1__SensorDoWorkResponse         &ns1__SensorDoWorkResponse	///< Output parameter
);

/******************************************************************************\
 *                                                                            *
 * Service Operation                                                          *
 *   __ns1__HelloWorld_                                                       *
 *                                                                            *
\******************************************************************************/


/** Operation "__ns1__HelloWorld_" of service binding "WalabotServiceSoap".

  - SOAP document/literal style messaging

  - Default endpoints:
    - http://localhost:8080/WalabotService.asmx

  - Default SOAP action or REST location path:
    - "http://tempuri.org/HelloWorld"

  - Addressing input action: "http://tempuri.org/HelloWorld"

  - Addressing output action: "http://tempuri.org/HelloWorldResponse"

C stub function (defined in soapClient.c[pp] generated by soapcpp2):
@code
  int soap_call___ns1__HelloWorld_(
    struct soap *soap,
    NULL, // char *endpoint = NULL selects default endpoint for this operation
    NULL, // char *action = NULL selects default action for this operation
    // input parameters:
    _ns1__HelloWorld*                   ns1__HelloWorld,
    // output parameters:
    _ns1__HelloWorldResponse           &ns1__HelloWorldResponse
  );
@endcode

C server function (called from the service dispatcher defined in soapServer.c[pp]):
@code
  int __ns1__HelloWorld_(
    struct soap *soap,
    // input parameters:
    _ns1__HelloWorld*                   ns1__HelloWorld,
    // output parameters:
    _ns1__HelloWorldResponse           &ns1__HelloWorldResponse
  );
@endcode

C++ proxy class (defined in soapWalabotServiceSoapProxy.h generated with soapcpp2):
@code
  class WalabotServiceSoapProxy;
@endcode
Important: use soapcpp2 option '-j' (or '-i') to generate improved and easy-to-use proxy classes;

C++ service class (defined in soapWalabotServiceSoapService.h generated with soapcpp2):
@code
  class WalabotServiceSoapService;
@endcode
Important: use soapcpp2 option '-j' (or '-i') to generate improved and easy-to-use service classes;

*/

//gsoap ns1  service method-protocol:	HelloWorld_ SOAP
//gsoap ns1  service method-style:	HelloWorld_ document
//gsoap ns1  service method-encoding:	HelloWorld_ literal
//gsoap ns1  service method-input-action:	HelloWorld_ http://tempuri.org/HelloWorld
//gsoap ns1  service method-output-action:	HelloWorld_ http://tempuri.org/HelloWorldResponse
int __ns1__HelloWorld_(
    _ns1__HelloWorld*                   ns1__HelloWorld,	///< Input parameter
    _ns1__HelloWorldResponse           &ns1__HelloWorldResponse	///< Output parameter
);

/**

@page WalabotServiceSoap Binding "WalabotServiceSoap"

@section WalabotServiceSoap_policy_enablers Policy Enablers of Binding "WalabotServiceSoap"

None specified.

*/

/******************************************************************************\
 *                                                                            *
 * XML Data Binding                                                           *
 *                                                                            *
\******************************************************************************/


/**

@page page_XMLDataBinding XML Data Binding

SOAP/XML services use data bindings that are contractually bound by WSDL and
are auto-generated by wsdl2h and soapcpp2 (see Service Bindings). Plain data
bindings are adopted from XML schemas as part of the WSDL types section or when
running wsdl2h on a set of schemas to produce non-SOAP-based XML data bindings.

@note The following readers and writers are C/C++ data type (de)serializers
auto-generated by wsdl2h and soapcpp2. Run soapcpp2 on this file to generate the
(de)serialization code, which is stored in soapC.c[pp]. Include "soapH.h" in
your code to import these data type and function declarations. Only use the
soapcpp2-generated files in your project build. Do not include the wsdl2h-
generated .h file in your code.

@note Data can be read and deserialized from:
  - an int file descriptor, using soap->recvfd = fd
  - a socket, using soap->socket = (int)...
  - a C++ stream (istream, stringstream), using soap->is = (istream*)...
  - a C string, using soap->is = (const char*)...
  - any input, using the soap->frecv() callback

@note Data can be serialized and written to:
  - an int file descriptor, using soap->sendfd = (int)...
  - a socket, using soap->socket = (int)...
  - a C++ stream (ostream, stringstream), using soap->os = (ostream*)...
  - a C string, using soap->os = (const char**)...
  - any output, using the soap->fsend() callback

@note The following options are available for (de)serialization control:
  - soap->encodingStyle = NULL; to remove SOAP 1.1/1.2 encodingStyle
  - soap_set_mode(soap, SOAP_XML_TREE); XML without id-ref (no cycles!)
  - soap_set_mode(soap, SOAP_XML_GRAPH); XML with id-ref (including cycles)
  - soap_set_namespaces(soap, struct Namespace *nsmap); to set xmlns bindings


@section ns1 Top-level root elements of schema "http://tempuri.org/"

  - <ns1:SensorDoWork> @ref _ns1__SensorDoWork
    @code
    // Reader (returns SOAP_OK on success):
    soap_read__ns1__SensorDoWork(struct soap*, _ns1__SensorDoWork*);
    // Writer (returns SOAP_OK on success):
    soap_write__ns1__SensorDoWork(struct soap*, _ns1__SensorDoWork*);
    // REST GET (returns SOAP_OK on success):
    soap_GET__ns1__SensorDoWork(struct soap*, const char *URL, _ns1__SensorDoWork*);
    // REST PUT (returns SOAP_OK on success):
    soap_PUT__ns1__SensorDoWork(struct soap*, const char *URL, _ns1__SensorDoWork*);
    // REST POST (returns SOAP_OK on success):
    soap_POST_send__ns1__SensorDoWork(struct soap*, const char *URL, _ns1__SensorDoWork*);
    soap_POST_recv__ns1__SensorDoWork(struct soap*, _ns1__SensorDoWork*);
    @endcode

  - <ns1:SensorDoWorkResponse> @ref _ns1__SensorDoWorkResponse
    @code
    // Reader (returns SOAP_OK on success):
    soap_read__ns1__SensorDoWorkResponse(struct soap*, _ns1__SensorDoWorkResponse*);
    // Writer (returns SOAP_OK on success):
    soap_write__ns1__SensorDoWorkResponse(struct soap*, _ns1__SensorDoWorkResponse*);
    // REST GET (returns SOAP_OK on success):
    soap_GET__ns1__SensorDoWorkResponse(struct soap*, const char *URL, _ns1__SensorDoWorkResponse*);
    // REST PUT (returns SOAP_OK on success):
    soap_PUT__ns1__SensorDoWorkResponse(struct soap*, const char *URL, _ns1__SensorDoWorkResponse*);
    // REST POST (returns SOAP_OK on success):
    soap_POST_send__ns1__SensorDoWorkResponse(struct soap*, const char *URL, _ns1__SensorDoWorkResponse*);
    soap_POST_recv__ns1__SensorDoWorkResponse(struct soap*, _ns1__SensorDoWorkResponse*);
    @endcode

  - <ns1:HelloWorld> @ref _ns1__HelloWorld
    @code
    // Reader (returns SOAP_OK on success):
    soap_read__ns1__HelloWorld(struct soap*, _ns1__HelloWorld*);
    // Writer (returns SOAP_OK on success):
    soap_write__ns1__HelloWorld(struct soap*, _ns1__HelloWorld*);
    // REST GET (returns SOAP_OK on success):
    soap_GET__ns1__HelloWorld(struct soap*, const char *URL, _ns1__HelloWorld*);
    // REST PUT (returns SOAP_OK on success):
    soap_PUT__ns1__HelloWorld(struct soap*, const char *URL, _ns1__HelloWorld*);
    // REST POST (returns SOAP_OK on success):
    soap_POST_send__ns1__HelloWorld(struct soap*, const char *URL, _ns1__HelloWorld*);
    soap_POST_recv__ns1__HelloWorld(struct soap*, _ns1__HelloWorld*);
    @endcode

  - <ns1:HelloWorldResponse> @ref _ns1__HelloWorldResponse
    @code
    // Reader (returns SOAP_OK on success):
    soap_read__ns1__HelloWorldResponse(struct soap*, _ns1__HelloWorldResponse*);
    // Writer (returns SOAP_OK on success):
    soap_write__ns1__HelloWorldResponse(struct soap*, _ns1__HelloWorldResponse*);
    // REST GET (returns SOAP_OK on success):
    soap_GET__ns1__HelloWorldResponse(struct soap*, const char *URL, _ns1__HelloWorldResponse*);
    // REST PUT (returns SOAP_OK on success):
    soap_PUT__ns1__HelloWorldResponse(struct soap*, const char *URL, _ns1__HelloWorldResponse*);
    // REST POST (returns SOAP_OK on success):
    soap_POST_send__ns1__HelloWorldResponse(struct soap*, const char *URL, _ns1__HelloWorldResponse*);
    soap_POST_recv__ns1__HelloWorldResponse(struct soap*, _ns1__HelloWorldResponse*);
    @endcode

*/

/* End of walabotservice.h */
