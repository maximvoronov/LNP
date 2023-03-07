#include "progressbar.h"

ProgressBar::ProgressBar(QTimer *timer, qint32 counts)
{
    timer = new QTimer();
    counts = 0;
}

