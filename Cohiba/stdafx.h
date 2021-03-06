// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

//#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
// Windows Header Files:
//#include <windows.h>

#include <vector>				// Add support for std::vector
#include <map>					// Add support for std::map
#include <string>				// Add support for std::string
#include <sstream>				// Add support for stringstream
#include <assert.h>				// Add support for the assert macro
#include <stdio.h>				// Add support for C style printf, sprintf, etc.
#include <stdlib.h>				// Add support for C style character conversions atoi etc. 
#include <tchar.h>				// Add support for C style TCHARs.
#include <memory>

#include "wc_to_mb.h"
#include <wxx_appcore.h>		// Add CCriticalSection, CObject, CWinThread, CWinApp
#include <wxx_archive.h>		// Add CArchive
#include <wxx_commondlg.h>		// Add CCommonDialog, CColorDialog, CFileDialog, CFindReplace, CFontDialog 
#include <wxx_controls.h>		// Add CAnimation, CComboBox, CComboBoxEx, CDateTime, CHeader, CHotKey, CIPAddress, CProgressBar, CSpinButton, CScrollBar, CSlider, CToolTip
#include <wxx_cstring.h>		// Add CString, CStringA, CStringW
#include <wxx_ddx.h>			// Add CDataExchange
#include <wxx_dialog.h>			// Add CDialog, CResizer
#include <wxx_docking.h>		// Add CDocker, CDockContianer
#include <wxx_exception.h>		// Add CException, CFileException, CNotSupportedException, CResourceException, CUserException, CWinException
#include <wxx_file.h>			// Add CFile
#include <wxx_frame.h>			// Add CFrame, CDockFrame
#include <wxx_gdi.h>			// Add CDC, CGDIObject, CBitmap, CBrush, CFont, CPalatte, CPen, CRgn
#include <wxx_imagelist.h>		// Add CImageList
#include <wxx_listview.h>		// Add CListView
#include <wxx_mdi.h>			// Add CMDIChild, CMDIFrame, CDockMDIFrame
#include <wxx_printdialogs.h>	// Add CPageSetupDialog, CPrintSetupDialog
#include <wxx_propertysheet.h>	// Add CPropertyPage, CPropertySheet
#include <wxx_rebar.h>			// Add CRebar
#include <wxx_regkey.h>			// Add CRegKey
//#include <wxx_ribbon.h>		// Add CRibbon, CRibbonFrame
#include <wxx_richedit.h>		// Add CRichEdit
#include <wxx_shared_ptr.h>		// Add Shared_Ptr
#include <wxx_socket.h>			// Add CSocket
#include <wxx_statusbar.h>		// Add CStatusBar
#include <wxx_stdcontrols.h>	// Add CButton, CEdit, CListBox
#include <wxx_tab.h>			// Add CTab, CTabbedMDI
//#include <wxx_taskdialog.h>	// Add CTaskDialog
#include <wxx_time.h>			// Add CTime
#include <wxx_toolbar.h>		// Add CToolBar
#include <wxx_treeview.h>		// Add CTreeView
#include <wxx_webbrowser.h>		// Add CAXWindow, CWebBrowser
#include <wxx_wincore.h>		// Add CWnd