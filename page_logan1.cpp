#include "page_logan1.h"
#include "ui_page_logan1.h"

Page_Logan1::Page_Logan1(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Page_Logan1)
{
    ui->setupUi(this);
}

Page_Logan1::~Page_Logan1()
{
    delete ui;
}

void Page_Logan1::on_btn_logan_clicked()
{
    //数据库查找用户名和密码
    //失败就提示
    //成功进入主界面
    emit sendLoginSuccess();

}


void Page_Logan1::on_btn_exit_clicked()
{
    exit(0);
}

