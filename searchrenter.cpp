#include "searchrenter.h"
#include "ui_searchrenter.h"

searchrenter::searchrenter(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::searchrenter)
{
    ui->setupUi(this);
}

searchrenter::~searchrenter()
{
    delete ui;
}
