/* soapStub.h
   Generated by gSOAP 2.8.79 for walabotservice.h

gSOAP XML Web services tools
Copyright (C) 2000-2018, Robert van Engelen, Genivia Inc. All Rights Reserved.
The soapcpp2 tool and its generated software are released under the GPL.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
--------------------------------------------------------------------------------
A commercial use license is available from Genivia Inc., contact@genivia.com
--------------------------------------------------------------------------------
*/

#define SOAP_NAMESPACE_OF_ns1	"http://tempuri.org/"

#ifndef soapStub_H
#define soapStub_H
#include "stdsoap2.h"
#if GSOAP_VERSION != 20879
# error "GSOAP VERSION 20879 MISMATCH IN GENERATED CODE VERSUS LIBRARY CODE: PLEASE REINSTALL PACKAGE"
#endif


/******************************************************************************\
 *                                                                            *
 * Types with Custom Serializers                                              *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Classes, Structs and Unions                                                *
 *                                                                            *
\******************************************************************************/

class _ns1__SensorDoWork;	/* walabotservice.h:141 */
class _ns1__SensorDoWorkResponse;	/* walabotservice.h:143 */
class _ns1__HelloWorld;	/* walabotservice.h:145 */
class _ns1__HelloWorldResponse;	/* walabotservice.h:147 */
struct __ns1__SensorDoWork;	/* walabotservice.h:397 */
struct __ns1__HelloWorld;	/* walabotservice.h:467 */
struct __ns1__SensorDoWork_;	/* walabotservice.h:537 */
struct __ns1__HelloWorld_;	/* walabotservice.h:607 */

/* walabotservice.h:141 */
#ifndef SOAP_TYPE__ns1__SensorDoWork
#define SOAP_TYPE__ns1__SensorDoWork (7)
/* complex XML schema type 'ns1:SensorDoWork': */
class SOAP_CMAC _ns1__SensorDoWork {
      public:
        /// Context that manages this object
        struct soap *soap;
      public:
        /// Return unique type id SOAP_TYPE__ns1__SensorDoWork
        virtual long soap_type(void) const { return SOAP_TYPE__ns1__SensorDoWork; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type _ns1__SensorDoWork, default initialized and not managed by a soap context
        virtual _ns1__SensorDoWork *soap_alloc(void) const { return SOAP_NEW_UNMANAGED(_ns1__SensorDoWork); }
      public:
        /// Constructor with default initializations
        _ns1__SensorDoWork() : soap() { }
        virtual ~_ns1__SensorDoWork() { }
        /// Friend allocator used by soap_new__ns1__SensorDoWork(struct soap*, int)
        friend SOAP_FMAC1 _ns1__SensorDoWork * SOAP_FMAC2 soap_instantiate__ns1__SensorDoWork(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* walabotservice.h:143 */
#ifndef SOAP_TYPE__ns1__SensorDoWorkResponse
#define SOAP_TYPE__ns1__SensorDoWorkResponse (8)
/* complex XML schema type 'ns1:SensorDoWorkResponse': */
class SOAP_CMAC _ns1__SensorDoWorkResponse {
      public:
        /// Context that manages this object
        struct soap *soap;
      public:
        /// Return unique type id SOAP_TYPE__ns1__SensorDoWorkResponse
        virtual long soap_type(void) const { return SOAP_TYPE__ns1__SensorDoWorkResponse; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type _ns1__SensorDoWorkResponse, default initialized and not managed by a soap context
        virtual _ns1__SensorDoWorkResponse *soap_alloc(void) const { return SOAP_NEW_UNMANAGED(_ns1__SensorDoWorkResponse); }
      public:
        /// Constructor with default initializations
        _ns1__SensorDoWorkResponse() : soap() { }
        virtual ~_ns1__SensorDoWorkResponse() { }
        /// Friend allocator used by soap_new__ns1__SensorDoWorkResponse(struct soap*, int)
        friend SOAP_FMAC1 _ns1__SensorDoWorkResponse * SOAP_FMAC2 soap_instantiate__ns1__SensorDoWorkResponse(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* walabotservice.h:145 */
#ifndef SOAP_TYPE__ns1__HelloWorld
#define SOAP_TYPE__ns1__HelloWorld (9)
/* complex XML schema type 'ns1:HelloWorld': */
class SOAP_CMAC _ns1__HelloWorld {
      public:
        /// Context that manages this object
        struct soap *soap;
      public:
        /// Return unique type id SOAP_TYPE__ns1__HelloWorld
        virtual long soap_type(void) const { return SOAP_TYPE__ns1__HelloWorld; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type _ns1__HelloWorld, default initialized and not managed by a soap context
        virtual _ns1__HelloWorld *soap_alloc(void) const { return SOAP_NEW_UNMANAGED(_ns1__HelloWorld); }
      public:
        /// Constructor with default initializations
        _ns1__HelloWorld() : soap() { }
        virtual ~_ns1__HelloWorld() { }
        /// Friend allocator used by soap_new__ns1__HelloWorld(struct soap*, int)
        friend SOAP_FMAC1 _ns1__HelloWorld * SOAP_FMAC2 soap_instantiate__ns1__HelloWorld(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* walabotservice.h:147 */
#ifndef SOAP_TYPE__ns1__HelloWorldResponse
#define SOAP_TYPE__ns1__HelloWorldResponse (10)
/* complex XML schema type 'ns1:HelloWorldResponse': */
class SOAP_CMAC _ns1__HelloWorldResponse {
      public:
        /// Optional element 'ns1:HelloWorldResult' of XML schema type 'xsd:string'
        char *HelloWorldResult;
        /// Context that manages this object
        struct soap *soap;
      public:
        /// Return unique type id SOAP_TYPE__ns1__HelloWorldResponse
        virtual long soap_type(void) const { return SOAP_TYPE__ns1__HelloWorldResponse; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type _ns1__HelloWorldResponse, default initialized and not managed by a soap context
        virtual _ns1__HelloWorldResponse *soap_alloc(void) const { return SOAP_NEW_UNMANAGED(_ns1__HelloWorldResponse); }
      public:
        /// Constructor with default initializations
        _ns1__HelloWorldResponse() : HelloWorldResult(), soap() { }
        virtual ~_ns1__HelloWorldResponse() { }
        /// Friend allocator used by soap_new__ns1__HelloWorldResponse(struct soap*, int)
        friend SOAP_FMAC1 _ns1__HelloWorldResponse * SOAP_FMAC2 soap_instantiate__ns1__HelloWorldResponse(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* walabotservice.h:397 */
#ifndef SOAP_TYPE___ns1__SensorDoWork
#define SOAP_TYPE___ns1__SensorDoWork (15)
/* Wrapper: */
struct SOAP_CMAC __ns1__SensorDoWork {
      public:
        /** Optional element 'ns1:SensorDoWork' of XML schema type 'ns1:SensorDoWork' */
        _ns1__SensorDoWork *ns1__SensorDoWork;
      public:
        /** Return unique type id SOAP_TYPE___ns1__SensorDoWork */
        long soap_type() const { return SOAP_TYPE___ns1__SensorDoWork; }
        /** Constructor with member initializations */
        __ns1__SensorDoWork() : ns1__SensorDoWork() { }
        /** Friend allocator */
        friend SOAP_FMAC1 __ns1__SensorDoWork * SOAP_FMAC2 soap_instantiate___ns1__SensorDoWork(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* walabotservice.h:467 */
#ifndef SOAP_TYPE___ns1__HelloWorld
#define SOAP_TYPE___ns1__HelloWorld (19)
/* Wrapper: */
struct SOAP_CMAC __ns1__HelloWorld {
      public:
        /** Optional element 'ns1:HelloWorld' of XML schema type 'ns1:HelloWorld' */
        _ns1__HelloWorld *ns1__HelloWorld;
      public:
        /** Return unique type id SOAP_TYPE___ns1__HelloWorld */
        long soap_type() const { return SOAP_TYPE___ns1__HelloWorld; }
        /** Constructor with member initializations */
        __ns1__HelloWorld() : ns1__HelloWorld() { }
        /** Friend allocator */
        friend SOAP_FMAC1 __ns1__HelloWorld * SOAP_FMAC2 soap_instantiate___ns1__HelloWorld(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* walabotservice.h:537 */
#ifndef SOAP_TYPE___ns1__SensorDoWork_
#define SOAP_TYPE___ns1__SensorDoWork_ (21)
/* Wrapper: */
struct SOAP_CMAC __ns1__SensorDoWork_ {
      public:
        /** Optional element 'ns1:SensorDoWork' of XML schema type 'ns1:SensorDoWork' */
        _ns1__SensorDoWork *ns1__SensorDoWork;
      public:
        /** Return unique type id SOAP_TYPE___ns1__SensorDoWork_ */
        long soap_type() const { return SOAP_TYPE___ns1__SensorDoWork_; }
        /** Constructor with member initializations */
        __ns1__SensorDoWork_() : ns1__SensorDoWork() { }
        /** Friend allocator */
        friend SOAP_FMAC1 __ns1__SensorDoWork_ * SOAP_FMAC2 soap_instantiate___ns1__SensorDoWork_(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* walabotservice.h:607 */
#ifndef SOAP_TYPE___ns1__HelloWorld_
#define SOAP_TYPE___ns1__HelloWorld_ (23)
/* Wrapper: */
struct SOAP_CMAC __ns1__HelloWorld_ {
      public:
        /** Optional element 'ns1:HelloWorld' of XML schema type 'ns1:HelloWorld' */
        _ns1__HelloWorld *ns1__HelloWorld;
      public:
        /** Return unique type id SOAP_TYPE___ns1__HelloWorld_ */
        long soap_type() const { return SOAP_TYPE___ns1__HelloWorld_; }
        /** Constructor with member initializations */
        __ns1__HelloWorld_() : ns1__HelloWorld() { }
        /** Friend allocator */
        friend SOAP_FMAC1 __ns1__HelloWorld_ * SOAP_FMAC2 soap_instantiate___ns1__HelloWorld_(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* walabotservice.h:728 */
#ifndef WITH_NOGLOBAL
#ifndef SOAP_TYPE_SOAP_ENV__Header
#define SOAP_TYPE_SOAP_ENV__Header (24)
/* SOAP_ENV__Header: */
struct SOAP_CMAC SOAP_ENV__Header {
      public:
        /** Return unique type id SOAP_TYPE_SOAP_ENV__Header */
        long soap_type() const { return SOAP_TYPE_SOAP_ENV__Header; }
        /** Constructor with member initializations */
        SOAP_ENV__Header() { }
        /** Friend allocator */
        friend SOAP_FMAC1 SOAP_ENV__Header * SOAP_FMAC2 soap_instantiate_SOAP_ENV__Header(struct soap*, int, const char*, const char*, size_t*);
};
#endif
#endif

/* walabotservice.h:728 */
#ifndef WITH_NOGLOBAL
#ifndef SOAP_TYPE_SOAP_ENV__Code
#define SOAP_TYPE_SOAP_ENV__Code (25)
/* Type SOAP_ENV__Code is a recursive data type, (in)directly referencing itself through its (base or derived class) members */
/* SOAP_ENV__Code: */
struct SOAP_CMAC SOAP_ENV__Code {
      public:
        /** Optional element 'SOAP-ENV:Value' of XML schema type 'xsd:QName' */
        char *SOAP_ENV__Value;
        /** Optional element 'SOAP-ENV:Subcode' of XML schema type 'SOAP-ENV:Code' */
        struct SOAP_ENV__Code *SOAP_ENV__Subcode;
      public:
        /** Return unique type id SOAP_TYPE_SOAP_ENV__Code */
        long soap_type() const { return SOAP_TYPE_SOAP_ENV__Code; }
        /** Constructor with member initializations */
        SOAP_ENV__Code() : SOAP_ENV__Value(), SOAP_ENV__Subcode() { }
        /** Friend allocator */
        friend SOAP_FMAC1 SOAP_ENV__Code * SOAP_FMAC2 soap_instantiate_SOAP_ENV__Code(struct soap*, int, const char*, const char*, size_t*);
};
#endif
#endif

/* walabotservice.h:728 */
#ifndef WITH_NOGLOBAL
#ifndef SOAP_TYPE_SOAP_ENV__Detail
#define SOAP_TYPE_SOAP_ENV__Detail (27)
/* SOAP_ENV__Detail: */
struct SOAP_CMAC SOAP_ENV__Detail {
      public:
        char *__any;
        /** Any type of element 'fault' assigned to fault with its SOAP_TYPE_<typename> assigned to __type */
        /** Do not create a cyclic data structure throught this member unless SOAP encoding or SOAP_XML_GRAPH are used for id-ref serialization */
        int __type;
        void *fault;
      public:
        /** Return unique type id SOAP_TYPE_SOAP_ENV__Detail */
        long soap_type() const { return SOAP_TYPE_SOAP_ENV__Detail; }
        /** Constructor with member initializations */
        SOAP_ENV__Detail() : __any(), __type(), fault() { }
        /** Friend allocator */
        friend SOAP_FMAC1 SOAP_ENV__Detail * SOAP_FMAC2 soap_instantiate_SOAP_ENV__Detail(struct soap*, int, const char*, const char*, size_t*);
};
#endif
#endif

/* walabotservice.h:728 */
#ifndef WITH_NOGLOBAL
#ifndef SOAP_TYPE_SOAP_ENV__Reason
#define SOAP_TYPE_SOAP_ENV__Reason (30)
/* SOAP_ENV__Reason: */
struct SOAP_CMAC SOAP_ENV__Reason {
      public:
        /** Optional element 'SOAP-ENV:Text' of XML schema type 'xsd:string' */
        char *SOAP_ENV__Text;
      public:
        /** Return unique type id SOAP_TYPE_SOAP_ENV__Reason */
        long soap_type() const { return SOAP_TYPE_SOAP_ENV__Reason; }
        /** Constructor with member initializations */
        SOAP_ENV__Reason() : SOAP_ENV__Text() { }
        /** Friend allocator */
        friend SOAP_FMAC1 SOAP_ENV__Reason * SOAP_FMAC2 soap_instantiate_SOAP_ENV__Reason(struct soap*, int, const char*, const char*, size_t*);
};
#endif
#endif

/* walabotservice.h:728 */
#ifndef WITH_NOGLOBAL
#ifndef SOAP_TYPE_SOAP_ENV__Fault
#define SOAP_TYPE_SOAP_ENV__Fault (31)
/* SOAP_ENV__Fault: */
struct SOAP_CMAC SOAP_ENV__Fault {
      public:
        /** Optional element 'faultcode' of XML schema type 'xsd:QName' */
        char *faultcode;
        /** Optional element 'faultstring' of XML schema type 'xsd:string' */
        char *faultstring;
        /** Optional element 'faultactor' of XML schema type 'xsd:string' */
        char *faultactor;
        /** Optional element 'detail' of XML schema type 'SOAP-ENV:Detail' */
        struct SOAP_ENV__Detail *detail;
        /** Optional element 'SOAP-ENV:Code' of XML schema type 'SOAP-ENV:Code' */
        struct SOAP_ENV__Code *SOAP_ENV__Code;
        /** Optional element 'SOAP-ENV:Reason' of XML schema type 'SOAP-ENV:Reason' */
        struct SOAP_ENV__Reason *SOAP_ENV__Reason;
        /** Optional element 'SOAP-ENV:Node' of XML schema type 'xsd:string' */
        char *SOAP_ENV__Node;
        /** Optional element 'SOAP-ENV:Role' of XML schema type 'xsd:string' */
        char *SOAP_ENV__Role;
        /** Optional element 'SOAP-ENV:Detail' of XML schema type 'SOAP-ENV:Detail' */
        struct SOAP_ENV__Detail *SOAP_ENV__Detail;
      public:
        /** Return unique type id SOAP_TYPE_SOAP_ENV__Fault */
        long soap_type() const { return SOAP_TYPE_SOAP_ENV__Fault; }
        /** Constructor with member initializations */
        SOAP_ENV__Fault() : faultcode(), faultstring(), faultactor(), detail(), SOAP_ENV__Code(), SOAP_ENV__Reason(), SOAP_ENV__Node(), SOAP_ENV__Role(), SOAP_ENV__Detail() { }
        /** Friend allocator */
        friend SOAP_FMAC1 SOAP_ENV__Fault * SOAP_FMAC2 soap_instantiate_SOAP_ENV__Fault(struct soap*, int, const char*, const char*, size_t*);
};
#endif
#endif

/******************************************************************************\
 *                                                                            *
 * Typedefs                                                                   *
 *                                                                            *
\******************************************************************************/


/* (built-in):0 */
#ifndef SOAP_TYPE__XML
#define SOAP_TYPE__XML (5)
typedef char *_XML;
#endif

/* (built-in):0 */
#ifndef SOAP_TYPE__QName
#define SOAP_TYPE__QName (6)
typedef char *_QName;
#endif

/******************************************************************************\
 *                                                                            *
 * Serializable Types                                                         *
 *                                                                            *
\******************************************************************************/


/* char has binding name 'byte' for type 'xsd:byte' */
#ifndef SOAP_TYPE_byte
#define SOAP_TYPE_byte (3)
#endif

/* int has binding name 'int' for type 'xsd:int' */
#ifndef SOAP_TYPE_int
#define SOAP_TYPE_int (1)
#endif

/* _ns1__HelloWorldResponse has binding name '_ns1__HelloWorldResponse' for type '' */
#ifndef SOAP_TYPE__ns1__HelloWorldResponse
#define SOAP_TYPE__ns1__HelloWorldResponse (10)
#endif

/* _ns1__HelloWorld has binding name '_ns1__HelloWorld' for type '' */
#ifndef SOAP_TYPE__ns1__HelloWorld
#define SOAP_TYPE__ns1__HelloWorld (9)
#endif

/* _ns1__SensorDoWorkResponse has binding name '_ns1__SensorDoWorkResponse' for type '' */
#ifndef SOAP_TYPE__ns1__SensorDoWorkResponse
#define SOAP_TYPE__ns1__SensorDoWorkResponse (8)
#endif

/* _ns1__SensorDoWork has binding name '_ns1__SensorDoWork' for type '' */
#ifndef SOAP_TYPE__ns1__SensorDoWork
#define SOAP_TYPE__ns1__SensorDoWork (7)
#endif

/* struct SOAP_ENV__Fault has binding name 'SOAP_ENV__Fault' for type '' */
#ifndef SOAP_TYPE_SOAP_ENV__Fault
#define SOAP_TYPE_SOAP_ENV__Fault (31)
#endif

/* struct SOAP_ENV__Reason has binding name 'SOAP_ENV__Reason' for type '' */
#ifndef SOAP_TYPE_SOAP_ENV__Reason
#define SOAP_TYPE_SOAP_ENV__Reason (30)
#endif

/* struct SOAP_ENV__Detail has binding name 'SOAP_ENV__Detail' for type '' */
#ifndef SOAP_TYPE_SOAP_ENV__Detail
#define SOAP_TYPE_SOAP_ENV__Detail (27)
#endif

/* struct SOAP_ENV__Code has binding name 'SOAP_ENV__Code' for type '' */
#ifndef SOAP_TYPE_SOAP_ENV__Code
#define SOAP_TYPE_SOAP_ENV__Code (25)
#endif

/* struct SOAP_ENV__Header has binding name 'SOAP_ENV__Header' for type '' */
#ifndef SOAP_TYPE_SOAP_ENV__Header
#define SOAP_TYPE_SOAP_ENV__Header (24)
#endif

/* struct SOAP_ENV__Reason * has binding name 'PointerToSOAP_ENV__Reason' for type '' */
#ifndef SOAP_TYPE_PointerToSOAP_ENV__Reason
#define SOAP_TYPE_PointerToSOAP_ENV__Reason (33)
#endif

/* struct SOAP_ENV__Detail * has binding name 'PointerToSOAP_ENV__Detail' for type '' */
#ifndef SOAP_TYPE_PointerToSOAP_ENV__Detail
#define SOAP_TYPE_PointerToSOAP_ENV__Detail (32)
#endif

/* struct SOAP_ENV__Code * has binding name 'PointerToSOAP_ENV__Code' for type '' */
#ifndef SOAP_TYPE_PointerToSOAP_ENV__Code
#define SOAP_TYPE_PointerToSOAP_ENV__Code (26)
#endif

/* _ns1__HelloWorld * has binding name 'PointerTo_ns1__HelloWorld' for type '' */
#ifndef SOAP_TYPE_PointerTo_ns1__HelloWorld
#define SOAP_TYPE_PointerTo_ns1__HelloWorld (16)
#endif

/* _ns1__SensorDoWork * has binding name 'PointerTo_ns1__SensorDoWork' for type '' */
#ifndef SOAP_TYPE_PointerTo_ns1__SensorDoWork
#define SOAP_TYPE_PointerTo_ns1__SensorDoWork (12)
#endif

/* _QName has binding name '_QName' for type 'xsd:QName' */
#ifndef SOAP_TYPE__QName
#define SOAP_TYPE__QName (6)
#endif

/* _XML has binding name '_XML' for type '' */
#ifndef SOAP_TYPE__XML
#define SOAP_TYPE__XML (5)
#endif

/* char * has binding name 'string' for type 'xsd:string' */
#ifndef SOAP_TYPE_string
#define SOAP_TYPE_string (4)
#endif

/******************************************************************************\
 *                                                                            *
 * Externals                                                                  *
 *                                                                            *
\******************************************************************************/


#endif

/* End of soapStub.h */
