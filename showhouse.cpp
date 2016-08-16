#include "showhouse.h"
#include "ui_showhouse.h"

showhouse::showhouse(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::showhouse)
{
    ui->setupUi(this);
}

showhouse::~showhouse()
{
    delete ui;
}

void showhouse::on_pushButton_2_clicked()
{

}

void showhouse::on_pushButton_3_clicked()
{

}
