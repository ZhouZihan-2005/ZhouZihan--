#include "citysql.h"
#include <QMessageBox>
#include <QCoreApplication>
#include<QSqlQuery>
#include<QtDebug>
#include <QSqlError>


citysql::citysql(QObject *parent)
    : QObject{parent}
{
    init();
    //CityInfo s;
   // s.num=167;
    //s.name="江西";
    //UpdateCityInfo(s);
    //for(int i=0;i<10;i++)
    //{
    //  addCity(s);
    //}
    //q.exec("INSERT INTO CITY VALUES(NULL,1001,'南京',23,56);");
    UserInfo info;
    info.username = "xiaoyu";
    info.password = "123456";
    info.auth = "admin";
    AddUser(info);
    auto l =getAllUsers();
    qDebug()<<isExist("xiaoyu");
    //info.password="666";
    //updateUser(info);
    //delUser("xiaoyu");
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
        sql.exec("select count(num) from CITY;");
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
        QString strsql =QString("select * from CITY order by num limit %1 offset %2").
                         arg(uiCnt).arg(page*uiCnt);
        sql.exec(strsql);
        CityInfo info;
        while(sql.next())
        {
            info.id = sql.value(0).toUInt();
            info.num =sql.value(1).toUInt();
            info.name =sql.value(2).toString();
            info.coordx =sql.value(3).toUInt();
            info.coordy =sql.value(4).toUInt();
            l.push_back(info);

        }

        return l;
    }
    bool citysql::addCity(CityInfo info)
    {
        QSqlQuery sql(m_db);
        QString strSql=QString("insert into CITY values (null,%1,'%2',%3,%4)").
                         arg(info.num).
                         arg(info.name).
                         arg(info.coordx).
                         arg(info.coordy);
            return sql.exec(strSql);
    }
    bool citysql::delCity(int num)
    {
        QSqlQuery sql(m_db);
        return sql.exec(QString("delete from city where num = %1").arg(num));
    }
    bool citysql::clearCityTable()
    {
        QSqlQuery sql(m_db);
        return sql.exec("delete from city");
    }
    bool citysql::UpdateCityInfo(CityInfo info)
    {
        QSqlQuery sql(m_db);
        QString strSql=QString("update city set id=%1 ,name = '%2', coordx=%3 ,coordy=%4 where num=%5").
                         arg(info.id).
                         arg(info.name).
                         arg(info.coordx).
                         arg(info.coordy).arg(info.num);
        bool ret = sql.exec(strSql);
        QSqlError e = sql.lastError();
        if(e.isValid())
        {
            qDebug()<<e.text();
        }
        return ret;
    }
    QList<UserInfo> citysql::getAllUsers()
    {
        QList<UserInfo> l;
        QSqlQuery sql(m_db);
        sql.exec("select * from username");
        UserInfo info;
        while(sql.next())
        {
            info.username = sql.value(0).toString();
            info.password =sql.value(1).toString();
            info.auth =sql.value(2).toString();
            l.push_back(info);

        }

        return l;
    }
    bool citysql::isExist(QString strUser)
    {
        QSqlQuery sql(m_db);
        sql.exec(QString("select * from username where username='%1'").arg(strUser));
        return sql.next();
    }
    bool citysql::updateUser(UserInfo info)
    {
        QSqlQuery sql(m_db);
        QString strSql=QString("update username set password = '%1', auth='%2' where username='%3'").
                         arg(info.password).
                         arg(info.auth).
                         arg(info.username);
        bool ret = sql.exec(strSql);
        QSqlError e = sql.lastError();
        if(e.isValid())
        {
            qDebug()<<e.text();
        }
        return ret;
    }
    bool citysql::AddUser(UserInfo info)
    {
        QSqlQuery sql(m_db);
        QString strSql=QString("insert into username values('%1','%2','%3')").
                         arg(info.username).
                         arg(info.password).
                         arg(info.auth);
        return sql.exec(strSql);
    }
    bool citysql::delUser(QString strUserName)
    {
        QSqlQuery sql(m_db);
        return sql.exec(QString("delete from username where username='%1'").arg(strUserName));
    }



