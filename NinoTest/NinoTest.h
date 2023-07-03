
// NinoTest.h : PROJECT_NAME アプリケーションのメイン ヘッダー ファイルです。
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH に対してこのファイルをインクルードする前に 'stdafx.h' をインクルードしてください"
#endif

#include "resource.h"		// メイン シンボル


// CNinoTestApp:
// このクラスの実装については、NinoTest.cpp を参照してください。
//

class CNinoTestApp : public CWinAppEx
{
public:
	CNinoTestApp();

// オーバーライド
	public:
	virtual BOOL InitInstance();

// 実装

	DECLARE_MESSAGE_MAP()
};

extern CNinoTestApp theApp;