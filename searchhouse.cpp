#include "searchhouse.h"
#include "ui_searchhouse.h"

searchhouse::searchhouse(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::searchhouse)
{
    ui->setupUi(this);
}

searchhouse::~searchhouse()
{
    delete ui;
}

void searchhouse::on_pbSearch_clicked()
{

}
