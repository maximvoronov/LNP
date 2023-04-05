#ifndef TECHPROCESS_H
#define TECHPROCESS_H

#include <QThread>
#include <QThreadPool>
#include <QThreadStorage>
#include <QThreadStorageData>
#include <QSqlDatabase>

class TechProcess
{
public:
    TechProcess();
    ~TechProcess();

    bool setStateProcess(int sec);
    bool saveToDB();
    bool animateUI(QWidget *widget);
protected:
    bool checkBrush();
private:
    QThread *thread = nullptr;
    qint32 step_counter;
    QString text, database_name;

};

#endif // TECHPROCESS_H
