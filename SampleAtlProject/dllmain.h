// dllmain.h : Declaration of module class.

class CSampleAtlProjectModule : public ATL::CAtlDllModuleT< CSampleAtlProjectModule >
{
public :
	DECLARE_LIBID(LIBID_SampleAtlProjectLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_SAMPLEATLPROJECT, "{49C2A431-929E-4DBF-B26D-4A3918D07BCE}")
};

extern class CSampleAtlProjectModule _AtlModule;
