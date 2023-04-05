#ifndef DIAGNOSTICWINDOW_H
#define DIAGNOSTICWINDOW_H

#include <QWidget>
#include <QImage>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QStackedWidget>

class DiagnosticWindow : public QStackedWidget
{
    Q_OBJECT
public:
    explicit DiagnosticWindow(QWidget *parent = nullptr);
signals:
    private:
    QImage *img;
    QHBoxLayout hbox;
};

#endif // DIAGNOSTICWINDOW_H
