#include "addnewhouse.h"
#include "ui_addnewhouse.h"

addnewhouse::addnewhouse(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addnewhouse)
{
    ui->setupUi(this);
}

addnewhouse::~addnewhouse()
{
    delete ui;
}

void addnewhouse::on_pbOK_clicked()
{

}

void addnewhouse::on_pbCancle_clicked()
{

}
