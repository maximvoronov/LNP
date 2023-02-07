#include "lnprwin.h"

#include <QApplication>
#include <QPushButton>
#include <QSettings>
#include <QRect>
#include <QScreen>
#include <iostream>

void writeSettingsApp(QString group, QString value)
{
    QSettings settings;
    settings.beginGroup(group);
    settings.setDefaultFormat(QSettings::IniFormat);
    settings.setValue(group, value);
    settings.sync();
    settings.endGroup();
}

void readSettingsApp()
{

}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screen_geometry = screen->geometry();
    int screen_height = screen_geometry.height();
    int screen_width = screen_geometry.width();

    LNPRWin w;
    //w.setWindowState(Qt::WindowFullScreen);
    //QFile *style_desc = new QFile(":/style/styles.qss");
    //style_desc->open(QFile::ReadOnly);
    //QString cssfile = QLatin1String(style_desc->readAll());
//    a.setStyleSheet("cssfile");
    writeSettingsApp("Application", a.applicationName());
    writeSettingsApp("MainWindow/WindowWidth", QString::number(screen_height,10));
    writeSettingsApp("MainWindow/WindowHeight", QString::number(screen_width,10));

    w.setWindowFlag(Qt::FramelessWindowHint);
    w.show();

    return a.exec();
}



