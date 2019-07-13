

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


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



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __SampleAtlProject_i_h__
#define __SampleAtlProject_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IPreview_FWD_DEFINED__
#define __IPreview_FWD_DEFINED__
typedef interface IPreview IPreview;

#endif 	/* __IPreview_FWD_DEFINED__ */


#ifndef __IThumbnail_FWD_DEFINED__
#define __IThumbnail_FWD_DEFINED__
typedef interface IThumbnail IThumbnail;

#endif 	/* __IThumbnail_FWD_DEFINED__ */


#ifndef __ISearch_FWD_DEFINED__
#define __ISearch_FWD_DEFINED__
typedef interface ISearch ISearch;

#endif 	/* __ISearch_FWD_DEFINED__ */


#ifndef __IAtlSimpleObject_FWD_DEFINED__
#define __IAtlSimpleObject_FWD_DEFINED__
typedef interface IAtlSimpleObject IAtlSimpleObject;

#endif 	/* __IAtlSimpleObject_FWD_DEFINED__ */


#ifndef __Preview_FWD_DEFINED__
#define __Preview_FWD_DEFINED__

#ifdef __cplusplus
typedef class Preview Preview;
#else
typedef struct Preview Preview;
#endif /* __cplusplus */

#endif 	/* __Preview_FWD_DEFINED__ */


#ifndef __Thumbnail_FWD_DEFINED__
#define __Thumbnail_FWD_DEFINED__

#ifdef __cplusplus
typedef class Thumbnail Thumbnail;
#else
typedef struct Thumbnail Thumbnail;
#endif /* __cplusplus */

#endif 	/* __Thumbnail_FWD_DEFINED__ */


#ifndef __Search_FWD_DEFINED__
#define __Search_FWD_DEFINED__

#ifdef __cplusplus
typedef class Search Search;
#else
typedef struct Search Search;
#endif /* __cplusplus */

#endif 	/* __Search_FWD_DEFINED__ */


#ifndef __AtlSimpleObject_FWD_DEFINED__
#define __AtlSimpleObject_FWD_DEFINED__

#ifdef __cplusplus
typedef class AtlSimpleObject AtlSimpleObject;
#else
typedef struct AtlSimpleObject AtlSimpleObject;
#endif /* __cplusplus */

#endif 	/* __AtlSimpleObject_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "shobjidl.h"
#include "thumbcache.h"
#include "filter.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IPreview_INTERFACE_DEFINED__
#define __IPreview_INTERFACE_DEFINED__

/* interface IPreview */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IPreview;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("555454FB-B2D8-42AC-9392-5A7EDCF76246")
    IPreview : public IUnknown
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IPreviewVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPreview * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPreview * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPreview * This);
        
        END_INTERFACE
    } IPreviewVtbl;

    interface IPreview
    {
        CONST_VTBL struct IPreviewVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPreview_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPreview_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPreview_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPreview_INTERFACE_DEFINED__ */


#ifndef __IThumbnail_INTERFACE_DEFINED__
#define __IThumbnail_INTERFACE_DEFINED__

/* interface IThumbnail */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IThumbnail;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("36949CA6-9158-43B6-8CA9-807ECDC98291")
    IThumbnail : public IUnknown
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IThumbnailVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IThumbnail * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IThumbnail * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IThumbnail * This);
        
        END_INTERFACE
    } IThumbnailVtbl;

    interface IThumbnail
    {
        CONST_VTBL struct IThumbnailVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IThumbnail_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IThumbnail_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IThumbnail_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IThumbnail_INTERFACE_DEFINED__ */


#ifndef __ISearch_INTERFACE_DEFINED__
#define __ISearch_INTERFACE_DEFINED__

/* interface ISearch */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_ISearch;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ED9C558E-7C59-4749-AEC8-5F54EFF4E2DF")
    ISearch : public IUnknown
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct ISearchVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISearch * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISearch * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISearch * This);
        
        END_INTERFACE
    } ISearchVtbl;

    interface ISearch
    {
        CONST_VTBL struct ISearchVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISearch_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISearch_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISearch_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISearch_INTERFACE_DEFINED__ */


#ifndef __IAtlSimpleObject_INTERFACE_DEFINED__
#define __IAtlSimpleObject_INTERFACE_DEFINED__

/* interface IAtlSimpleObject */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IAtlSimpleObject;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7DCFCF11-E590-4AC6-8E68-69CC926CEC40")
    IAtlSimpleObject : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GetHelloMessage( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWillCrash( void) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Add( 
            BSTR *pVal1,
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Add( 
            BSTR *pVal1,
            /* [in] */ ULONG newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ReadFile( 
            /* [in] */ BSTR *fileName) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAtlSimpleObjectVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAtlSimpleObject * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAtlSimpleObject * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAtlSimpleObject * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAtlSimpleObject * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAtlSimpleObject * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAtlSimpleObject * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAtlSimpleObject * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GetHelloMessage )( 
            IAtlSimpleObject * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IWillCrash )( 
            IAtlSimpleObject * This);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Add )( 
            IAtlSimpleObject * This,
            BSTR *pVal1,
            /* [retval][out] */ ULONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Add )( 
            IAtlSimpleObject * This,
            BSTR *pVal1,
            /* [in] */ ULONG newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ReadFile )( 
            IAtlSimpleObject * This,
            /* [in] */ BSTR *fileName);
        
        END_INTERFACE
    } IAtlSimpleObjectVtbl;

    interface IAtlSimpleObject
    {
        CONST_VTBL struct IAtlSimpleObjectVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAtlSimpleObject_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAtlSimpleObject_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAtlSimpleObject_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAtlSimpleObject_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAtlSimpleObject_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAtlSimpleObject_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAtlSimpleObject_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAtlSimpleObject_get_GetHelloMessage(This,pVal)	\
    ( (This)->lpVtbl -> get_GetHelloMessage(This,pVal) ) 

#define IAtlSimpleObject_IWillCrash(This)	\
    ( (This)->lpVtbl -> IWillCrash(This) ) 

#define IAtlSimpleObject_get_Add(This,pVal1,pVal)	\
    ( (This)->lpVtbl -> get_Add(This,pVal1,pVal) ) 

#define IAtlSimpleObject_put_Add(This,pVal1,newVal)	\
    ( (This)->lpVtbl -> put_Add(This,pVal1,newVal) ) 

#define IAtlSimpleObject_ReadFile(This,fileName)	\
    ( (This)->lpVtbl -> ReadFile(This,fileName) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAtlSimpleObject_INTERFACE_DEFINED__ */



#ifndef __SampleAtlProjectLib_LIBRARY_DEFINED__
#define __SampleAtlProjectLib_LIBRARY_DEFINED__

/* library SampleAtlProjectLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_SampleAtlProjectLib;

EXTERN_C const CLSID CLSID_Preview;

#ifdef __cplusplus

class DECLSPEC_UUID("BAD38D47-2FC3-4CB8-9D1C-8286B6F73D2D")
Preview;
#endif

EXTERN_C const CLSID CLSID_Thumbnail;

#ifdef __cplusplus

class DECLSPEC_UUID("81144C10-9157-4740-A914-A631A48F2F3F")
Thumbnail;
#endif

EXTERN_C const CLSID CLSID_Search;

#ifdef __cplusplus

class DECLSPEC_UUID("0D033DC3-96EE-4145-BBBC-C5EFACE4AA9D")
Search;
#endif

EXTERN_C const CLSID CLSID_AtlSimpleObject;

#ifdef __cplusplus

class DECLSPEC_UUID("2A0B83FC-8CD3-46D2-BDB8-43C3040A4F1F")
AtlSimpleObject;
#endif
#endif /* __SampleAtlProjectLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  BSTR_UserSize64(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal64(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree64(     unsigned long *, BSTR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


