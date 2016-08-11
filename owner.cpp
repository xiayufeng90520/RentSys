#include "owner.h"
#include "ui_owner.h"
#include <QSql>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QMessageBox>
#include "databaseconnection.h"
#include "addowner.h"
#include "delowner.h"

owner::owner(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::owner)
{
    ui->setupUi(this);
}

owner::~owner()
{
    delete ui;
}

void owner::on_pbShowAll_clicked()
{
    if( !databaseconnection::Open() ){
        QMessageBox::about(this, "Message", "DataBase Connection Failed");
        return ;
    }
    else {
        QSqlQueryModel* model = new QSqlQueryModel();
        model->setQuery("select * from house.renter");

        model->setHeaderData(0, Qt::Horizontal, tr("房主编号"));
        model->setHeaderData(1, Qt::Horizontal, tr("房主姓名"));
        model->setHeaderData(2, Qt::Horizontal, tr("联系方式"));
        model->setHeaderData(3, Qt::Horizontal, tr("合同编号"));
        model->setHeaderData(4, Qt::Horizontal, tr("价格"));
        model->setHeaderData(5, Qt::Horizontal, tr("备注信息"));

        ui->tableView->setModel(model);
        ui->tableView->show();
    }
}

void owner::on_pbSerachOwner_clicked()
{
    QString renterID = ui->leSearchOwner->text().trimmed();

    if( !databaseconnection::Open() ){
        QMessageBox::about(this, "Message", "DataBase Connection Failed");
        return ;
    }
    else {
        QSqlQueryModel* model = new QSqlQueryModel();
        model->setQuery("select * from house.renter where RenterID='"+renterID+"'");

        model->setHeaderData(0, Qt::Horizontal, tr("房主编号"));
        model->setHeaderData(1, Qt::Horizontal, tr("房主姓名"));
        model->setHeaderData(2, Qt::Horizontal, tr("联系方式"));
        model->setHeaderData(3, Qt::Horizontal, tr("合同编号"));
        model->setHeaderData(4, Qt::Horizontal, tr("价格"));
        model->setHeaderData(5, Qt::Horizontal, tr("备注信息"));

        ui->tableView->setModel(model);
        ui->tableView->show();
    }
}

void owner::on_pbAdd_clicked()
{
    addowner* ao = new addowner();
    ao->show();
}

void owner::on_pbDel_clicked()
{
    delowner* dow = new delowner();
    dow->show();
}

void owner::on_pbQuit_clicked()
{
    this->close();
}
