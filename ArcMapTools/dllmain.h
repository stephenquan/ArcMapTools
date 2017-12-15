// dllmain.h : Declaration of module class.

class CArcMapToolsModule : public CAtlDllModuleT< CArcMapToolsModule >
{
public :
	DECLARE_LIBID(LIBID_ArcMapToolsLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_ARCMAPTOOLS, "{577ECB7C-9BF2-489D-AA57-662F93931D34}")
};

extern class CArcMapToolsModule _AtlModule;
