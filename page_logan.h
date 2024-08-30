#ifndef PAGE_LOGAN_H
#define PAGE_LOGAN_H

#include <QWidget>

namespace Ui {
class Page_Logan;
}

class Page_Logan : public QWidget
{
    Q_OBJECT

public:
    explicit Page_Logan(QWidget *parent = nullptr);
    ~Page_Logan();

private:
    Ui::Page_Logan *ui;
};

#endif // PAGE_LOGAN_H
