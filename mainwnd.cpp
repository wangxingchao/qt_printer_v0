#include "mainwnd.h"
#include "ui_mainwnd.h"
#include <QtGui/qmessagebox.h>
#include <QLabel>
#include "cncpbase.hh"
#include "PMJOpMessage.hh"

MainWnd::MainWnd(QWidget *parent) :
    MainWindow(parent),
    ui(new Ui::MainWnd)
{
    ui->setupUi(this);
    createActions();
    createMenus();


    QLabel* pLabel = qFindChild<QLabel*>(this, "label_wel");

    QPalette pe;
    pe.setColor(QPalette::WindowText,Qt::darkGreen);
    pLabel->setPalette(pe);

    desAddr.setAddress(tr("127.0.0.1"));
    desPort = 5555;
    srcPort = 5556;
    udpSocket = new QUdpSocket(this);
    udpSocket->bind(QHostAddress::LocalHost, srcPort);

    connect(udpSocket, SIGNAL(readyRead()),this, SLOT(readPendingDatagrams()));
/*
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(TimerOut()));
    timer->start(10000);
*/
}

MainWnd::~MainWnd()
{
    delete ui;
}

void MainWnd::readPendingDatagrams()
{
    while (udpSocket->hasPendingDatagrams()) {
          QByteArray datagram;
          datagram.resize(udpSocket->pendingDatagramSize());
          QHostAddress sender;
          quint16 senderPort;

          udpSocket->readDatagram(datagram.data(), datagram.size(),
                                  &sender, &senderPort);

          //emit UpdateUI(datagram);
          CNCPBaseMsg* pBaseMsg = (CNCPBaseMsg*)datagram.data();

          unsigned int unType = pBaseMsg->getMsgType(true);
          switch(unType)
          {
          case PMJ_INITIAL_CONF_MESSAGE:
               emit UpdateUI_initCfg(datagram);
              break;
          case PMJ_DEVICE_ONOFF_MESSAGE:
              emit UpdateUI_onoffPmj(datagram);
              break;
          case PMJ_PRINT_MESSAGE:
              emit UpdateUI_print(datagram);
              break;
          case PMJ_INKCHANNEL_LOG_MESSAGE:
          case PMJ_USERLOG_MESSAGE:
          case PMJ_DEVICE_WARNNING_MESSAGE:
              emit UpdateUI_runLog(datagram);
             break;
          //case PMJ_RECYCLE_MESSAGE:
          //    break;
          //case PMJ_SOLENOID_STATUS_MESSAGE:
          //    break;
          case PMJ_GET_DEVICE_STATUS_MESSAGE:
              break;
          case PMJ_INK_CHANNEL_PARA_MESSAGE:
              emit UpdateUI_ink(datagram);
              break;
          case PMJ_PRINT_PARA_MESSAGE:
              emit UpdateUI_penyinParam(datagram);
              break;
          case PMJ_CHARATER_STYLE_MESSAGE:
              emit UpdateUI_fontParam(datagram);
              break;
          case PMJ_INFO_EDIT_SAVE_MESSAGE:
              emit UpdateUI_editInfo(datagram);
              break;
          case PMJ_INFO_CONTENT_GET_MESSAGE:
              break;
          case PMJ_INFO_CONTENT_GET_RSP_MESSAGE:
              break;
          default:
              break;
          }
      }
}

void MainWnd::WriteDatagram(const char* data, qint32 len)
{
    if(len <=0 || data == NULL)
    {
        return;
    }

    udpSocket->writeDatagram(data, len, desAddr,desPort);
}



//²âÊÔÓÃ
void MainWnd::TimerOut()
{
    QByteArray datagram;

    //emit UpdateUI_dayMainTain(datagram);
    /*
    emit UpdateUI_editInfo(datagram);
    emit UpdateUI_fontParam(datagram);
    emit UpdateUI_initCfg(datagram);
    emit UpdateUI_ink(datagram);

    emit UpdateUI_lightStatus(datagram);
    emit UpdateUI_maintainMan(datagram);
    emit UpdateUI_newInfo(datagram);
    emit UpdateUI_onoffPmj(datagram);
    emit UpdateUI_otherStatus(datagram);

    emit UpdateUI_penyinParam(datagram);
    emit UpdateUI_print(datagram);
    emit UpdateUI_runLog(datagram);
    emit UpdateUI_sysGen(datagram);
    emit UpdateUI_usrMan(datagram);
    */

    timer->stop();
}
