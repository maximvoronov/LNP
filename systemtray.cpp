#include "systemtray.h"
#include <QtGui>
#include <QApplication>
#include <QMenu>
#include <QAction>
#include <QString>
#include <QSystemTrayIcon>


SystemTray::SystemTray(QWidget* pwgt /*=0*/): QLabel("<H1>Application Window</H1>",pwgt)
  ,m_bIconSwitcher(false)
{
    setWindowTitle("System Tray");
    setStyleSheet("background-radius: 30 30 30 30; border-size: 15px; border: solid;"
                  "border-width: 5px;"
                  "border-color: cadetblue; "
                  "border-radius: 30 30 30 30;"
                  "background: black");
    setFont(QFont("Arial", 12, Qt::white));
    setGeometry(1720,800,200,200);
    QAction* pactShowHide = new QAction("&Show/Hide Application Window", this);
    connect(pactShowHide,SIGNAL(triggered()),this, SLOT(slotShowHide()));
    QAction* pactShowMessage = new QAction("S&how Message", this);
    connect(pactShowMessage,SIGNAL(triggered()),this, SLOT(slotShowMessage()));
    QAction* pactChangeIcon = new QAction("&Change Icon", this);
    connect(pactChangeIcon,SIGNAL(triggered()),this, SLOT(slotChangeIcon()));
    QAction* pactQuit = new QAction("&Quit", this);
    connect(pactQuit, SIGNAL(triggered()), qApp, SLOT(quit() ));
    m_ptrayIconMenu = new QMenu(this);
    m_ptrayIconMenu->addAction(pactShowHide);
    m_ptrayIconMenu->addAction(pactShowMessage);
    m_ptrayIconMenu->addAction(pactChangeIcon);
    m_ptrayIconMenu->addAction(pactQuit);
    m_ptrayIcon = new QSystemTrayIcon(this);
    m_ptrayIcon->setContextMenu(m_ptrayIconMenu);
    m_ptrayIcon->setToolTip("System Tray");
    slotChangeIcon();
    m_ptrayIcon->show();
}

void SystemTray::closeEvent(QCloseEvent * pe)
{
    if (m_ptrayIcon->isVisible())
    {
        hide();
    }
}

void SystemTray::slotShowHide()
{
    setVisible(!isVisible());
}

void SystemTray::slotShowMessage()
{
    m_ptrayIcon->showMessage("For your information", "You have selected the" "\"Show Message!\" option",
                             QSystemTrayIcon::Information,3000);
}

void SystemTray::slotChangeIcon()
{
    m_bIconSwitcher = !m_bIconSwitcher;
    QString strPixName = m_bIconSwitcher ? ":/bearing.jpg"
                                         : ":/gear2.png";
    m_ptrayIcon->setIcon(QPixmap(strPixName));
}
