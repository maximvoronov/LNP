#ifndef TECHPROCESS_H
#define TECHPROCESS_H

#include <QThread>
#include <QThreadPool>
#include <QThreadStorage>
#include <QThreadStorageData>
#include <QSqlDatabase>
#include <QTime>

class TechProcess
{
public:
    TechProcess();
    ~TechProcess();
    bool setTimeProcess(int sec);
    bool saveToDB();
    bool animateUI(QWidget *widget = nullptr);
    bool getTechProcessData(QWidget *wgt = nullptr);
protected:
    bool checkBrush();
private:
    QThread *thread = nullptr;
    qint32 step_counter;
    QString text, database_name;
    QTime process_time;
};

#endif // TECHPROCESS_H
