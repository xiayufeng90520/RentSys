#include "delowner.h"
#include "ui_delowner.h"
#include <QSql>
#include <QSqlQuery>
#include <QMessageBox>
#include <QDebug>
#include "databaseconnection.h"

delowner::delowner(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::delowner)
{
    ui->setupUi(this);
}

delowner::~delowner()
{
    delete ui;
}

void delowner::on_pbOK_clicked()
{
    if( ui->leID->text().trimmed() == "" ) {
        QMessageBox::about(this, "Message", "Please Cheack Input");
        return ;
    }
    QString id = ui->leID->text().trimmed();


    if( !databaseconnection::Open() ){
        QMessageBox::about(this, "Message", "DataBase Connection Failed");
        return ;
    }
    else {
        QSqlQuery query;

        query.exec("select count(*) from house.renter where RenterID='"+ id + "'");
        if ( query.next() ) {
            if( query.value(0).toInt() == 0 ){
                QMessageBox::about(this, "Message", "No This ID");
                return ;
            }
            else {
                query.exec("delete from house.renter where RenterID='"+ id + "'");
                QMessageBox::about(this, "Message", "Delete Success");
                databaseconnection::Close();
                this->close();
            }
        }
    }
}

void delowner::on_pbCancle_clicked()
{
    this->close();
}
