#ifndef ADDNEWHOUSE_H
#define ADDNEWHOUSE_H

#include <QDialog>

namespace Ui {
class addnewhouse;
}

class addnewhouse : public QDialog
{
    Q_OBJECT

public:
    explicit addnewhouse(QWidget *parent = 0);
    ~addnewhouse();

private slots:
    void on_pbOK_clicked();

    void on_pbCancle_clicked();

private:
    Ui::addnewhouse *ui;
};

#endif // ADDNEWHOUSE_H
