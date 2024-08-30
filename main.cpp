#include "mainwindow.h"
#include "page_logan1.h"
#include <QApplication>
#include "citysql.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    citysql sql;
    return a.exec();
}
