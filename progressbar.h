#ifndef PROGRESSBAR_H
#define PROGRESSBAR_H

#include <QTimer>

class ProgressBar
{
public:
    ProgressBar(QTimer *timer, qint32 counts);
    bool runProgress(qint32 time);
private:
    QTimer *timer;
    qint32 counts;
};

#endif // PROGRESSBAR_H
