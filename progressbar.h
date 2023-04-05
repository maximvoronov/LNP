#ifndef PROGRESSBAR_H
#define PROGRESSBAR_H
#include <QTimer>
#include <QPainter>
#include <QPaintEvent>

class ProgressBar
{
public:
    ProgressBar(QTimer *timer, qint32 counts);
    bool runProgress(qint32 time);
protected:
    void paintEvent(QPaintEvent *pe);
private:
    QTimer *timer;
    qint32 counts;
};

#endif // PROGRESSBAR_H
