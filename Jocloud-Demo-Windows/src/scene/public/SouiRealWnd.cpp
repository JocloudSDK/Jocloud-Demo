#include "stdafx.h"
#include "SouiRealWnd.h"
#include <unknown/obj-ref-impl.hpp>
#include "../src/scene/public/VideoNativeWnd.h"
#include "../src/scene/public/PopupRealWnd.h"

namespace SOUI
{
	CSouiRealWnd::CSouiRealWnd(void)
	{
	}

	CSouiRealWnd::~CSouiRealWnd(void)
	{
	}

	HWND CSouiRealWnd::OnRealWndCreate(SRealWnd *pRealWnd)
	{
		const SRealWndParam &param = pRealWnd->GetRealWndParam();
		if (param.m_strClassName == _T("SLocalRealWnd"))
		{
			CVideoNativeWnd *WndDlg = new CVideoNativeWnd(pRealWnd->GetContainer()->GetHostHwnd());
			WndDlg->Create(L"", WS_CHILD, 0, 0, 0, 0, 0, pRealWnd->GetContainer()->GetHostHwnd(), 0);
			pRealWnd->SetData(WndDlg);		
			WndDlg->SendMessage(WM_INITDIALOG);
			return WndDlg->m_hWnd;
		}
		else
		{
			return 0;
		}
	}

	void CSouiRealWnd::OnRealWndDestroy(SRealWnd *pRealWnd)
	{
		const SRealWndParam &param = pRealWnd->GetRealWndParam();
		if (param.m_strClassName == _T("SLocalRealWnd"))
		{//�����洰�ڣ��ͷŴ���ռ�õ��ڴ�
			CVideoNativeWnd * pWnd = (CVideoNativeWnd*)pRealWnd->GetData();
			if (pWnd)
			{
				pWnd->DestroyWindow();
				delete pWnd;
			}
		}
	}

	//����������FALSE
	BOOL CSouiRealWnd::OnRealWndSize(SRealWnd *pRealWnd)
	{
		return FALSE;
	}

	//����������FALSE
	BOOL CSouiRealWnd::OnRealWndInit(SRealWnd *pRealWnd)
	{
		return FALSE;
	}
}