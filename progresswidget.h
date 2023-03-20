#ifndef PROGRESSWIDGET_H
#define PROGRESSWIDGET_H

#include <QObject>
#include <QWidget>
#include <QProgressBar>
#include <QPainterPath>
#include <QRegion>

class ProgressWidget : public QProgressBar
{
public:
    ProgressWidget();
    void paintEvent(QPaintEvent *) override;
private:
    QPainterPath progress_path;
    QRegion region;
};

#endif // PROGRESSWIDGET_H
