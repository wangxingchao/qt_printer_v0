#ifndef MAINWND_H
#define MAINWND_H

#include <QMainWindow>
#include <QtNetwork/QUdpSocket>
#include "mainwindow.h"
#include <QTimer>


namespace Ui {
    class MainWnd;
}

class MainWnd : public MainWindow
{
    Q_OBJECT

public:
    explicit MainWnd(QWidget *parent = 0);
    ~MainWnd();

private:
    Ui::MainWnd *ui;

    QUdpSocket* udpSocket;
    int desPort;
    int srcPort;
    QHostAddress desAddr;

    QTimer* timer;
signals:
    void UpdateUI_dayMainTain(QByteArray& byteArray);
    void UpdateUI_editInfo(QByteArray& byteArray);
    void UpdateUI_fontParam(QByteArray& byteArray);
    void UpdateUI_initCfg(QByteArray& byteArray);
    void UpdateUI_ink(QByteArray& byteArray);
    void UpdateUI_lightStatus(QByteArray& byteArray);
    void UpdateUI_maintainMan(QByteArray& byteArray);
    void UpdateUI_newInfo(QByteArray& byteArray);
    void UpdateUI_onoffPmj(QByteArray& byteArray);
    void UpdateUI_otherStatus(QByteArray& byteArray);
    void UpdateUI_penyinParam(QByteArray& byteArray);
    void UpdateUI_print(QByteArray& byteArray);
    void UpdateUI_runLog(QByteArray& byteArray);
    void UpdateUI_sysGen(QByteArray& byteArray);
    void UpdateUI_usrMan(QByteArray& byteArray);
private slots:
    void readPendingDatagrams();
    void WriteDatagram(const char* data, qint32 len);

    void TimerOut();
};



#endif // MAINWND_H
