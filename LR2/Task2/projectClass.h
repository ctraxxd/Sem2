#ifndef TASK2_PROJECTCLASS_H
#define TASK2_PROJECTCLASS_H


#include <QtWidgets>

class projectClass {
private:
    QString projName;
    QString task;
    QString pmName;
    QString employeeName;
    QDate startDate;
    QDate banDate;
    QDate endDate;

public:
    projectClass() = default;

    QString getProjName();
    void setProjName(QString info);

    QString getTask();
    void setTask(QString info);

    QString getPmName();
    void setPmName(QString info);

    QString getEmployeeName();
    void setEmployeeName(QString info);

    QDate getStartDate();
    void setStartDate(QDate info);

    QDate getBanDate();
    void setBanDate(QDate info);

    QDate getEndDate();
    void setEndDate(QDate info);

    bool isEmployeeBanned();

    QString getAllInfo();

};


#endif //TASK2_PROJECTCLASS_H
