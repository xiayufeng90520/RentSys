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

private:
    Ui::houserenter *ui;
};

#endif // HOUSERENTER_H
