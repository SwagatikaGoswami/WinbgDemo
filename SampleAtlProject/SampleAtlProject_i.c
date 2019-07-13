

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 08:44:07 2038
 */
/* Compiler settings for SampleAtlProject.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0622 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



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

MIDL_DEFINE_GUID(IID, IID_IPreview,0x555454FB,0xB2D8,0x42AC,0x93,0x92,0x5A,0x7E,0xDC,0xF7,0x62,0x46);


MIDL_DEFINE_GUID(IID, IID_IThumbnail,0x36949CA6,0x9158,0x43B6,0x8C,0xA9,0x80,0x7E,0xCD,0xC9,0x82,0x91);


MIDL_DEFINE_GUID(IID, IID_ISearch,0xED9C558E,0x7C59,0x4749,0xAE,0xC8,0x5F,0x54,0xEF,0xF4,0xE2,0xDF);


MIDL_DEFINE_GUID(IID, IID_IAtlSimpleObject,0x7DCFCF11,0xE590,0x4AC6,0x8E,0x68,0x69,0xCC,0x92,0x6C,0xEC,0x40);


MIDL_DEFINE_GUID(IID, LIBID_SampleAtlProjectLib,0x73866E8C,0xAAE4,0x4A57,0x85,0x73,0x90,0x59,0x51,0x9A,0x35,0x0F);


MIDL_DEFINE_GUID(CLSID, CLSID_Preview,0xBAD38D47,0x2FC3,0x4CB8,0x9D,0x1C,0x82,0x86,0xB6,0xF7,0x3D,0x2D);


MIDL_DEFINE_GUID(CLSID, CLSID_Thumbnail,0x81144C10,0x9157,0x4740,0xA9,0x14,0xA6,0x31,0xA4,0x8F,0x2F,0x3F);


MIDL_DEFINE_GUID(CLSID, CLSID_Search,0x0D033DC3,0x96EE,0x4145,0xBB,0xBC,0xC5,0xEF,0xAC,0xE4,0xAA,0x9D);


MIDL_DEFINE_GUID(CLSID, CLSID_AtlSimpleObject,0x2A0B83FC,0x8CD3,0x46D2,0xBD,0xB8,0x43,0xC3,0x04,0x0A,0x4F,0x1F);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



