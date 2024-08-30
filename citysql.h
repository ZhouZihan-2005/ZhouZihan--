#ifndef CITYSQL_H
#define CITYSQL_H
#include <QSqlDataBase>
#include "qdebug.h"
#include <QObject>
struct CityInfo
{
    int num;
    QString name;
    QString coordx;
    QString coordy;
};
struct PlaneInfo
{
    int id;
    QString name;
    QString weight;
    QString coordx;
    QString coordy;
};
class citysql : public QObject
{
    Q_OBJECT
public:
    explicit citysql(QObject *parent = nullptr);
    void init();

    //查询所有城市数量
    quint32 getcityCnt();
    //查询第几页城市数据
    QList<CityInfo> getPageCity(quint32 page,quint32 uiCnt);
    //增加城市
    bool addCity(CityInfo);
    //删除城市
    bool delCity(int num);
    //清空城市表
    void clearCityTable();
    //修改城市信息
    void UpdateCityInfo(CityInfo info);
    //查询所有飞机
    QList<PlaneInfo> getAllPlane();
    //查询飞机是否存在
    bool isExit(QString strPlane);
    //修改飞机权限
    void changePlaneAut(QString str);
    //添加单个飞机
    void AddPlane(PlaneInfo info);
    //删除单个飞机
    void delPlane(QString strPlaneName);


signals:
private:
    QSqlDatabase m_db;

};

#endif // CITYSQL_H
