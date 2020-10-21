#pragma once

namespace SOUI
{
	class CSouiRealWnd :public TObjRefImpl2<IRealWndHandler, CSouiRealWnd>
	{
	public:
		CSouiRealWnd(void);
		~CSouiRealWnd(void);

		/**
		* SRealWnd::OnRealWndCreate
		* @brief    �����洰��
		* @param    SRealWnd * pRealWnd --  ����ָ��
		* @return   HWND -- �����������洰�ھ��
		* Describe
		*/
		virtual HWND OnRealWndCreate(SRealWnd *pRealWnd);

		/**
		* SRealWnd::OnRealWndDestroy
		* @brief    ���ٴ���
		* @param    SRealWnd *pRealWnd -- ����ָ��
		*
		* Describe  ���ٴ���
		*/
		virtual void OnRealWndDestroy(SRealWnd *pRealWnd);

		/**
		* SRealWnd::OnRealWndInit
		* @brief    ��ʼ������
		* @param    SRealWnd *pRealWnd -- ����ָ��
		*
		* Describe  ��ʼ������
		*/
		virtual BOOL OnRealWndInit(SRealWnd *pRealWnd);

		/**
		* SRealWnd::OnRealWndSize
		* @brief    �������ڴ�С
		* @param    SRealWnd *pRealWnd -- ����ָ��
		* @return   BOOL -- TRUE:�û������ڵ��ƶ���FALSE������SOUI�Լ�����
		* Describe  �������ڴ�С, ��pRealWnd�л�ô���λ�á�
		*/
		virtual BOOL OnRealWndSize(SRealWnd *pRealWnd);
	};

}

