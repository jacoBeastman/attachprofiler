

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


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

#pragma warning( disable: 4049 )  /* more than 64k source lines */


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        EXTERN_C __declspec(selectany) const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif // !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_ICorProfilerCallback,0x176FBED1,0xA55C,0x4796,0x98,0xCA,0xA9,0xDA,0x0E,0xF8,0x83,0xE7);


MIDL_DEFINE_GUID(IID, IID_ICorProfilerCallback2,0x8A8CC829,0xCCF2,0x49fe,0xBB,0xAE,0x0F,0x02,0x22,0x28,0x07,0x1A);


MIDL_DEFINE_GUID(IID, IID_ICorProfilerCallback3,0x4FD2ED52,0x7731,0x4b8d,0x94,0x69,0x03,0xD2,0xCC,0x30,0x86,0xC5);


MIDL_DEFINE_GUID(IID, IID_ICorProfilerCallback4,0x7B63B2E3,0x107D,0x4d48,0xB2,0xF6,0xF6,0x1E,0x22,0x94,0x70,0xD2);


MIDL_DEFINE_GUID(IID, IID_ICorProfilerCallback5,0x8DFBA405,0x8C9F,0x45F8,0xBF,0xFA,0x83,0xB1,0x4C,0xEF,0x78,0xB5);


MIDL_DEFINE_GUID(IID, IID_ICorProfilerInfo,0x28B5557D,0x3F3F,0x48b4,0x90,0xB2,0x5F,0x9E,0xEA,0x2F,0x6C,0x48);


MIDL_DEFINE_GUID(IID, IID_ICorProfilerInfo2,0xCC0935CD,0xA518,0x487d,0xB0,0xBB,0xA9,0x32,0x14,0xE6,0x54,0x78);


MIDL_DEFINE_GUID(IID, IID_ICorProfilerInfo3,0xB555ED4F,0x452A,0x4E54,0x8B,0x39,0xB5,0x36,0x0B,0xAD,0x32,0xA0);


MIDL_DEFINE_GUID(IID, IID_ICorProfilerObjectEnum,0x2C6269BD,0x2D13,0x4321,0xAE,0x12,0x66,0x86,0x36,0x5F,0xD6,0xAF);


MIDL_DEFINE_GUID(IID, IID_ICorProfilerFunctionEnum,0xFF71301A,0xB994,0x429D,0xA1,0x0B,0xB3,0x45,0xA6,0x52,0x80,0xEF);


MIDL_DEFINE_GUID(IID, IID_ICorProfilerModuleEnum,0xb0266d75,0x2081,0x4493,0xaf,0x7f,0x02,0x8b,0xa3,0x4d,0xb8,0x91);


MIDL_DEFINE_GUID(IID, IID_IMethodMalloc,0xA0EFB28B,0x6EE2,0x4d7b,0xB9,0x83,0xA7,0x5E,0xF7,0xBE,0xED,0xB8);


MIDL_DEFINE_GUID(IID, IID_ICorProfilerFunctionControl,0xF0963021,0xE1EA,0x4732,0x85,0x81,0xE0,0x1B,0x0B,0xD3,0xC0,0xC6);


MIDL_DEFINE_GUID(IID, IID_ICorProfilerInfo4,0x0d8fdcaa,0x6257,0x47bf,0xb1,0xbf,0x94,0xda,0xc8,0x84,0x66,0xee);


MIDL_DEFINE_GUID(IID, IID_ICorProfilerThreadEnum,0x571194f7,0x25ed,0x419f,0xaa,0x8b,0x70,0x16,0xb3,0x15,0x97,0x01);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



