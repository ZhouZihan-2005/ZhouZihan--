/********************************************************************************
** Form generated from reading UI file 'page_logan.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGE_LOGAN_H
#define UI_PAGE_LOGAN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Page_Logan
{
public:
    QGridLayout *gridLayout;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit;

    void setupUi(QWidget *Page_Logan)
    {
        if (Page_Logan->objectName().isEmpty())
            Page_Logan->setObjectName("Page_Logan");
        Page_Logan->resize(400, 240);
        Page_Logan->setMouseTracking(true);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/C:/Users/strawberry/Desktop/icon.jpg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        Page_Logan->setWindowIcon(icon);
        gridLayout = new QGridLayout(Page_Logan);
        gridLayout->setObjectName("gridLayout");
        lineEdit_2 = new QLineEdit(Page_Logan);
        lineEdit_2->setObjectName("lineEdit_2");

        gridLayout->addWidget(lineEdit_2, 0, 0, 1, 1);

        lineEdit = new QLineEdit(Page_Logan);
        lineEdit->setObjectName("lineEdit");

        gridLayout->addWidget(lineEdit, 1, 0, 1, 1);


        retranslateUi(Page_Logan);

        QMetaObject::connectSlotsByName(Page_Logan);
    } // setupUi

    void retranslateUi(QWidget *Page_Logan)
    {
        Page_Logan->setWindowTitle(QCoreApplication::translate("Page_Logan", "\347\231\273\345\275\225", nullptr));
#if QT_CONFIG(tooltip)
        Page_Logan->setToolTip(QCoreApplication::translate("Page_Logan", "\350\277\231\346\230\257\347\231\273\345\275\225\347\252\227\345\217\243", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class Page_Logan: public Ui_Page_Logan {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGE_LOGAN_H
