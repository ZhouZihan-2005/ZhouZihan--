#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    m_dlgLogin.show();
    this->hide();
    auto f = [&]()
    {
        this->show();
    };
    connect(&m_dlgLogin,&Page_Logan1::sendLoginSuccess,this,f);
    ui->treeWidget->clear();
    ui->treeWidget->setColumnCount(1);
    QStringList l;
    l<<"用户信息管理系统";
    QTreeWidgetItem *pf = new QTreeWidgetItem(ui->treeWidget,l);
    ui->treeWidget->addTopLevelItem(pf);
    l.clear();
    l<<"用户管理";
    QTreeWidgetItem *p1 = new QTreeWidgetItem(pf,l);
    l.clear();
    l<<"管理员管理";
    QTreeWidgetItem *p2 = new QTreeWidgetItem(pf,l);
    pf->addChild(p1);
    pf->addChild(p2);
    ui->treeWidget->expandAll();
    ui->stackedWidget->setCurrentIndex(0);
}

MainWindow::~MainWindow()
{
    delete ui;
}
