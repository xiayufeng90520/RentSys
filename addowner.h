#ifndef ADDOWNER_H
#define ADDOWNER_H

#include <QDialog>

namespace Ui {
class addowner;
}

class addowner : public QDialog
{
    Q_OBJECT

public:
    explicit addowner(QWidget *parent = 0);
    ~addowner();

private slots:
    void on_pbOK_clicked();

    void on_pbCancle_clicked();

private:
    Ui::addowner *ui;
};

#endif // ADDOWNER_H
