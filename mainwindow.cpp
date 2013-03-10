#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtGui/qmessagebox.h>
#include <QTextCodec> 

#include "qstring.h"
#include "qtimer.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/ioctl.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <QtGui>

#define FPGA_TEST 0x0
#define FPGA_READ_TEMP 0x1
#define FPGA_READ_PREESURE 0x2
#define FPGA_ADDR 0x10
#define FPGA_READ_DATA 0x12
#define FPGA_WRITE_DATA 0x13

static char *devname = "/dev/s3c-fpga";
static int fd;
static int ret;
static int buffer[3] = {0xaa55, 0xccbb, 0x1234};

static int status;
static int address=0;
static int tmp_data;
static int enable;

static int get_data(int address)
{
   int ret;
    ret  = ioctl(fd, FPGA_ADDR, &address);
    if (ret < 0)
          printf("ioctl error when setting FPGA_ADDR\n");
   ret = ioctl(fd, FPGA_READ_DATA, &tmp_data);
    printf("FPGA_READ_DATA: addr 0x%x --> value 0x%x\n",address, tmp_data);
    if (ret < 0)
      printf("ioctl error\n"); //print error message on screen
//    printf("IOCTL Ok: Status = %x\n", status);
    return tmp_data;
}


static int write_data(int address, int value)
{
        int ret;
    ret  = ioctl(fd, FPGA_ADDR, &address);
    if (ret < 0)
          printf("ioctl error when setting FPGA_ADDR\n");
   ret = ioctl(fd, FPGA_WRITE_DATA, &value);
    //printf("FPGA_READ_DATA: %d\n", tmp_data);
    if (ret < 0)
       printf("ioctl error\n"); //print error message on screen
//    printf("IOCTL Ok: Status = %x\n", status);
 printf("FPGA_WRITE_DATA: write value %d to addr %d\n", value, address);
return ret;
}

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    //ui->setupUi(this);

    //QAction* action = this->menuBar()->actions().at(2);

    //QAction* subaction = action->menu()->actions().at(0);
    //QObject::connect(subaction, SIGNAL(activated()), this, SLOT(ShowRunStatus()) );
    /*
    createActions();
    createMenus();

    QLabel* pLabel = qFindChild<QLabel*>(this, "label_wel");

    QPalette pe;
    pe.setColor(QPalette::WindowText,Qt::darkGreen);
    pLabel->setPalette(pe);
    */

 fd = open(devname, O_RDWR);
    if (fd < 0)
          printf("open error\n");

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::ShowRunStatus()
{
    QMessageBox::information(this, tr("Test Title"), tr("Checked me!"));
}

void MainWindow::createMenus()
{
    PmjMenu = menuBar()->addMenu(tr("ink-jet(&p)"));
  QTextCodec *codec = QTextCodec::codecForName("unifont");
    QTextCodec::setCodecForLocale(codec);
    QTextCodec::setCodecForCStrings(codec);
    QTextCodec::setCodecForTr(codec);

    PmjMenu->addAction(onAct);
    PmjMenu->addAction(offAct);
    PmjMenu->addAction(quickOnAct);
    PmjMenu->addAction(quickOffAct);
    PmjMenu->addAction(inkOpenAct);
    PmjMenu->addAction(inkCloseAct);
    PmjMenu->addAction(openSytleSetAct);

    runStatusMenu = menuBar()->addMenu(tr("runStatus(&R)"));
    //runStatusMenu->setFont(QFont("wenquanyi",9,3));//ÉèÖÃ×ÖÌå
    runStatusMenu->addAction(lightStatusAct);
    runStatusMenu->addAction(jetStatusAct);

    paramMenu = menuBar()->addMenu(tr("parameter(&P)"));
    //runparamMenu->setFont(QFont("wenquanyi",9,3));//ÉèÖÃ×ÖÌå
    paramMenu->addAction(penyinAct);

    infoEditMenu = menuBar()->addMenu(tr("infoEdit(&E)"));
    //infoEditMenu->setFont(QFont("wenquanyi",9,3));//ÉèÖÃ×ÖÌå
    infoEditMenu->addAction(infoEditAct);


    dayMaintainMenu = menuBar()->addMenu(tr("dayMaintain(&D)"));
    //helpMenu->setFont(QFont("wenquanyi",9,3));//ÉèÖÃ×ÖÌå
    dayMaintainMenu->addAction(jetRunStatusAct);
    dayMaintainMenu->addAction(magneticValveAct);
    dayMaintainMenu->addAction(shieldCheckAct);
    inkChannelClearMenu = dayMaintainMenu->addMenu(tr("ChannelClear(&W)"));
    inkChannelClearMenu->addAction(clearJetAct);
    inkChannelClearMenu->addAction(clearChokeAct);
    inkChannelClearMenu->addAction(clearMachineAct);

    dataRecordMenu = menuBar()->addMenu(tr("Record(&R)"));
    dataRecordMenu->addAction(versionInfoAct);
    dataRecordMenu->addAction(counterAct);
    dataRecordMenu->addAction(initConfAct);
    dataRecordMenu->addAction(jetStatusRecordAct);
    dataRecordMenu->addAction(errorLogAct);


    mainMenu =  menuBar()->addMenu(tr("main(&M)"));
    //mainMenu->setFont(QFont("wenquanyi",9,3));//ÉèÖÃ×ÖÌå
    mainMenu->addAction(mainWndAct);

}

void MainWindow::createActions()
{
    onAct = new QAction(tr("on"), this);
    offAct = new QAction(tr("off"), this);
    quickOnAct = new QAction(tr("quickOn"), this);
    quickOffAct = new QAction(tr("quickOff"), this);
    inkOpenAct = new QAction(tr("inkOpen"), this);
    inkCloseAct = new QAction(tr("inkClose"), this);
    openSytleSetAct = new QAction(tr("penSytleSet"), this);

    lightStatusAct = new QAction(tr("light"), this);
    jetStatusAct = new QAction(tr("jetStatus"), this);

    penyinAct = new QAction(tr("penyin"), this);

    infoEditAct = new QAction(tr("infoEdit"), this);

    jetRunStatusAct = new QAction(tr("jetRun"), this);
    magneticValveAct = new QAction(tr("magnetic"), this);
    shieldCheckAct = new QAction(tr("shieldCheck"), this);
    clearJetAct = new QAction(tr("clearJet"), this);
    clearChokeAct = new QAction(tr("clearChoke"), this);
    clearMachineAct = new QAction(tr("clearMachine"), this);

    versionInfoAct = new QAction(tr("versionInfo"), this);
    counterAct = new QAction(tr("counter"), this);
    initConfAct = new QAction(tr("initCon"), this);
    jetStatusRecordAct = new QAction(tr("jetStatusRecord"), this);
    errorLogAct = new QAction(tr("errorLog"), this);

    mainWndAct = new QAction(tr("main"), this);

    connect(onAct, SIGNAL(triggered()), this, SLOT(TurnOnBoard()));
    connect(offAct, SIGNAL(triggered()), this, SLOT(TurnOffBoard()));

    connect(jetStatusAct, SIGNAL(triggered()), this, SLOT(jetSatus()));

    connect(jetRunStatusAct, SIGNAL(triggered()), this, SLOT(jetSatus()));
    connect(magneticValveAct, SIGNAL(triggered()), this, SLOT(magnetic()));
    connect(shieldCheckAct, SIGNAL(triggered()), this, SLOT(shieldCheck()));

    connect(infoEditAct, SIGNAL(triggered()), this, SLOT(newifno()));

    connect(lightStatusAct, SIGNAL(triggered()), this, SLOT(lightStatus()));
    connect(openSytleSetAct, SIGNAL(triggered()), this, SLOT(openSytleSet()));
    connect(penyinAct, SIGNAL(triggered()), this, SLOT(penYinParam()));

    connect(versionInfoAct, SIGNAL(triggered()), this, SLOT(SysGeneral()));
    connect(initConfAct, SIGNAL(triggered()), this, SLOT(initConfig()));
    connect(counterAct, SIGNAL(triggered()), this, SLOT(counter()));
    connect(jetStatusRecordAct, SIGNAL(triggered()), this, SLOT(maintainMan()));
    connect(errorLogAct, SIGNAL(triggered()), this, SLOT(runlog()));

    connect(mainWndAct, SIGNAL(triggered()), this, SLOT(mainWnd()));
     /*connect(initConfigAct, SIGNAL(triggered()), this, SLOT(initConfig()));
     connect(onoffAct, SIGNAL(triggered()), this, SLOT(onOffMachine()));
     connect(printAct, SIGNAL(triggered()), this, SLOT(print()));

     connect(runlogAct, SIGNAL(triggered()), this, SLOT(runlog()));
     connect(dayMaintainAct, SIGNAL(triggered()), this, SLOT(dayMaintain()));

     connect(LightStatusAct, SIGNAL(triggered()), this, SLOT(lightStatus()));
     connect(OtherStatusAct, SIGNAL(triggered()), this, SLOT(otherStatus()));

     connect(inkPileAct, SIGNAL(triggered()), this, SLOT(inkPileParam()));
     connect(penyinAct, SIGNAL(triggered()), this, SLOT(penYinParam()));
     connect(fontAct, SIGNAL(triggered()), this, SLOT(fontParam()));

     connect(newAct, SIGNAL(triggered()), this, SLOT(newifno()));
     connect(editAct, SIGNAL(triggered()), this, SLOT(edit()));

     connect(SysGeneralAct, SIGNAL(triggered()), this, SLOT(SysGeneral()));
     connect(UseManAct, SIGNAL(triggered()), this, SLOT(UseMan()));
     connect(maintainManAct, SIGNAL(triggered()), this, SLOT(maintainMan()));

     connect(mainWndAct, SIGNAL(triggered()), this, SLOT(mainWnd()));*/
}

void MainWindow::initConfig()
{
    //QMessageBox::information(this, tr("Test Title"), tr("initConfig!"));
    m_controller->m_wnds[WND_INIT_CONF]->setGeometry(this->geometry());
    this->hide();
    m_controller->m_wnds[WND_INIT_CONF]->show();
}

void MainWindow::print()
{
    //QMessageBox::information(this, tr("Test Title"), tr("print!"));
    m_controller->m_wnds[WND_PRINT]->setGeometry(this->geometry());
    this->hide();
    m_controller->m_wnds[WND_PRINT]->show();
}

void MainWindow::runlog()
{
    //QMessageBox::information(this, tr("Test Title"), tr("runlog!"));
    m_controller->m_wnds[WND_RUNLOG]->setGeometry(this->geometry());
    this->hide();
    m_controller->m_wnds[WND_RUNLOG]->show();
}


void MainWindow::lightStatus()
{
    //QMessageBox::information(this, tr("Test Title"), tr("lightStatus!"));
    m_controller->m_wnds[WND_LIGHTSTATUS]->setGeometry(this->geometry());
    this->hide();

    m_controller->m_wnds[WND_LIGHTSTATUS]->show();
}

void MainWindow::otherStatus()
{
    //QMessageBox::information(this, tr("Test Title"), tr("otherStatus!"));
    m_controller->m_wnds[WND_OTHER_STATUS]->setGeometry(this->geometry());
    this->hide();
    m_controller->m_wnds[WND_OTHER_STATUS]->show();
}


void MainWindow::penYinParam()
{
    //QMessageBox::information(this, tr("Test Title"), tr("penYinParam!"));
    m_controller->m_wnds[WND_PENYIN]->setGeometry(this->geometry());
    this->hide();
    m_controller->m_wnds[WND_PENYIN]->show();
}

void MainWindow::newifno()
{
    //QMessageBox::information(this, tr("Test Title"), tr("newifno!"));
    m_controller->m_wnds[WND_NEWINFO]->setGeometry(this->geometry());
    this->hide();
    m_controller->m_wnds[WND_NEWINFO]->show();
}



void MainWindow::SysGeneral()
{
    //QMessageBox::information(this, tr("Test Title"), tr("SysGeneral!"));

    m_controller->m_wnds[WND_SYS_GEN]->setGeometry(this->geometry());
    this->hide();
    m_controller->m_wnds[WND_SYS_GEN]->show();
}

void MainWindow::UseMan()
{
    //QMessageBox::information(this, tr("Test Title"), tr("UseMan!"));

    m_controller->m_wnds[WND_USEMAN]->setGeometry(this->geometry());
    this->hide();
    m_controller->m_wnds[WND_USEMAN]->show();
}

void MainWindow::maintainMan()
{
    //QMessageBox::information(this, tr("Test Title"), tr("maintainMan!"));
    m_controller->m_wnds[WND_MAINTAIN_MAN]->setGeometry(this->geometry());
    this->hide();
    m_controller->m_wnds[WND_MAINTAIN_MAN]->show();
}

void MainWindow::SetController(controller* pController)
{

    m_controller = pController;

    MainWindow* w = m_controller->m_wnds[WND_MAIN];
    if(this != w)
    {
        connect(this, SIGNAL(WriteDatagram(const char*,qint32)), w, SLOT(WriteDatagram(const char* , qint32)));
    }

    if(this == m_controller->m_wnds[WND_INIT_CONF])
    {
        connect(w, SIGNAL(UpdateUI_initCfg(QByteArray&)), this, SLOT(UpdateUI(QByteArray&)));
    }
    else if(this == m_controller->m_wnds[WND_PRINT])
    {
        connect(w, SIGNAL(UpdateUI_print(QByteArray&)), this, SLOT(UpdateUI(QByteArray&)));
    }
    else if(this == m_controller->m_wnds[WND_RUNLOG])
    {
        connect(w, SIGNAL(UpdateUI_runLog(QByteArray&)), this, SLOT(UpdateUI(QByteArray&)));
    }
    else if(this == m_controller->m_wnds[WND_LIGHTSTATUS])
    {
        connect(w, SIGNAL(UpdateUI_lightStatus(QByteArray&)), this, SLOT(UpdateUI(QByteArray&)));
    }
    else if(this == m_controller->m_wnds[WND_OTHER_STATUS])
    {
        connect(w, SIGNAL(UpdateUI_otherStatus(QByteArray&)), this, SLOT(UpdateUI(QByteArray&)));
    }
    else if(this == m_controller->m_wnds[WND_PENYIN])
    {
        connect(w, SIGNAL(UpdateUI_penyinParam(QByteArray&)), this, SLOT(UpdateUI(QByteArray&)));
    }
    else if(this == m_controller->m_wnds[WND_NEWINFO])
    {
        connect(w, SIGNAL(UpdateUI_newInfo(QByteArray&)), this, SLOT(UpdateUI(QByteArray&)));
    }
    else if(this == m_controller->m_wnds[WND_SYS_GEN])
    {
        connect(w, SIGNAL(UpdateUI_sysGen(QByteArray&)), this, SLOT(UpdateUI(QByteArray&)));
    }
    else if(this == m_controller->m_wnds[WND_USEMAN])
    {
        connect(w, SIGNAL(UpdateUI_usrMan(QByteArray&)), this, SLOT(UpdateUI(QByteArray&)));
    }
    else if(this == m_controller->m_wnds[WND_MAINTAIN_MAN])
    {
        connect(w, SIGNAL(UpdateUI_maintainMan(QByteArray&)), this, SLOT(UpdateUI(QByteArray&)));
    }
}

void MainWindow::mainWnd()
{
    //QMessageBox::information(this, tr("Test Title"), tr("mainWnd!"));
    m_controller->m_wnds[WND_MAIN]->setGeometry(this->geometry());
    this->hide();
    m_controller->m_wnds[WND_MAIN]->show();
}

void MainWindow::jetSatus()
{
    m_controller->m_wnds[WND_JETSTATUS]->setGeometry(this->geometry());
    this->hide();
    m_controller->m_wnds[WND_JETSTATUS]->show();
}

/* FIXME: Use Proper Register to turn off/on */
void MainWindow::TurnOnBoard()
{
	write_data(0x01, 1);
}
void MainWindow::TurnOffBoard()
{
	write_data(0x02, 1);
}

void MainWindow::openSytleSet()
{
    m_controller->m_wnds[WND_OPENSYTLESET]->setGeometry(this->geometry());
    this->hide();
    m_controller->m_wnds[WND_OPENSYTLESET]->show();
}

void MainWindow::magnetic()
{
    m_controller->m_wnds[WND_MAGNETIC]->setGeometry(this->geometry());
    this->hide();
    m_controller->m_wnds[WND_MAGNETIC]->show();
}

void MainWindow::shieldCheck()
{
    m_controller->m_wnds[WND_SHIELDCHECK]->setGeometry(this->geometry());
    this->hide();
    m_controller->m_wnds[WND_SHIELDCHECK]->show();
}

void MainWindow::counter()
{
    m_controller->m_wnds[WND_COUNTER]->setGeometry(this->geometry());
    this->hide();
    m_controller->m_wnds[WND_COUNTER]->show();
}
