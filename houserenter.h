#ifndef HOUSERENTER_H
#define HOUSERENTER_H

#include <QDialog>

namespace Ui {
class houserenter;
}

class houserenter : public QDialog
{
    Q_OBJECT

public:
    explicit houserenter(QWidget *parent = 0);
    ~houserenter();

private slots:
    void on_pbSave_clicked();

    void on_pbCancle_clicked();

private:
    Ui::houserenter *ui;
};

#endif // HOUSERENTER_H
