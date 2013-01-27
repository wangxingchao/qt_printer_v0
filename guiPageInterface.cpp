#include  "guiPageInterface.h"
#include "guiPageDef.h"
#include "mainwnd.h"

void* guiPageInterface::m_mainwnd = NULL;
void guiPageInterface::SetMainWnd(void* wnd)
{
    m_mainwnd = wnd;
}

void guiPageInterface::HandPageRequestAction(int pageNo, int ieNo, void *data)
{
    switch(pageNo)
    {
    case PAGE_TYPE_USER_MANNUAL:
        HandlePageUserManualReq(ieNo,data);
        break;
    case PAGE_TYPE_SYS_INFO:
        HandlePageSysInfoReq(ieNo,data);
        break;
    case PAGE_TYPE_RUN_LOG:
        HandlePageRunLog(ieNo,data);
        break;
    case PAGE_TYPE_PRINT:
        HandlePagePrint(ieNo,data);
        break;
    case PAGE_TYPE_PENYIN_PARA:
        HandlePagePenyinPara(ieNo,data);
        break;
    case PAGE_TYPE_OTHER_STATUS:
        HandlePageOtherStatus(ieNo,data);
        break;
    case PAGE_TYPE_ONOFF_PMJ:
        HandlePageOnOffPmj(ieNo,data);
        break;
    case PAGE_TYPE_NEW_INFO:
        HandlePageNewInfo(ieNo,data);
        break;
    case PAGE_TYPE_MAIN:
        HandlePageMain(ieNo,data);
        break;
    case PAGE_TYPE_MAIN_WINDOW:
        HandlePageMainWindow(ieNo,data);
        break;
    case PAGE_TYPE_MAINTAIN_MAN:
        HandlePageMainTain(ieNo,data);
        break;
    case PAGE_TYPE_LIGHT_STATUS:
        HandlePageLightStatus(ieNo,data);
        break;
    case PAGE_TYPE_INITCFG:
        HandlePageInitCfg(ieNo,data);
        break;
    case PAGE_TYPE_EDIT_INFO:
        HandlePageEditInfo(ieNo,data);
        break;
    case PAGE_TYPE_DAY_MAINTAIN:
        HandlePageDailyMainTain(ieNo,data);
        break;
    case PAGE_TYPE_INK:
        HandlePageInkParam(ieNo,data);
        break;
    case PAGE_TYPE_FONT_PARAM:
        HandlePageFontParam(ieNo,data);
        break;
    default:
        break;
    }
}


void guiPageInterface::HandlePageUserManualReq(int ieNo,void *data)
{
    //no operation
}

void guiPageInterface::HandlePageSysInfoReq(int ieNo,void *data)
{
}

void guiPageInterface::HandlePageRunLog(int ieNo, void* data)
{
    switch(ieNo)
    {
    case RUNLOG_INKCHANNEL:
    {
        PMJInkChannelLogReqMsg msg;
        SendMessage((char*)&msg, sizeof(msg));
    }
    break;
    case RUNLOG_USER:
    {
        PMJUserLogReqMsg msg;
        SendMessage((char*)&msg, sizeof(msg));
    }
    break;
    case RUNLOG_OBSTACLE:
    {
        PMJObStacleLogReqMsg msg;
        SendMessage((char*)&msg, sizeof(msg));
    }
    break;
    default:
    break;
    }
}

void guiPageInterface::HandlePagePrint(int ieNo,void *data)
{
    QString strData;
    strData = (char*)data;
    QStringList strlist = strData.split(";");
    int ncount = strlist.count();
    PMJPrintMsg msg;

    if(ncount < 2)
    {
        qDebug("number < 2!\n");
        return;
    }

    //DeviceOp
    QStringList strstrlist=strlist.at(0).split("=");
    msg.u8NozzleNo = atoi(strstrlist.at(1).toLatin1().data());

    //DevicePauseType
    strstrlist=strlist.at(1).split("=");
    strcpy((char*)(msg.u8ArrayInfoName),strstrlist.at(1).toLatin1().data());

    //send message
    SendMessage((char*)&msg, sizeof(msg));
}

void guiPageInterface::HandlePagePenyinPara(int ieNo, void *data)
{
}

void guiPageInterface::HandlePageOtherStatus(int ieNo, void *data)
{
}

void guiPageInterface::HandlePageOnOffPmj(int ieNo,void *data)
{
    QString strData;
    strData = (char*)data;
    QStringList strlist = strData.split(";");
    int ncount = strlist.count();
    PMJDeviceOnOffMsg msg;

    if(ncount < 2)
    {
        qDebug("number < 2!\n");
        return;
    }

    //DeviceOp
    QStringList strstrlist=strlist.at(0).split("=");
    msg.u8DeviceOp = atoi(strstrlist.at(1).toLatin1().data());

    //DevicePauseType
    strstrlist=strlist.at(1).split("=");
    msg.u8DevicePauseType = atoi(strstrlist.at(1).toLatin1().data());

    //send message
    SendMessage((char*)&msg, sizeof(msg));
}

void guiPageInterface::HandlePageNewInfo(int ieNo, void *data)
{
}

void guiPageInterface::HandlePageMain(int ieNo,void *data)
{
    //no operation
}

void guiPageInterface::HandlePageMainWindow(int ieNo,void *data)
{
    //no operation
}

void guiPageInterface::HandlePageMainTain(int ieNo, void *data)
{
    //no operation
}

void guiPageInterface::HandlePageLightStatus(int ieNo, void *data)
{
}

void guiPageInterface::HandlePageInitCfg(int ieNo, void *data)
{
    QString strData;
    strData = (char*)data;
    QStringList strlist = strData.split(";");
    int ncount = strlist.count();
    PMJInitialConfMsg msg;
    switch(ieNo)
    {
    case INITCFG_SUBIE_PASSWORD:
    {
        if(ncount < 2)
        {
            qDebug("number < 2!\n");
            return;
        }

        structPassWordConf pwd;

        //keyboard password
        QStringList strstrlist=strlist.at(0).split("=");
        strcpy(pwd.z_keyBordPassWord, strstrlist.at(1).toLatin1().data());

        //login password
        strstrlist=strlist.at(1).split("=");
        strcpy(pwd.z_loginPassWord, strstrlist.at(1).toLatin1().data());

        //send message
        msg.AddSubIE(ieNo, sizeof(structPassWordConf), (void*)&pwd);
        SendMessage((char*)&msg, sizeof(msg));
    }
    break;
    case INITCFG_SUBIE_LAN:
    {
        if(ncount < 2)
        {
            qDebug("number < 2!\n");
            return;
        }

        structLanConf lanconf;

        //Ip
        QStringList strstrlist=strlist.at(0).split("=");
        strcpy(lanconf.z_lanIp, strstrlist.at(1).toLatin1().data());

        //port
        strstrlist=strlist.at(1).split("=");
        strcpy(lanconf.z_lanPort, strstrlist.at(1).toLatin1().data());

        msg.AddSubIE(ieNo, sizeof(structLanConf), (void*)&lanconf);
        SendMessage((char*)&msg, sizeof(msg));
    }
    break;
    case INITCFG_SUBIE_SERIAL:
    {
        if(ncount < 3)
        {
            qDebug("number < 3!\n");
            return;
        }

        structSerialConf serial;

        //baudrate
        QStringList strstrlist=strlist.at(0).split("=");
        serial.u16BaudRate = atoi(strstrlist.at(1).toLatin1().data());

        //even_old
        strstrlist=strlist.at(1).split("=");
        serial.u16EvenOld = atoi(strstrlist.at(1).toLatin1().data());

        //stopbits
        strstrlist=strlist.at(2).split("=");
        serial.u16StopBits = atoi(strstrlist.at(1).toLatin1().data());

        msg.AddSubIE(ieNo, sizeof(structSerialConf), (void*)&serial);
        SendMessage((char*)&msg, sizeof(msg));
    }
    break;
    case INITCFG_SUBIE_OPTION:
    {
        if(ncount < 6)
        {
            qDebug("number < 6!\n");
            return;
        }

        structOptionFunction option;

        //infoIncrement
        QStringList strstrlist=strlist.at(0).split("=");
        option.u8InfoIncrement = atoi(strstrlist.at(1).toLatin1().data());

        //printSpeedObStacle
        strstrlist=strlist.at(1).split("=");
        option.u8PrintSpeedObStacle = atoi(strstrlist.at(1).toLatin1().data());

        //cableprint
        strstrlist=strlist.at(2).split("=");
        option.u8CablePrint = atoi(strstrlist.at(1).toLatin1().data());

        //futuredate
        strstrlist=strlist.at(3).split("=");
        option.u8FutureDate = atoi(strstrlist.at(1).toLatin1().data());

        //printonce
        strstrlist=strlist.at(4).split("=");
        option.u8PrintOnce = atoi(strstrlist.at(1).toLatin1().data());

        //InkCompensation
        strstrlist=strlist.at(5).split("=");
        option.u8InkCompensation = atoi(strstrlist.at(1).toLatin1().data());

        msg.AddSubIE(ieNo, sizeof(structOptionFunction), (void*)&option);
        SendMessage((char*)&msg, sizeof(msg));
    }
    break;
    case INITCFG_SUBIE_WORKLANGUAGE:
    {
        if(ncount < 2)
        {
            qDebug("number < 2!\n");
            return;
        }

        structOtherConf other;

        //language
        QStringList strstrlist=strlist.at(0).split("=");
        other.u8Language = atoi(strstrlist.at(1).toLatin1().data());

        //Distance
        strstrlist=strlist.at(1).split("=");
       other.u8Distance = atoi(strstrlist.at(1).toLatin1().data());

        msg.AddSubIE(ieNo, sizeof(structOtherConf), (void*)&other);
        SendMessage((char*)&msg, sizeof(msg));
    }
    break;
    default:
    break;
    }
}

void guiPageInterface::HandlePageEditInfo(int ieNo, void *data)
{
}

void guiPageInterface::HandlePageDailyMainTain(int ieNo, void *data)
{
    QString strData;
    strData = (char*)data;
    QStringList strlist = strData.split(";");
    int ncount = strlist.count();
    PMJMainTainMsg msg;
    switch(ieNo)
    {
    case MAINTAIN_NOZZLE_DETECT:
    {
        if(ncount < 3)
        {
            qDebug("number < 3!\n");
            return;
        }

        structNozzle nozzle;

        //on/off
        QStringList strstrlist=strlist.at(0).split("=");
        nozzle.u8Onoff = atoi(strstrlist.at(1).toLatin1().data());

        //nozzle num
        strstrlist=strlist.at(1).split("=");
        strcpy(nozzle.uNum, strstrlist.at(1).toLatin1().data());

        //column num
        strstrlist=strlist.at(2).split("=");
        nozzle.u16ColNum = atoi(strstrlist.at(1).toLatin1().data());

        //send message
        msg.AddSubIE(ieNo, sizeof(structNozzle), (void*)&nozzle);
        SendMessage((char*)&msg, sizeof(msg));
    }
    break;
    case MAINTAIN_RECYCLE_DETECT:
    {
        if(ncount < 2)
        {
            qDebug("number < 2!\n");
            return;
        }

        structRecycle recycle;

        //on/off
        QStringList strstrlist=strlist.at(0).split("=");
        recycle.u8PentougaiCheck = atoi(strstrlist.at(1).toLatin1().data());

        //nozzle num
        strstrlist=strlist.at(1).split("=");
        recycle.u8RecycleCheck = atoi(strstrlist.at(1).toLatin1().data());

        //send message
        msg.AddSubIE(ieNo, sizeof(structRecycle), (void*)&recycle);
        SendMessage((char*)&msg, sizeof(msg));
    }
    break;
    case MAINTAIN_SOLENOID_STATUS:
    {
        if(ncount < 12)
        {
            qDebug("number < 12!\n");
            return;
        }

        structSolenoid_1 solenoid;

        //niandu_jifa
        QStringList strstrlist=strlist.at(0).split("=");
        solenoid.u8Niandu_JiFa = atoi(strstrlist.at(1).toLatin1().data());

        //pentou_rongjifa
        strstrlist=strlist.at(1).split("=");
        solenoid.u8Pentou_RongJifa = atoi(strstrlist.at(1).toLatin1().data());

        //pentou_rongjifa
        strstrlist=strlist.at(2).split("=");
        solenoid.u8NianduZhi = atoi(strstrlist.at(1).toLatin1().data());

        //niandu_jifa
        strstrlist=strlist.at(3).split("=");
        solenoid.u8Ref_Nianduzhi = atoi(strstrlist.at(1).toLatin1().data());

        //pentou_rongjifa
        strstrlist=strlist.at(4).split("=");
        solenoid.u8Pentou1_Rongjifa = atoi(strstrlist.at(1).toLatin1().data());

        //pentou_rongjifa
        strstrlist=strlist.at(5).split("=");
        solenoid.u8Pentou2_Rongjifa = atoi(strstrlist.at(1).toLatin1().data());

        //u8Nianduji_Yewei
        strstrlist=strlist.at(6).split("=");
        solenoid.u8Nianduji_Yewei = atoi(strstrlist.at(1).toLatin1().data());

        //u8Nianduji_HighWei
        strstrlist=strlist.at(7).split("=");
        solenoid.u8Nianduji_HighWei = atoi(strstrlist.at(1).toLatin1().data());

        //u8Nianduji_LowWei
        strstrlist=strlist.at(8).split("=");
        solenoid.u8Nianduji_LowWei = atoi(strstrlist.at(1).toLatin1().data());

        //u8Ink_LowYewei
        strstrlist=strlist.at(9).split("=");
        solenoid.u8Ink_LowYewei = atoi(strstrlist.at(1).toLatin1().data());

        //u8Pentou1_Huishoufa
        strstrlist=strlist.at(10).split("=");
        solenoid.u8Pentou1_Huishoufa = atoi(strstrlist.at(1).toLatin1().data());

        //u8Pentou2_Huishoufa
        strstrlist=strlist.at(11).split("=");
        solenoid.u8Pentou2_Huishoufa = atoi(strstrlist.at(1).toLatin1().data());

        //send message
        msg.AddSubIE(ieNo, sizeof(structSolenoid_1), (void*)&solenoid);
        SendMessage((char*)&msg, sizeof(msg));
    }
    break;
    case MAINTAIN_SOLENOID2_STATUS:
    {
        if(ncount < 12)
        {
            qDebug("number < 12!\n");
            return;
        }

        structSolenoid_2 solenoid;

        //u8Real_WorkPress
        QStringList strstrlist=strlist.at(0).split("=");
        solenoid.u8Real_WorkPress = atoi(strstrlist.at(1).toLatin1().data());

        //u8Jiaqi
        strstrlist=strlist.at(1).split("=");
        solenoid.u8Jiaqi = atoi(strstrlist.at(1).toLatin1().data());

        //u8Transfer_Qifa
        strstrlist=strlist.at(2).split("=");
        solenoid.u8Transfer_Qifa = atoi(strstrlist.at(1).toLatin1().data());

        //u8Qiya_Chuanshufa
        strstrlist=strlist.at(3).split("=");
        solenoid.u8Qiya_Chuanshufa = atoi(strstrlist.at(1).toLatin1().data());

        //u8Niandu_Pinghengfa
        strstrlist=strlist.at(4).split("=");
        solenoid.u8Niandu_Pinghengfa = atoi(strstrlist.at(1).toLatin1().data());

        //u8Tianjiaji_Fa
        strstrlist=strlist.at(5).split("=");
        solenoid.u8Tianjiaji_Fa = atoi(strstrlist.at(1).toLatin1().data());

        //u8Huanyagang_Yewei
        strstrlist=strlist.at(6).split("=");
        solenoid.u8Huanyagang_Yewei = atoi(strstrlist.at(1).toLatin1().data());

        //u8Nianduji_Yewei
        strstrlist=strlist.at(7).split("=");
        solenoid.u8Nianduji_Yewei = atoi(strstrlist.at(1).toLatin1().data());

        //u8ZhenKongGang_Yewei
        strstrlist=strlist.at(8).split("=");
        solenoid.u8ZhenKongGang_Yewei = atoi(strstrlist.at(1).toLatin1().data());

        //u8Time
        strstrlist=strlist.at(9).split("=");
        solenoid.u8Time = atoi(strstrlist.at(1).toLatin1().data());

        //u8Paiqifa
        strstrlist=strlist.at(10).split("=");
        solenoid.u8Paiqifa = atoi(strstrlist.at(1).toLatin1().data());

        //u8PA_FA
        strstrlist=strlist.at(11).split("=");
        solenoid.u8PA_FA = atoi(strstrlist.at(1).toLatin1().data());

        //u8Ink_Chuanshufa
        strstrlist=strlist.at(12).split("=");
        solenoid.u8Ink_Chuanshufa = atoi(strstrlist.at(1).toLatin1().data());

        //u8Nianduji_Fa
        strstrlist=strlist.at(13).split("=");
        solenoid.u8Nianduji_Fa = atoi(strstrlist.at(1).toLatin1().data());

        //u8Ink_fa
        strstrlist=strlist.at(14).split("=");
        solenoid.u8Ink_fa = atoi(strstrlist.at(1).toLatin1().data());

        //send message
        msg.AddSubIE(ieNo, sizeof(structSolenoid_2), (void*)&solenoid);
        SendMessage((char*)&msg, sizeof(msg));
    }
    break;
    default:
    break;
    }
}

void guiPageInterface::HandlePageInkParam(int ieNo, void *data)
{
    QString strData;
    strData = (char*)data;
    QStringList strlist = strData.split(";");
    int ncount = strlist.count();
    PMJDeviceOnOffMsg msg;

    if(ncount < 10)
    {
        qDebug("number < 10!\n");
        return;
    }

    //DeviceOp
    QStringList strstrlist=strlist.at(0).split("=");
    msg.u8DeviceOp = atoi(strstrlist.at(1).toLatin1().data());

    //DevicePauseType
    strstrlist=strlist.at(1).split("=");
    msg.u8DevicePauseType = atoi(strstrlist.at(1).toLatin1().data());

    //send message
    SendMessage((char*)&msg, sizeof(msg));
}

void guiPageInterface::HandlePageFontParam(int ieNo, void *data)
{
}

void guiPageInterface::SendMessage(const char* data, qint32 len)
{
    if(m_mainwnd)
    {
        //MainWnd* wnd = (MainWnd*)m_mainwnd;
        //wnd->WriteDatagram(data, len);
    }
}

