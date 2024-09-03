/********************************************************************************
** Form generated from reading UI file 'page_logan1.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGE_LOGAN1_H
#define UI_PAGE_LOGAN1_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Page_Logan1
{
public:
    QGridLayout *gridLayout_3;
    QLabel *label_3;
    QWidget *widget_2;
    QGridLayout *gridLayout_2;
    QLineEdit *le_user;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QLabel *lb1;
    QLineEdit *lineEdit_2;
    QLabel *lb2;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_4;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *btn_logan;
    QPushButton *btn_exit;

    void setupUi(QWidget *Page_Logan1)
    {
        if (Page_Logan1->objectName().isEmpty())
            Page_Logan1->setObjectName("Page_Logan1");
        Page_Logan1->resize(400, 250);
        Page_Logan1->setMinimumSize(QSize(400, 250));
        Page_Logan1->setMaximumSize(QSize(400, 250));
        Page_Logan1->setMouseTracking(true);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/11.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Page_Logan1->setWindowIcon(icon);
        gridLayout_3 = new QGridLayout(Page_Logan1);
        gridLayout_3->setObjectName("gridLayout_3");
        label_3 = new QLabel(Page_Logan1);
        label_3->setObjectName("label_3");
        label_3->setMaximumSize(QSize(16777215, 60));
        QFont font;
        font.setPointSize(18);
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_3->addWidget(label_3, 0, 0, 1, 1);

        widget_2 = new QWidget(Page_Logan1);
        widget_2->setObjectName("widget_2");
        gridLayout_2 = new QGridLayout(widget_2);
        gridLayout_2->setObjectName("gridLayout_2");
        le_user = new QLineEdit(widget_2);
        le_user->setObjectName("le_user");
        le_user->setMaxLength(8);

        gridLayout_2->addWidget(le_user, 0, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 3, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 3, 1, 1);

        lb1 = new QLabel(widget_2);
        lb1->setObjectName("lb1");
        QFont font1;
        font1.setPointSize(14);
        lb1->setFont(font1);
        lb1->setTextFormat(Qt::TextFormat::AutoText);

        gridLayout_2->addWidget(lb1, 0, 1, 1, 1);

        lineEdit_2 = new QLineEdit(widget_2);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setMaxLength(8);
        lineEdit_2->setEchoMode(QLineEdit::EchoMode::Password);

        gridLayout_2->addWidget(lineEdit_2, 1, 2, 1, 1);

        lb2 = new QLabel(widget_2);
        lb2->setObjectName("lb2");
        lb2->setFont(font1);
        lb2->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout_2->addWidget(lb2, 1, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 0, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 1, 0, 1, 1);


        gridLayout_3->addWidget(widget_2, 1, 0, 1, 1);

        widget = new QWidget(Page_Logan1);
        widget->setObjectName("widget");
        widget->setMaximumSize(QSize(16777215, 40));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setHorizontalSpacing(6);
        gridLayout->setVerticalSpacing(0);
        gridLayout->setContentsMargins(2, 0, 2, 0);
        btn_logan = new QPushButton(widget);
        btn_logan->setObjectName("btn_logan");
        btn_logan->setMinimumSize(QSize(0, 35));
        QFont font2;
        font2.setPointSize(12);
        btn_logan->setFont(font2);

        gridLayout->addWidget(btn_logan, 0, 0, 1, 1);

        btn_exit = new QPushButton(widget);
        btn_exit->setObjectName("btn_exit");
        btn_exit->setMinimumSize(QSize(0, 35));
        btn_exit->setMaximumSize(QSize(16777215, 35));
        btn_exit->setFont(font2);

        gridLayout->addWidget(btn_exit, 0, 1, 1, 1);


        gridLayout_3->addWidget(widget, 2, 0, 1, 1);


        retranslateUi(Page_Logan1);

        QMetaObject::connectSlotsByName(Page_Logan1);
    } // setupUi

    void retranslateUi(QWidget *Page_Logan1)
    {
        Page_Logan1->setWindowTitle(QCoreApplication::translate("Page_Logan1", "\347\231\273\345\275\225", nullptr));
#if QT_CONFIG(tooltip)
        Page_Logan1->setToolTip(QCoreApplication::translate("Page_Logan1", "\350\277\231\346\230\257\347\231\273\345\275\225\347\225\214\351\235\242", nullptr));
#endif // QT_CONFIG(tooltip)
        label_3->setText(QCoreApplication::translate("Page_Logan1", "\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        le_user->setPlaceholderText(QCoreApplication::translate("Page_Logan1", "\350\257\267\350\276\223\345\205\245", nullptr));
        lb1->setText(QCoreApplication::translate("Page_Logan1", "\350\264\246\345\217\267", nullptr));
        lineEdit_2->setPlaceholderText(QCoreApplication::translate("Page_Logan1", "\350\257\267\350\276\223\345\205\245", nullptr));
        lb2->setText(QCoreApplication::translate("Page_Logan1", "\345\257\206\347\240\201", nullptr));
        btn_logan->setText(QCoreApplication::translate("Page_Logan1", "\347\231\273\345\275\225", nullptr));
        btn_exit->setText(QCoreApplication::translate("Page_Logan1", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Page_Logan1: public Ui_Page_Logan1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGE_LOGAN1_H
