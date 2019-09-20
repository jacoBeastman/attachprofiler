

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for ..\..\..\..\..\..\Program Files (x86)\Windows Kits\8.1\Include\um\corprof.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0622 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_)


#pragma warning( disable: 4049 )  /* more than 64k source lines */
#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4152 )  /* function/data pointer conversion in expression */
#pragma warning( disable: 4100 ) /* unreferenced arguments in x86 call */

#pragma optimize("", off ) 

#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 475
#endif


#include "rpcproxy.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif /* __RPCPROXY_H_VERSION__ */


#include "corprof_h.h"

#define TYPE_FORMAT_STRING_SIZE   3                                 
#define PROC_FORMAT_STRING_SIZE   1                                 
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _corprof_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } corprof_MIDL_TYPE_FORMAT_STRING;

typedef struct _corprof_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } corprof_MIDL_PROC_FORMAT_STRING;

typedef struct _corprof_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } corprof_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const corprof_MIDL_TYPE_FORMAT_STRING corprof__MIDL_TypeFormatString;
extern const corprof_MIDL_PROC_FORMAT_STRING corprof__MIDL_ProcFormatString;
extern const corprof_MIDL_EXPR_FORMAT_STRING corprof__MIDL_ExprFormatString;



#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif

#if !(TARGET_IS_NT50_OR_LATER)
#error You need Windows 2000 or later to run this stub because it uses these features:
#error   /robust command line switch.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const corprof_MIDL_PROC_FORMAT_STRING corprof__MIDL_ProcFormatString =
    {
        0,
        {

			0x0
        }
    };

static const corprof_MIDL_TYPE_FORMAT_STRING corprof__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */

			0x0
        }
    };


/* Standard interface: __MIDL_itf_corprof_0000_0000, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: ICorProfilerCallback, ver. 0.0,
   GUID={0x176FBED1,0xA55C,0x4796,{0x98,0xCA,0xA9,0xDA,0x0E,0xF8,0x83,0xE7}} */


/* Standard interface: __MIDL_itf_corprof_0000_0001, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ICorProfilerCallback2, ver. 0.0,
   GUID={0x8A8CC829,0xCCF2,0x49fe,{0xBB,0xAE,0x0F,0x02,0x22,0x28,0x07,0x1A}} */


/* Object interface: ICorProfilerCallback3, ver. 0.0,
   GUID={0x4FD2ED52,0x7731,0x4b8d,{0x94,0x69,0x03,0xD2,0xCC,0x30,0x86,0xC5}} */


/* Object interface: ICorProfilerCallback4, ver. 0.0,
   GUID={0x7B63B2E3,0x107D,0x4d48,{0xB2,0xF6,0xF6,0x1E,0x22,0x94,0x70,0xD2}} */


/* Object interface: ICorProfilerCallback5, ver. 0.0,
   GUID={0x8DFBA405,0x8C9F,0x45F8,{0xBF,0xFA,0x83,0xB1,0x4C,0xEF,0x78,0xB5}} */


/* Standard interface: __MIDL_itf_corprof_0000_0005, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ICorProfilerInfo, ver. 0.0,
   GUID={0x28B5557D,0x3F3F,0x48b4,{0x90,0xB2,0x5F,0x9E,0xEA,0x2F,0x6C,0x48}} */


/* Object interface: ICorProfilerInfo2, ver. 0.0,
   GUID={0xCC0935CD,0xA518,0x487d,{0xB0,0xBB,0xA9,0x32,0x14,0xE6,0x54,0x78}} */


/* Object interface: ICorProfilerInfo3, ver. 0.0,
   GUID={0xB555ED4F,0x452A,0x4E54,{0x8B,0x39,0xB5,0x36,0x0B,0xAD,0x32,0xA0}} */


/* Object interface: ICorProfilerObjectEnum, ver. 0.0,
   GUID={0x2C6269BD,0x2D13,0x4321,{0xAE,0x12,0x66,0x86,0x36,0x5F,0xD6,0xAF}} */


/* Object interface: ICorProfilerFunctionEnum, ver. 0.0,
   GUID={0xFF71301A,0xB994,0x429D,{0xA1,0x0B,0xB3,0x45,0xA6,0x52,0x80,0xEF}} */


/* Object interface: ICorProfilerModuleEnum, ver. 0.0,
   GUID={0xb0266d75,0x2081,0x4493,{0xaf,0x7f,0x02,0x8b,0xa3,0x4d,0xb8,0x91}} */


/* Object interface: IMethodMalloc, ver. 0.0,
   GUID={0xA0EFB28B,0x6EE2,0x4d7b,{0xB9,0x83,0xA7,0x5E,0xF7,0xBE,0xED,0xB8}} */


/* Object interface: ICorProfilerFunctionControl, ver. 0.0,
   GUID={0xF0963021,0xE1EA,0x4732,{0x85,0x81,0xE0,0x1B,0x0B,0xD3,0xC0,0xC6}} */


/* Object interface: ICorProfilerInfo4, ver. 0.0,
   GUID={0x0d8fdcaa,0x6257,0x47bf,{0xb1,0xbf,0x94,0xda,0xc8,0x84,0x66,0xee}} */


/* Object interface: ICorProfilerThreadEnum, ver. 0.0,
   GUID={0x571194f7,0x25ed,0x419f,{0xaa,0x8b,0x70,0x16,0xb3,0x15,0x97,0x01}} */

static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    0,
    0,
    corprof__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x50002, /* Ndr library version */
    0,
    0x801026e, /* MIDL Version 8.1.622 */
    0,
    0,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };

const CInterfaceProxyVtbl * const _corprof_ProxyVtblList[] = 
{
    0
};

const CInterfaceStubVtbl * const _corprof_StubVtblList[] = 
{
    0
};

PCInterfaceName const _corprof_InterfaceNamesList[] = 
{
    0
};


#define _corprof_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _corprof, pIID, n)

int __stdcall _corprof_IID_Lookup( const IID * pIID, int * pIndex )
{
    UNREFERENCED_PARAMETER(pIID);
    UNREFERENCED_PARAMETER(pIndex);
    return 0;
}

const ExtendedProxyFileInfo corprof_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _corprof_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _corprof_StubVtblList,
    (const PCInterfaceName * ) & _corprof_InterfaceNamesList,
    0, /* no delegation */
    & _corprof_IID_Lookup, 
    0,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_) */
