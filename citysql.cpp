#include "citysql.h"
#include <QMessageBox>
#include <QCoreApplication>
#include<QSqlQuery>
#include<QtDebug>
citysql::citysql(QObject *parent)
    : QObject{parent}
{
    init();
    getPageCity(2,3);
 /*   CityInfo s;
    s.name="南京";
    for(int i=0;i<10;i++)
    {
        addCity(s);

    }
    getcityCnt();*/
    //q.exec("INSERT INTO CITY (num,name,coordx,coordy) VALUES (1001,'河南',100,120);");
}
void citysql::init()
{
    if(QSqlDatabase::drivers().isEmpty()){
        qDebug()<<"No database drivers found";
    }
    m_db = QSqlDatabase::addDatabase("QSQLITE");
#if 0
    auto str = QCoreApplication::applicationDirPath()+"data.db";
    qDebug()<<str;
#endif

    m_db.setDatabaseName("D:\\data.db");
    if(!m_db.open())
        qDebug()<<"db not open";
}
quint32 citysql::getcityCnt()
    {
        QSqlQuery sql(m_db);
        sql.exec("select count(name) from CITY;");
        quint32 uiCnt = 0;
        while(sql.next())
        {
            uiCnt =sql.value(0).toUInt();

        }
        return uiCnt;


    }
    QList<CityInfo> citysql::getPageCity(quint32 page,quint32 uiCnt)
    {
        QList<CityInfo> l;
        QSqlQuery sql(m_db);
        QString strsql =QString("select * from CITY order by id limit %1 offset %2").
                         arg(uiCnt).arg(page*uiCnt);
        sql.exec("strsql");
        CityInfo info;
        while(sql.next())
        {
            info.num =sql.value(0).toUInt();
            info.name =sql.value(1).toString();
            info.coordx =sql.value(2).toString();
            info.coordy =sql.value(3).toString();
            l.push_back(info);

        }

        return l;
    }
    bool citysql::addCity(CityInfo info)
    {
        QSqlQuery sql(m_db);
        QString strSql=QString("insert into CITY values (null,'%2','%3','%4');").
                         arg(info.name).
                         arg(info.coordx).
                         arg(info.coordy);
            qDebug()<<sql.exec(strSql);
    }



