#ifndef SEARCHHOUSE_H
#define SEARCHHOUSE_H

#include <QDialog>

namespace Ui {
class searchhouse;
}

class searchhouse : public QDialog
{
    Q_OBJECT

public:
    explicit searchhouse(QWidget *parent = 0);
    ~searchhouse();

private:
    Ui::searchhouse *ui;
};

#endif // SEARCHHOUSE_H
