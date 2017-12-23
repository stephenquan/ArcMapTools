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

	{
	CComPtr<IApplication> spIApplication;
	CHECKHR(m_Hook->QueryInterface(IID_IApplication, (void**) &spIApplication));

	HWND hWnd;
	CHECKHR(spIApplication->get_hWnd((OLE_HANDLE*) &hWnd));

	CComPtr<IScriptEngine> spIScriptEngine;
	CHECKHR(spIScriptEngine.CoCreateInstance(OLESTR("Scripting.ScriptEngine")));

	CComPtr<IArcObjects> spIArcObjects;
	CHECKHR(spIArcObjects.CoCreateInstance(OLESTR("Scripting.ArcObjects")));

	{
		LONG nRef = ((IUnknown*) (spIArcObjects))->AddRef();
		((IUnknown*) (spIArcObjects))->Release();
		TCHAR szText[256] = { };
		_stprintf_s(szText, _T("ArcObjects (Before): %d\r\n"), nRef - 1);
		OutputDebugString(szText);
	}

	LONG Index = 0;
	hr = spIScriptEngine->SetWindow((OLE_HANDLE) hWnd);
	DWORD dwFlags = SCRIPTITEM_ISVISIBLE;
	hr = spIScriptEngine->SetItem(CComBSTR("Application"), &CComVariant((IDispatch*) spIApplication), dwFlags, &Index);
	//hr = spIScriptEngine->SetItem(CComBSTR("ArcObjects"), &CComVariant((IDispatch*) spIArcObjects), &Index);
	hr = spIScriptEngine->AddGlobal(&CComVariant(spIArcObjects));

	{
		LONG nRef = ((IUnknown*) (spIArcObjects))->AddRef();
		((IUnknown*) (spIArcObjects))->Release();
		TCHAR szText[256] = { };
		_stprintf_s(szText, _T("ArcObjects (SetItem): %d\r\n"), nRef - 1);
		OutputDebugString(szText);
	}

	CComVariant Result;
	//hr = spIScriptEngine->Evaluate(CComBSTR("Now\r\n"), CComBSTR("VBScript"), &Result);
	//hr = spIScriptEngine->Execute(CComBSTR("MsgBox Now\r\n"), CComBSTR("VBScript"));
	//hr = spIScriptEngine->Import(CComBSTR(L"C:\\Temp\\Ingrid\\good.vbs"), CComBSTR(L"C:\\Temp\\Ingrid\\good.vbs"), CComBSTR("VBScript"));
	//hr = spIScriptEngine->Evaluate(CComBSTR(L"Run"), CComBSTR("VBScript"), &Result);
	hr = spIScriptEngine->RunScript(CComBSTR(L"C:\\Temp\\Ingrid\\good.vbs"), CComBSTR("VBScript"));

	{
		((IUnknown*) (spIArcObjects))->AddRef();
		ULONG nRef = ((IUnknown*) (spIArcObjects))->Release();
		TCHAR szText[256] = { };
		_stprintf_s(szText, _T("ArcObjects (Evaluate): %d\r\n"), nRef);
		OutputDebugString(szText);
	}

	CComVariant ResultBSTR(OLESTR("Clicked"));
	hr = VariantChangeTypeEx(&ResultBSTR, &Result, 0, 0, VT_BSTR);

	hr = spIScriptEngine->Clear();

	spIApplication = NULL;
	spIScriptEngine = NULL;

	{
		((IUnknown*) (spIArcObjects))->AddRef();
		LONG nRef = ((IUnknown*) (spIArcObjects))->Release();
		TCHAR szText[256] = { };
		_stprintf_s(szText, _T("ArcObjects (Clear): %d\r\n"), nRef);
		OutputDebugString(szText);
		/*
		while (nRef > 1)
		{
			nRef = ((IUnknown*) (spIArcObjects))->Release();
		}
		*/
	}

	spIApplication = NULL;
	spIArcObjects = NULL;
	spIScriptEngine = NULL;

	}

	::CoFreeUnusedLibrariesEx(0, 0);
	::CoFreeUnusedLibrariesEx(0, 0);

	//::MessageBox(hWnd, ResultBSTR.vt == VT_BSTR ? V_BSTR(&ResultBSTR) : _T("Clicked"), _T("ArcMapTool"), MB_OK);

	return S_OK;
}

// CArcMapTool

