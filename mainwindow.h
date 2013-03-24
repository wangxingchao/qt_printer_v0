#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
namespace Ui {
    class MainWindow;
}

#define MAX_WND_NUM     30

class MainWindow;

class controller
{
public:
    MainWindow* m_wnds[MAX_WND_NUM];
public:
    controller()
    {
        for(int i=0; i<MAX_WND_NUM; i++)
        {
            m_wnds[i] = NULL;
        }
    }
};

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    enum{WND_INIT_CONF=0, WND_PRINT,        WND_RUNLOG,         WND_ONOFF,    WND_DAY_MAINTAIN,
         WND_LIGHTSTATUS, WND_OTHER_STATUS, WND_PENYIN,         WND_FONT,     WND_INK,
         WND_NEWINFO,     WND_SYS_GEN,      WND_USEMAN,         WND_MAINTAIN_MAN,
         WND_MAIN,        WND_JETSTATUS,    WND_OPENSYTLESET,   WND_MAGNETIC,
         WND_SHIELDCHECK, WND_COUNTER};
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
private slots:
    void ShowRunStatus();
private:
    Ui::MainWindow *ui;

protected:
     void createActions();
     void createMenus();

private slots:

    void initConfig();
    void print();

    void runlog();
    void TurnOnBoard();
    void TurnOffBoard();
    void TurnquickOnBoard();
    void TurnquickOffBoard();
    void TurnclearMachineBoard();
    void TurnclearChokeBoard();

    void lightStatus();
    void otherStatus();

    void penYinParam();

    void newifno();

    void SysGeneral();
    void UseMan();
    void maintainMan();

    void mainWnd();
    void jetSatus();

    void shieldCheck();
    void openSytleSet();
    void magnetic();

    void counter();
signals:
    void WriteDatagram(const char* data, qint32 len);
private:
    QMenu *PmjMenu;
    QMenu *runStatusMenu;
    QMenu *paramMenu;
    QMenu *infoEditMenu;
    QMenu *dayMaintainMenu;
    QMenu *dataRecordMenu;
    QMenu *mainMenu;

    //Pmj Menu
    QAction *onAct;
    QAction *offAct;
    QAction *quickOnAct;
    QAction *quickOffAct;
    QAction *inkOpenAct;
    QAction *inkCloseAct;
    QAction *openSytleSetAct;
    //runStatus Menu
    QAction *lightStatusAct;
    QAction *jetStatusAct;
    //param Menu
    QAction *penyinAct;
    //infoedit Menu
    QAction *infoEditAct;
    //dayMaintain Menu
    QAction *jetRunStatusAct;
    QAction *magneticValveAct;
    //    inkChannelClear Menu
    QMenu *inkChannelClearMenu;
           QAction* clearJetAct;
           QAction* clearChokeAct;
           QAction* clearMachineAct;
    QAction *shieldCheckAct;
    //dataRecord menu
    QAction *versionInfoAct;
    QAction *counterAct;
    QAction *initConfAct;
    QAction *jetStatusRecordAct;
    QAction *errorLogAct;
    //main wnd
    QAction *mainWndAct;

    //ËùÓÐ´°Ìå
    controller* m_controller;
public:
    void SetController(controller* pController);
};

#endif // MAINWINDOW_H
