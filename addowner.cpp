#include "addowner.h"
#include "ui_addowner.h"
#include <QSql>
#include <QSqlQuery>
#include <QMessageBox>
#include <QDebug>
#include "databaseconnection.h"

addowner::addowner(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addowner)
{
    ui->setupUi(this);
}

addowner::~addowner()
{
    delete ui;
}

void addowner::on_pbOK_clicked()
{
    if( ui->leID->text().trimmed() == "" ||
            ui->leName->text().trimmed() == "" ||
            ui->leContact->text().trimmed() == "" ||
            ui->leContract->text().trimmed() == "" ||
            ui->lePrice->text().trimmed() == "" ||
            ui->leRemark->text().trimmed() == "" ){
        QMessageBox::about(this, "Message", "Please Cheack Input");
        return ;
    }
    else {
        QString id = ui->leID->text().trimmed();
        QString name = ui->leName->text().trimmed();
        QString contact = ui->leContact->text().trimmed();
        QString contract = ui->leContract->text().trimmed();
        QString price = ui->lePrice->text().trimmed();
        QString remark = ui->leRemark->text().trimmed();

        if( !databaseconnection::Open() ){
            QMessageBox::about(this, "Message", "DataBase Connection Failed");
            return ;
        }
        else {
            QSqlQuery query;

            query.exec("select count(*) from house.renter where RenterID='"+ id + "'");
            int reterNumber = 0x0;
            if ( query.next() ) {
                reterNumber = query.value(0).toInt();
            }

            if ( reterNumber != 0 ) {
                 QMessageBox::about(this, "Message", "Renter Existed");
                 QString maxNumber;
                 query.exec("select RenterID from house.renter order by RenterID desc");
                 if ( query.next() ) {
                     maxNumber = query.value(0).toString();
                 }
                 QMessageBox::about(this, "Message", "Max RenterID = "+ maxNumber);
                 databaseconnection::Close();
                 return ;
            }
            QString sql = "insert into house.renter values("+id+",'"+name+"','"+contact+"','"+contract+"',"+price+",'"+remark+"')";
            qDebug()<<sql<<endl;
            query.exec(sql);
            if ( query.isActive() ) {
                query.numRowsAffected();
                QMessageBox::about(this, "Message", "Add Success");
            }
            databaseconnection::Close();
            this->close();
        }
    }
}

void addowner::on_pbCancle_clicked()
{
    this->close();
}
