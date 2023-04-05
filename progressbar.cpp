#include "progressbar.h"
#include <QPainter>

ProgressBar::ProgressBar(QTimer *timer, qint32 counts)
{
    timer = new QTimer();
    counts = 0;
}

void ProgressBar::paintEvent(QPaintEvent *pe){
    QPainter painter;

    painter.end();

}
