#ifndef DELOWNER_H
#define DELOWNER_H

#include <QDialog>

namespace Ui {
class delowner;
}

class delowner : public QDialog
{
    Q_OBJECT

public:
    explicit delowner(QWidget *parent = 0);
    ~delowner();

private slots:
    void on_pbOK_clicked();

    void on_pbCancle_clicked();

private:
    Ui::delowner *ui;
};

#endif // DELOWNER_H
