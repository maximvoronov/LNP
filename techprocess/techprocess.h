#ifndef TECHPROCESS_H
#define TECHPROCESS_H

#include <QThread>
#include <QThreadPool>
#include <QThreadStorage>
#include <QThreadStorageData>

class TechProcess
{
    public:
    TechProcess();
    bool checkProcessStatus();
private:
    QThread *thread = nullptr;
};

#endif // TECHPROCESS_H
