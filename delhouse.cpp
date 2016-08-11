#include "delhouse.h"
#include "ui_delhouse.h"

delhouse::delhouse(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::delhouse)
{
    ui->setupUi(this);
}

delhouse::~delhouse()
{
    delete ui;
}

void delhouse::on_pbOK_clicked()
{

}

void delhouse::on_pbCancle_clicked()
{

}
