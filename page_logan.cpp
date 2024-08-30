#include "page_logan.h"
#include "ui_page_logan.h"

Page_Logan::Page_Logan(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Page_Logan)
{
    ui->setupUi(this);
}

Page_Logan::~Page_Logan()
{
    delete ui;
}
