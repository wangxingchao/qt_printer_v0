#include <QtGui/QApplication>
#include <QTextCodec>   //Qt的字符编码头文件
#include "mainwindow.h"
#include "runlogwnd.h"
#include "initcfgwnd.h"
#include "printwnd.h"
#include "lightstatuswnd.h"
#include "penyinparamwnd.h"
#include "newinfownd.h"
#include "sysgenwnd.h"
#include "maintainmanwnd.h"
#include "mainwnd.h"
#include "jetstatus.h"
#include "opensytleSet.h"
#include "magnetic.h"
#include "shieldcheck.h"
#include "counter.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTextCodec *codec = QTextCodec::codecForName("unifont");
    QTextCodec::setCodecForLocale(codec);
    QTextCodec::setCodecForCStrings(codec);
    QTextCodec::setCodecForTr(codec);
    //QFont font("unifont",14);
    //a.setFont(font);

    //QTextCodec::setCodecForTr(QTextCodec::codecForName("UTF-8"));//设置中文字体编码
    MainWnd w;
    a.setFont(QFont("unifont", 14, QFont::Normal));
    InitCfgWnd initCfg;
    PrintWnd print;
    RunLogWnd runlogWnd;
    LightStatusWnd lightStatus;
    PenYinParamWnd penyinParam;
    NewInfoWnd newinfo;
    SysGenWnd sysGen;
    MaintainManWnd maintainMan;
    Jetstatus jetStatusWnd;
    openSytleSet openSytleSetWnd;
    magnetic magneticWnd;
    shieldcheck shieldcheckWnd;
    counter counterWnd;
    controller control;
    control.m_wnds[MainWindow::WND_MAIN] = &w;


    control.m_wnds[MainWindow::WND_INIT_CONF] = &initCfg;
    control.m_wnds[MainWindow::WND_PRINT] = &print;

    control.m_wnds[MainWindow::WND_RUNLOG] = &runlogWnd;
    control.m_wnds[MainWindow::WND_LIGHTSTATUS] = &lightStatus;

    control.m_wnds[MainWindow::WND_PENYIN] = &penyinParam;

    control.m_wnds[MainWindow::WND_NEWINFO] = &newinfo;
    control.m_wnds[MainWindow::WND_SYS_GEN] = &sysGen;
    control.m_wnds[MainWindow::WND_MAINTAIN_MAN] = &maintainMan;
    control.m_wnds[MainWindow::WND_JETSTATUS] = &jetStatusWnd;
    control.m_wnds[MainWindow::WND_OPENSYTLESET] = &openSytleSetWnd;
    control.m_wnds[MainWindow::WND_MAGNETIC] = &magneticWnd;
    control.m_wnds[MainWindow::WND_SHIELDCHECK] = &shieldcheckWnd;
    control.m_wnds[MainWindow::WND_COUNTER] = &counterWnd;
    w.SetController(&control);

    initCfg.SetController(&control);
    initCfg.setWindowFlags(Qt::Window|Qt::FramelessWindowHint|Qt::WindowTitleHint);

    print.SetController(&control);
    print.setWindowFlags(Qt::Window|Qt::FramelessWindowHint|Qt::WindowTitleHint);

    runlogWnd.SetController(&control);
    runlogWnd.setWindowFlags(Qt::Window|Qt::FramelessWindowHint|Qt::WindowTitleHint);


    lightStatus.SetController(&control);
    lightStatus.setWindowFlags(Qt::Window|Qt::FramelessWindowHint|Qt::WindowTitleHint);



    penyinParam.SetController(&control);
    penyinParam.setWindowFlags(Qt::Window|Qt::FramelessWindowHint|Qt::WindowTitleHint);


    newinfo.SetController(&control);
    newinfo.setWindowFlags(Qt::Window|Qt::FramelessWindowHint|Qt::WindowTitleHint);


    sysGen.SetController(&control);
    sysGen.setWindowFlags(Qt::Window|Qt::FramelessWindowHint|Qt::WindowTitleHint);

    maintainMan.SetController(&control);
    maintainMan.setWindowFlags(Qt::Window|Qt::FramelessWindowHint|Qt::WindowTitleHint);

    jetStatusWnd.SetController(&control);
    jetStatusWnd.setWindowFlags(Qt::Window|Qt::FramelessWindowHint|Qt::WindowTitleHint);

    openSytleSetWnd.SetController(&control);
    openSytleSetWnd.setWindowFlags(Qt::Window|Qt::FramelessWindowHint|Qt::WindowTitleHint);

    magneticWnd.SetController(&control);
    magneticWnd.setWindowFlags(Qt::Window|Qt::FramelessWindowHint|Qt::WindowTitleHint);

    shieldcheckWnd.SetController(&control);
    shieldcheckWnd.setWindowFlags(Qt::Window|Qt::FramelessWindowHint|Qt::WindowTitleHint);

    counterWnd.SetController(&control);
    counterWnd.setWindowFlags(Qt::Window|Qt::FramelessWindowHint|Qt::WindowTitleHint);

    w.show();

    return a.exec();
}
