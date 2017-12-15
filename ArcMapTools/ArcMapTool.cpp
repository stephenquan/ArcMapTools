// ArcMapTool.cpp : Implementation of CArcMapTool

#include "stdafx.h"
#include "ArcMapTool.h"

extern HINSTANCE g_hInstance;

CArcMapTool::CArcMapTool() :
	m_hBitmap(LoadBitmap(g_hInstance, MAKEINTRESOURCE(IDB_BEX)))
{
}

CArcMapTool::~CArcMapTool()
{
	if (m_hBitmap)
	{
		DeleteObject(m_hBitmap);
		m_hBitmap = NULL;
	}
}

STDMETHODIMP CArcMapTool::get_Enabled(VARIANT_BOOL* Enabled)
{
	*Enabled = VARIANT_TRUE;
	return S_OK;
}

STDMETHODIMP CArcMapTool::get_Checked(VARIANT_BOOL* Checked)
{
	*Checked = VARIANT_FALSE;
	return S_OK;
}

STDMETHODIMP CArcMapTool::get_Name(BSTR* Name)
{
	*Name = SysAllocString(L"ArcMapTool Name");
	return S_OK;
}

STDMETHODIMP CArcMapTool::get_Caption(BSTR* Caption)
{
	*Caption = SysAllocString(L"ArcMapTool Caption");
	return S_OK;
}

STDMETHODIMP CArcMapTool::get_Tooltip(BSTR* Tooltip)
{
	*Tooltip = SysAllocString(L"ArcMapTool Tooltip");
	return S_OK;
}

STDMETHODIMP CArcMapTool::get_Message(BSTR* Message)
{
	*Message = SysAllocString(L"ArcMapTool Message");
	return S_OK;
}

STDMETHODIMP CArcMapTool::get_HelpFile(BSTR* HelpFile)
{
	*HelpFile = SysAllocString(L"ArcMapTool HelpFile");
	return S_OK;
}

STDMETHODIMP CArcMapTool::get_HelpContextID(LONG* helpID)
{
	*helpID = 0;
	return S_OK;
}

STDMETHODIMP CArcMapTool::get_Bitmap(OLE_HANDLE* Bitmap)
{
	*Bitmap = (OLE_HANDLE) m_hBitmap;
	return S_OK;
}

STDMETHODIMP CArcMapTool::get_Category(BSTR* categoryName)
{
	*categoryName = SysAllocString(L"ArcMapTool Category");
	return S_OK;
}

STDMETHODIMP CArcMapTool::OnCreate(IDispatch* hook)
{
	m_Hook = hook;
	return S_OK;
}

STDMETHODIMP CArcMapTool::OnClick()
{
	HRESULT hr = S_OK;

	CComPtr<IApplication> spIApplication;
	CHECKHR(m_Hook->QueryInterface(IID_IApplication, (void**) &spIApplication));

	HWND hWnd;
	CHECKHR(spIApplication->get_hWnd((OLE_HANDLE*) &hWnd));

	::MessageBox(hWnd, _T("Clicked"), _T("ArcMapTool"), MB_OK);

	return S_OK;
}

// CArcMapTool

