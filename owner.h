#ifndef OWNER_H
#define OWNER_H

#include <QDialog>

namespace Ui {
class owner;
}

class owner : public QDialog
{
    Q_OBJECT

public:
    explicit owner(QWidget *parent = 0);
    ~owner();

private slots:
    void on_pbShowAll_clicked();

    void on_pbSerachOwner_clicked();

    void on_pbAdd_clicked();

    void on_pbDel_clicked();

    void on_pbQuit_clicked();

private:
    Ui::owner *ui;
};

#endif // OWNER_H
