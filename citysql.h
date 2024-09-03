#ifndef CITYSQL_H
#define CITYSQL_H
#include <QSqlDataBase>
#include "qdebug.h"
#include <QObject>
struct CityInfo
{
    int id;
    int num;
    QString name;
    quint16 coordx;
    quint16 coordy;
};
struct UserInfo
{
    QString username;
    QString password;
    QString auth;
};

struct PlaneInfo
{
    int num;
    QString name;
    QString weight;
    quint16 coordx;
    quint16 coordy;
};
class citysql : public QObject
{
    Q_OBJECT
public:
    explicit citysql(QObject *parent = nullptr);
    void init();

    //查询所有城市数量
    quint32 getcityCnt();
    //查询第几页城市数据,页数从零开始
    QList<CityInfo> getPageCity(quint32 page,quint32 uiCnt);
    //增加城市
    bool addCity(CityInfo);
    //删除城市
    bool delCity(int num);
    //清空城市表
    bool clearCityTable();
    //修改城市信息
    bool UpdateCityInfo(CityInfo info);
    //查询所有用户
    QList<UserInfo> getAllUsers();
    //查询用户名是否存在
    bool isExist(QString strUser);
    //更新用户信息
    bool updateUser(UserInfo info);
    //添加单个用户
    bool AddUser(UserInfo info);
    //删除单个用户
    bool delUser(QString strUserName);
    //查询所有飞机数量
     quint32 getplaneCnt();
    //查询第几页飞机数据
    QList<CityInfo> getPagePlane(quint32 page,quint32 uiCnt);
    //增加飞机
    bool addPlane(PlaneInfo);
    //删除城市
    bool delPlane(int num);
    //清空城市表
    void clearPlaneTable();
    //修改城市信息
    void UpdatePlaneInfo(PlaneInfo info);
    //查询所有飞机
    QList<PlaneInfo> getAllPlane();
    //保存城市信息至文件
    //从文件中读取城市信息
    //判断起飞飞机是否可以刹车
    //查询飞机雷达半径内所有城市信息



signals:
private:
    QSqlDatabase m_db;

};

#endif // CITYSQL_H
