// AtlSimpleObject.cpp : Implementation of CAtlSimpleObject

#include "stdafx.h"
#include "AtlSimpleObject.h"


// CAtlSimpleObject

STDMETHODIMP CAtlSimpleObject::get_GetHelloMessage(BSTR *pVal)
{
	HRESULT		hrRetStat = S_OK;
	CComBSTR	bstrhell0 ("Hello from COM dll");
	*pVal		= bstrhell0.Detach();

	// Return status
	return hrRetStat;
}

STDMETHODIMP CAtlSimpleObject::IWillCrash()
{
	//Calling method of a com interface without initializing it
	CComPtr<IFilter> filterObject;
	STAT_CHUNK sc;
	filterObject->GetChunk(&sc);
	return E_FAIL;
}

STDMETHODIMP_(HRESULT __stdcall) CAtlSimpleObject::ReadFile(BSTR* fileName)
{
	return E_NOTIMPL;
}

STDMETHODIMP CAtlSimpleObject::get_Add(BSTR* pVal1, ULONG* pVal)
{
	// TODO: Add your implementation code here

	return S_OK;
}


STDMETHODIMP CAtlSimpleObject::put_Add(BSTR* pVal, ULONG newVal)
{
	// TODO: Add your implementation code here

	return S_OK;
}
