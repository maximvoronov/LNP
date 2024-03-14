#include <QApplication>
#include <QPushButton>
#include <QSettings>
#include <QRect>
#include <QScreen>
#include <iostream>
#include <QTextCodec>
#include <QDate>
#include <QTime>
#include <exception.h>
#include <Forms/lnprwin.h>
#include <Forms/equipmentwindow.h>
#include <Forms/passwordwindow.h>

//class LNPRWin;
//class EquipmentWindow;
void writeSettings(QSettings* settings, QString group, QString value)
{
    settings->beginGroup(group);
    settings->setValue(group, value);
    settings->endGroup();
    settings->sync();
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Q_INIT_RESOURCE(res);
    static QSettings *settings = new QSettings();
    try {
        settings->setObjectName(QString("system.ini"));
        settings->setDefaultFormat(QSettings::IniFormat);
    } catch (Exception::ErrorReadDataException e) {
        e.raise();
    }
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screen_geometry = screen->geometry();
    int screen_height = screen_geometry.height();
    int screen_width = screen_geometry.width();
    QDate date = QDate::currentDate();
    QTime time = QTime::currentTime();

    writeSettings(settings,"Application", a.applicationName());
    writeSettings(settings,"Data", date.toString());
    writeSettings(settings, "Time", time.toString());
    writeSettings(settings, "DisplayName", a.applicationDisplayName());
    writeSettings(settings, "Height", QString::number(screen_height, 10));
    writeSettings(settings, "Width", QString::number(screen_width, 10));

    QTextCodec *codec = QTextCodec::codecForName("UTF-8");
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));
    QTextCodec::setCodecForLocale(codec);

    PasswordWindow *pw = nullptr;
    pw = new PasswordWindow;
    pw->show();

    /*
    if(pw->l_password->text().toInt() == 0000)
    {
        LNPRWin w;
        w.setWindowFlag(Qt::FramelessWindowHint);
        QApplication::setQuitOnLastWindowClosed(false);
        w.show();
    }
    */
    //pw->show();
    return a.exec();
}



