// 主窗体

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "owner.h"
#include "houserenter.h"
#include "searchhouse.h"
#include "searchrenter.h"
#include "showhouse.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pbOwnerInfo_clicked()
{
    owner* ow = new owner();
    ow->show();
}

void MainWindow::on_pbHouseInfo_clicked()
{
    houserenter* hr = new houserenter();
    hr->show();
}

void MainWindow::on_pbHouseSearch_clicked()
{
    searchhouse* sh = new searchhouse();
    sh->show();
}

void MainWindow::on_pbClientSearch_clicked()
{
    searchrenter* sr = new searchrenter();
    sr->show();
}

void MainWindow::on_pbQuit_clicked()
{
    this->close();
}
