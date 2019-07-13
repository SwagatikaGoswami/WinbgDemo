// MySampleAtl.h : Declaration of the MySampleAtl class

#pragma once

#include <atlhandlerimpl.h>

using namespace ATL;

class MySampleAtl : public CAtlDocumentImpl
{
public:
	MySampleAtl(void)
	{
	}

	virtual ~MySampleAtl(void)
	{
	}

	virtual HRESULT LoadFromStream(IStream* pStream, DWORD grfMode);
	virtual void InitializeSearchContent();

protected:
	void SetSearchContent(CString& value);
	virtual void OnDrawThumbnail(HDC hDrawDC, LPRECT lprcBounds);
};
