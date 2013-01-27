#ifndef GLOBALVARIABLE_H
#define GLOBALVARIABLE_H

#include "PMJOpMessage.hh"

/***ҳ����������̣�ҳ������ť�����󣬽���ཫ���ݴ�������ú���HandPageRequestAction
 ***�˺���������������
 ***             PageNo  int    ��ʾҳ���ID���룬��<<guiPageDef.h>>�еĶ���
 ***             IENo    int    ��ʾ��ҳ���ID���룬��<<guiPageDef.h>>�еĶ���
 ***             Data    void*  ҳ����������������ʽΪ������ = �ã������м��Էֺż��
 ***             ���磬   int = 5��string = 3322233;ֻ֧���������������͡�
 ***/

class guiPageInterface
{
public:
     static  PMJInitialConfMsg         g_pmjInitialConfMsg;
     static  PMJDeviceOnOffMsg         g_pmjDeviceOnOffMsg;
     static  PMJPrintMsg               g_pmjPrintMsg;
     static  PMJInfoEditSaveMsg        g_InfoEditSaveMsg;
     static  PMJInfoContentGetMsg      g_pmjInfocontentGetmsg;
     static  PMJInfoContentGetRspMsg   g_pmjInfoContentGetRspMsg;
     static  PMJInfoNameListGetMsg     g_pmjInfoNameListGetmsg;
     static  PMJInfoNameListGetRspMsg  g_pmjInfoNameListGetRspMsg;
     static  PMJInkChannelLogReqMsg    g_pmjInkChannelLogMsg;
     static  PMJUserLogReqMsg          g_pmjUserLogMsg;
     static  PMJObStacleLogReqMsg      g_pmjObStacleLogMsg;
     static  PMJMainTainMsg            g_pmjMainTainMsg;
     static  PMJInkChannelParaMsg      g_pmjInkChannelParaMsg;
     static  PMJInkPrintParaMsg        g_pmjInkPrintParaMsg;
     static  PMJWordStyleParaMsg       g_wordStyleParaMsg;

public:
     void static SetMainWnd(void* wnd);
     void static SendMessage(const char* data, qint32 len);
     void static HandPageRequestAction(int pageNo, int ieNo,void *data);
     void static HandlePageUserManualReq(int ieNo,void *data);
     void static HandlePageSysInfoReq(int ieNo,void *data);
     void static HandlePageRunLog(int ieNo, void* data);
     void static HandlePagePrint(int ieNo,void *data);
     void static HandlePagePenyinPara(int ieNo, void *data);
     void static HandlePageOtherStatus(int ieNo, void *data);
     void static HandlePageOnOffPmj(int ieNo,void *data);
     void static HandlePageNewInfo(int ieNo, void *data);
     void static HandlePageMain(int ieNo,void *data);
     void static HandlePageMainWindow(int ieNo,void *data);
     void static HandlePageMainTain(int ieNo, void *data);
     void static HandlePageLightStatus(int ieNo, void *data);
     void static HandlePageInitCfg(int ieNo, void *data);
     void static HandlePageEditInfo(int ieNo, void *data);
     void static HandlePageDailyMainTain(int ieNo, void *data);
     void static HandlePageInkParam(int ieNo, void *data);
     void static HandlePageFontParam(int ieNo, void *data);

private:
     static void* m_mainwnd;
};

#endif // GLOBALVARIABLE_H
