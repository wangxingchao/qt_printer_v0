#include "runlogwnd.h"
#include "ui_runlogwnd.h"

RunLogWnd::RunLogWnd(QWidget *parent) :
    MainWindow(parent),
    ui(new Ui::RunLogWnd)
{
    ui->setupUi(this);

    createActions();
    createMenus();

    /*
    //1 �û�������־
    // �б�ı���
    QTableWidget* tableWidget = qFindChild<QTableWidget*>(this, "tableWidget");
    tableWidget->setRowCount(13);//��������Ϊ7
    tableWidget->setColumnCount(5);//��������Ϊ5
    //tableWidget->setGeometry(QRect(0,0,401,241));//����tableWidget�Ĵ�С
    QString str;
    for(int i=0; i<8; i++)
    {
        str = str.number(i);
        tableWidget->setItem(i,0,new QTableWidgetItem(str));//��һ�е�һ�е�����
        tableWidget->setItem(i,1,new QTableWidgetItem(tr("����")));//��һ�еڶ��е�����
        tableWidget->setItem(i,2,new QTableWidgetItem(tr("��Ϣ�༭")));
        tableWidget->setItem(i,3,new QTableWidgetItem(tr("�½�")));
        tableWidget->setItem(i,4,new QTableWidgetItem("2012.6.6"));
    }
    // 40,110,100,60,85
    //tableWidget->setColumnWidth(0,40);//���õ�һ�е��п�
    //tableWidget->setColumnWidth(1,110);//���õڶ��е��п�
    //tableWidget->setColumnWidth(2,100);//���õ����е��п�
    //tableWidget->setColumnWidth(3,60);//���õ����е��п�
    //tableWidget->setColumnWidth(4,85);//���õ����е��п�
    //tableWidget->setFont(QFont("wenquanyi",12,3));//��������
    QHeaderView* headerView = tableWidget->verticalHeader();
    headerView->setHidden(true); //��������
    tableWidget->setHorizontalHeaderLabels(QStringList() <<tr("RecordID")<<tr("�û���")<<tr("����ҳ��")<<tr("��������")<<tr("ʱ��"));

    //2.���в�����־
    tableWidget = qFindChild<QTableWidget*>(this, "tableWidget_2");
    tableWidget->setRowCount(13);//��������Ϊ7
    tableWidget->setColumnCount(9);//��������Ϊ5
    //tableWidget->setGeometry(QRect(0,0,401,241));//����tableWidget�Ĵ�С
    for(int i=0; i<8; i++)
    {
        str = str.number(i);
        tableWidget->setItem(i,0,new QTableWidgetItem(str));//��һ�е�һ�е�����
        tableWidget->setItem(i,1,new QTableWidgetItem("Ttra"));//��һ�еڶ��е�����
        tableWidget->setItem(i,2,new QTableWidgetItem("2,76"));
        tableWidget->setItem(i,3,new QTableWidgetItem("31"));
        tableWidget->setItem(i,4,new QTableWidgetItem("06"));
        tableWidget->setItem(i,5,new QTableWidgetItem("20,0"));
        tableWidget->setItem(i,6,new QTableWidgetItem("34"));
        tableWidget->setItem(i,7,new QTableWidgetItem("22"));
        tableWidget->setItem(i,8,new QTableWidgetItem("00"));
    }

    for(int i=0; i<9; i++)
    {
        tableWidget->setColumnWidth(i,60);
    }

    //tableWidget->setFont(QFont("wenquanyi",12,3));//��������
    headerView = tableWidget->verticalHeader();
    headerView->setHidden(true); //��������
    tableWidget->setHorizontalHeaderLabels(QStringList() <<tr("RecordID")<<tr("Ttra")<<tr("Pres")<<tr("Tr")<<tr("Ad")<<tr("Vjet")<<tr("T1")<<tr("T2")<<tr("Def"));

    //3. fault run log
    tableWidget = qFindChild<QTableWidget*>(this, "tableWidget_3");
    tableWidget->setRowCount(13);//��������Ϊ7
    tableWidget->setColumnCount(4);//��������Ϊ5
    //tableWidget->setGeometry(QRect(0,0,401,241));//����tableWidget�Ĵ�С
    for(int i=0; i<8; i++)
    {
        str = str.number(i);
        tableWidget->setItem(i,0,new QTableWidgetItem(str));//��һ�е�һ�е�����
        tableWidget->setItem(i,1,new QTableWidgetItem("3"));//��һ�еڶ��е�����
        tableWidget->setItem(i,2,new QTableWidgetItem(tr("û��ī֭")));
        tableWidget->setItem(i,3,new QTableWidgetItem("2012.6.6"));
    }

    for(int i=0; i<4; i++)
    {
        tableWidget->setColumnWidth(i,110);
    }

    //tableWidget->setFont(QFont("wenquanyi",12,3));//��������
    headerView = tableWidget->verticalHeader();
    headerView->setHidden(true); //��������
    tableWidget->setHorizontalHeaderLabels(QStringList() <<tr("RecordID")<<tr("���ϼ���")<<tr("��������")<<tr("�������ʱ��"));
*/
}

RunLogWnd::~RunLogWnd()
{
    delete ui;
}

void RunLogWnd::UpdateUI(QByteArray& byeArray)
{
    QMessageBox::information(this, tr("Test Title"), tr("RunLog!"));
}

