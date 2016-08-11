#ifndef DELHOUSE_H
#define DELHOUSE_H

#include <QDialog>

namespace Ui {
class delhouse;
}

class delhouse : public QDialog
{
    Q_OBJECT

public:
    explicit delhouse(QWidget *parent = 0);
    ~delhouse();

private:
    Ui::delhouse *ui;
};

#endif // DELHOUSE_H
