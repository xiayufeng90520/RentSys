#ifndef DATABASECONNECTION_H
#define DATABASECONNECTION_H

#include <QtSql/QSqlDatabase>

class databaseconnection
{
public:
    databaseconnection();
    static QSqlDatabase db;
    static bool Open();
    static bool Close();

};

#endif // DATABASECONNECTION_H
