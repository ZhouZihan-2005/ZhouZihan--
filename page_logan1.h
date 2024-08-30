#ifndef PAGE_LOGAN1_H
#define PAGE_LOGAN1_H

#include <QWidget>

namespace Ui {
class Page_Logan1;
}

class Page_Logan1 : public QWidget
{
    Q_OBJECT

public:
    explicit Page_Logan1(QWidget *parent = nullptr);
    ~Page_Logan1();

private slots:
    void on_btn_logan_clicked();

    void on_btn_exit_clicked();
signals:
    void sendLoginSuccess();

private:
    Ui::Page_Logan1 *ui;
};

#endif // PAGE_LOGAN1_H
