#include "databaseconnection.h"
#include <QtSql/QSqlQuery>

QSqlDatabase databaseconnection::db = QSqlDatabase::addDatabase("QMYSQL");

databaseconnection::databaseconnection()
{

}

bool databaseconnection::Open()
{
    db.setHostName(QLatin1String("localhost"));
    db.setUserName("root");
    db.setPassword("101010");
    db.setDatabaseName("house");

    if(!db.open()) {
        return false;
    }

    return true;
}

bool databaseconnection::Close()
{
    db.close();
}
