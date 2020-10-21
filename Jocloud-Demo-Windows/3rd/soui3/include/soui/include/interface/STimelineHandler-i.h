#pragma once

namespace SOUI
{

    /**
    * @struct     ITimelineHandler
    * @brief      ʱ���ᴦ��ӿ�
    * 
    * Describe    
    */
    struct ITimelineHandler
    {
        virtual void OnNextFrame()=0;
    };


	struct ITimelineHandlersMgr
	{
		virtual BOOL RegisterTimelineHandler(ITimelineHandler *pHandler) = 0;

		virtual BOOL UnregisterTimelineHandler(ITimelineHandler *pHandler) = 0;
	};
}