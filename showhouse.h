#ifndef SHOWHOUSE_H
#define SHOWHOUSE_H

#include <QDialog>

namespace Ui {
class showhouse;
}

class showhouse : public QDialog
{
    Q_OBJECT

public:
    explicit showhouse(QWidget *parent = 0);
    ~showhouse();

private:
    Ui::showhouse *ui;
};

#endif // SHOWHOUSE_H
