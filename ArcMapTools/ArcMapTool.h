// ArcMapTool.h : Declaration of the CArcMapTool

#pragma once
#include "resource.h"       // main symbols

#include "ArcMapTools_i.h"


#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif



// CArcMapTool

class ATL_NO_VTABLE CArcMapTool :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CArcMapTool, &CLSID_ArcMapTool>,
	public ICommand
{
public:
	CArcMapTool();
	~CArcMapTool();

DECLARE_REGISTRY_RESOURCEID(IDR_ARCMAPTOOL)


BEGIN_COM_MAP(CArcMapTool)
	COM_INTERFACE_ENTRY(ICommand)
END_COM_MAP()

BEGIN_CATEGORY_MAP(CArcMapTool)
	IMPLEMENTED_CATEGORY(__uuidof(CATID_MxCommands))
END_CATEGORY_MAP()

	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}

	void FinalRelease()
	{
	}

public:
	STDMETHOD(get_Enabled)(VARIANT_BOOL* Enabled);
	STDMETHOD(get_Checked)(VARIANT_BOOL* Checked);
	STDMETHOD(get_Name)(BSTR* Name);
	STDMETHOD(get_Caption)(BSTR* Caption);
	STDMETHOD(get_Tooltip)(BSTR* Tooltip);
	STDMETHOD(get_Message)(BSTR* Message);
	STDMETHOD(get_HelpFile)(BSTR* HelpFile);
	STDMETHOD(get_HelpContextID)(LONG* helpID);
	STDMETHOD(get_Bitmap)(OLE_HANDLE* Bitmap);
	STDMETHOD(get_Category)(BSTR* categoryName);
	STDMETHOD(OnCreate)(IDispatch* hook);
	STDMETHOD(OnClick)();

protected:
	CComPtr<IDispatch> m_Hook;
	HBITMAP m_hBitmap;

};

OBJECT_ENTRY_AUTO(__uuidof(ArcMapTool), CArcMapTool)
