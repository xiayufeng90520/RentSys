// 登录窗口类

#include "login.h"
#include "ui_login.h"
#include "mainwindow.h"
#include "databaseconnection.h"
#include <QSqlQuery>
#include <QMessageBox>

login::login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);

    ui->leUserPwd->setEchoMode(QLineEdit::Password);
    ui->leUserName->setText("");
}

login::~login()
{
    delete ui;
}

void login::on_pbLogin_clicked()
{
    bool success =false;

    if( !databaseconnection::Open() ){
        QMessageBox::about(this, "Message", "DataBase Connection Failed");
        return ;
    }
    else {
        QString userName = ui->leUserName->text().trimmed();
        QString userPwd = ui->leUserPwd->text().trimmed();

        if ( userName.isEmpty() || userPwd.isEmpty() ) {
            QMessageBox::about(this, "Message", "Please Input Name Or PassWord");
            return ;
        }
        else {
            QSqlQuery query;
            if ( query.exec("select * from login") ) {
                while( query.next() ) {
                    if( userName == query.value(1).toString() && userPwd == query.value(2).toString() ) {
                        success = true;
                        databaseconnection::Close();
                        break;
                    }
                }

                if( success == true) {
                    MainWindow* mw = new MainWindow();
                    mw->show();
                    this->hide();
                }
                else {
                    QMessageBox::about(this, "Message", "Login Failed, Please Cheack Nmae Or PassWord Again");
                    return ;
                }
            }
        }
    }

}

void login::on_pushButton_clicked()
{
    this->close();
}


