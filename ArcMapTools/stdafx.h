// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently,
// but are changed infrequently

#pragma once

#ifndef STRICT
#define STRICT
#endif

#include "targetver.h"

#define _ATL_APARTMENT_THREADED
#define _ATL_NO_AUTOMATIC_NAMESPACE

#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS	// some CString constructors will be explicit

#include "resource.h"
#include <atlbase.h>
#include <atlcom.h>
#include <atlctl.h>

using namespace ATL;

#import "C:\Program Files (x86)\ArcGIS\Desktop10.5\com\esriSystemUI.olb" \
	raw_interfaces_only, raw_native_types, no_namespace, named_guids \
	exclude("IProgressDialog")

#import "C:\Program Files (x86)\ArcGIS\Desktop10.5\com\esriFramework.olb" \
	raw_interfaces_only, raw_native_types, no_namespace, named_guids \
	exclude("UINT_PTR")

#import "progid:Scripting.ScriptEngine" \
	raw_interfaces_only, raw_native_types, no_namespace, named_guids

#include "ArcCATIDs.h"

#ifndef CHECKHR
#define CHECKHR(stmt) \
	hr = (stmt); \
	if (FAILED(hr)) \
	{ \
		return hr; \
	}

#endif