#include "houserenter.h"
#include "ui_houserenter.h"

houserenter::houserenter(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::houserenter)
{
    ui->setupUi(this);
}

houserenter::~houserenter()
{
    delete ui;
}

void houserenter::on_pbSave_clicked()
{

}

void houserenter::on_pbCancle_clicked()
{

}
