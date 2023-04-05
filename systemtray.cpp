#include "systemtray.h"
#include <QtGui>
#include <QApplication>
#include <QMenu>
#include <QAction>
#include <QString>
#include <QSystemTrayIcon>

SystemTray::SystemTray(QWidget* pwgt): QLabel("<H1>Application Window</H1>", pwgt)
  ,m_bIconSwitcher(false)
{
    setWindowTitle("System Tray");
    setStyleSheet("background-radius: 30 30 30 30; border-size: 15px; border: solid;"
                  "border-width: 5px;"
                  "border-color: cadetblue; "
                  "border-radius: 30 30 30 30;"
                  "background: black");
    //setFont(QFont("Arial", 25, Qt::white));
    setGeometry(1720, 800, 200, 200);
    pactShowHide = new QAction("&Перейти/Свернуть диспечерское управление сбора данных", this);
    pactShowHide->setFont(QFont("Arial", 25, Qt::white));
    connect(pactShowHide,SIGNAL(triggered()), this, SLOT(slotShowHide()));
    pactShowMessage = new QAction(QString("Текущее состояние: "), this);
    pactShowMessage->setFont(QFont("Arial", 25, Qt::red));
    connect(pactShowMessage,SIGNAL(triggered()), this, SLOT(slotShowMessage()));
    pactChangeIcon = new QAction("&О системе", this);
    pactChangeIcon->setFont(QFont("Arial", 25, Qt::red));

    connect(pactChangeIcon,SIGNAL(triggered()), this, SLOT(slotChangeIcon()));
    pactQuit = new QAction("&Закрыть систему", this);
    pactQuit->setFont(QFont("Arial", 25, Qt::red));

    connect(pactQuit, SIGNAL(triggered()), this, SLOT(quit()));
    m_ptrayIconMenu = new QMenu(this);
    m_ptrayIconMenu->addAction(pactShowHide);
    m_ptrayIconMenu->addAction(pactShowMessage);
    m_ptrayIconMenu->addAction(pactChangeIcon);
    m_ptrayIconMenu->addAction(pactQuit);
    m_ptrayIcon = new QSystemTrayIcon(this);
    m_ptrayIcon->setContextMenu(m_ptrayIconMenu);
    //m_ptrayIcon->setToolTip(QString(""));
    slotChangeIcon();
    m_ptrayIcon->show();
}

void SystemTray::closeEvent(QCloseEvent * pe)
{
    if (m_ptrayIcon->isVisible())
    {
        hide();
    }
    else{
        pe->accept();
    }
}

void SystemTray::slotShowHide()
{
    setVisible(!isVisible());
}

void SystemTray::slotShowMessage()
{
    m_ptrayIcon->showMessage("For your information", "You have selected the" "\"Show Message!\" option",
                             QSystemTrayIcon::Information, 3000);   
}

void SystemTray::slotChangeIcon()
{
    m_bIconSwitcher = !m_bIconSwitcher;
    QString strPixName = m_bIconSwitcher ? ":/resources/bearing.jpg"
                                         : ":/resources/gear2.png";
    m_ptrayIcon->setIcon(QPixmap(strPixName));
}
