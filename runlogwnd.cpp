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
    //1 用户操作日志
    // 列表的标题
    QTableWidget* tableWidget = qFindChild<QTableWidget*>(this, "tableWidget");
    tableWidget->setRowCount(13);//设置行数为7
    tableWidget->setColumnCount(5);//设置列数为5
    //tableWidget->setGeometry(QRect(0,0,401,241));//设置tableWidget的大小
    QString str;
    for(int i=0; i<8; i++)
    {
        str = str.number(i);
        tableWidget->setItem(i,0,new QTableWidgetItem(str));//第一行第一列的内容
        tableWidget->setItem(i,1,new QTableWidgetItem(tr("张三")));//第一行第二列的内容
        tableWidget->setItem(i,2,new QTableWidgetItem(tr("信息编辑")));
        tableWidget->setItem(i,3,new QTableWidgetItem(tr("新建")));
        tableWidget->setItem(i,4,new QTableWidgetItem("2012.6.6"));
    }
    // 40,110,100,60,85
    //tableWidget->setColumnWidth(0,40);//设置第一列的列宽
    //tableWidget->setColumnWidth(1,110);//设置第二列的列宽
    //tableWidget->setColumnWidth(2,100);//设置第三列的列宽
    //tableWidget->setColumnWidth(3,60);//设置第四列的列宽
    //tableWidget->setColumnWidth(4,85);//设置第五列的列宽
    //tableWidget->setFont(QFont("wenquanyi",12,3));//设置字体
    QHeaderView* headerView = tableWidget->verticalHeader();
    headerView->setHidden(true); //行名隐藏
    tableWidget->setHorizontalHeaderLabels(QStringList() <<tr("RecordID")<<tr("用户名")<<tr("操作页面")<<tr("操作名称")<<tr("时间"));

    //2.运行参数日志
    tableWidget = qFindChild<QTableWidget*>(this, "tableWidget_2");
    tableWidget->setRowCount(13);//设置行数为7
    tableWidget->setColumnCount(9);//设置列数为5
    //tableWidget->setGeometry(QRect(0,0,401,241));//设置tableWidget的大小
    for(int i=0; i<8; i++)
    {
        str = str.number(i);
        tableWidget->setItem(i,0,new QTableWidgetItem(str));//第一行第一列的内容
        tableWidget->setItem(i,1,new QTableWidgetItem("Ttra"));//第一行第二列的内容
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

    //tableWidget->setFont(QFont("wenquanyi",12,3));//设置字体
    headerView = tableWidget->verticalHeader();
    headerView->setHidden(true); //行名隐藏
    tableWidget->setHorizontalHeaderLabels(QStringList() <<tr("RecordID")<<tr("Ttra")<<tr("Pres")<<tr("Tr")<<tr("Ad")<<tr("Vjet")<<tr("T1")<<tr("T2")<<tr("Def"));

    //3. fault run log
    tableWidget = qFindChild<QTableWidget*>(this, "tableWidget_3");
    tableWidget->setRowCount(13);//设置行数为7
    tableWidget->setColumnCount(4);//设置列数为5
    //tableWidget->setGeometry(QRect(0,0,401,241));//设置tableWidget的大小
    for(int i=0; i<8; i++)
    {
        str = str.number(i);
        tableWidget->setItem(i,0,new QTableWidgetItem(str));//第一行第一列的内容
        tableWidget->setItem(i,1,new QTableWidgetItem("3"));//第一行第二列的内容
        tableWidget->setItem(i,2,new QTableWidgetItem(tr("没有墨汁")));
        tableWidget->setItem(i,3,new QTableWidgetItem("2012.6.6"));
    }

    for(int i=0; i<4; i++)
    {
        tableWidget->setColumnWidth(i,110);
    }

    //tableWidget->setFont(QFont("wenquanyi",12,3));//设置字体
    headerView = tableWidget->verticalHeader();
    headerView->setHidden(true); //行名隐藏
    tableWidget->setHorizontalHeaderLabels(QStringList() <<tr("RecordID")<<tr("故障级别")<<tr("故障描述")<<tr("故障清除时间"));
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

