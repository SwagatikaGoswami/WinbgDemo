// AtlSimpleObject.h : Declaration of the CAtlSimpleObject

#pragma once
#include "resource.h"       // main symbols



#include "SampleAtlProject_i.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;


// CAtlSimpleObject

class ATL_NO_VTABLE CAtlSimpleObject :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CAtlSimpleObject, &CLSID_AtlSimpleObject>,
	public IDispatchImpl<IAtlSimpleObject, &IID_IAtlSimpleObject, &LIBID_SampleAtlProjectLib, /*wMajor =*/ 1, /*wMinor =*/ 0>	
{
public:
	CAtlSimpleObject()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_ATLSIMPLEOBJECT)


BEGIN_COM_MAP(CAtlSimpleObject)
	COM_INTERFACE_ENTRY(IAtlSimpleObject)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()



	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}

	void FinalRelease()
	{
	}

public:

STDMETHOD(get_GetHelloMessage)(/*[out, retval]*/ BSTR *pVal);
STDMETHOD(IWillCrash)();
STDMETHOD (ReadFile)(/*[in]*/ BSTR* fileName);
STDMETHOD(get_Add)(BSTR* pVal1, ULONG* pVal);
STDMETHOD(put_Add)(BSTR* pVal, ULONG newVal);
};

OBJECT_ENTRY_AUTO(__uuidof(AtlSimpleObject), CAtlSimpleObject)
