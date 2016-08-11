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

private slots:
    void on_pbOK_clicked();

    void on_pbCancle_clicked();

private:
    Ui::delhouse *ui;
};

#endif // DELHOUSE_H
