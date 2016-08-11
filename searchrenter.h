#ifndef SEARCHRENTER_H
#define SEARCHRENTER_H

#include <QDialog>

namespace Ui {
class searchrenter;
}

class searchrenter : public QDialog
{
    Q_OBJECT

public:
    explicit searchrenter(QWidget *parent = 0);
    ~searchrenter();

private:
    Ui::searchrenter *ui;
};

#endif // SEARCHRENTER_H
