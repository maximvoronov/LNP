#ifndef SYSTEMTRAY_H
#define SYSTEMTRAY_H
#include <QMenu>
#include <QLabel>
#include <QSystemTrayIcon>
#include <QAction>

class SystemTray : public QLabel
{
    Q_OBJECT
public:
    SystemTray(QWidget* pwgt = nullptr);
public slots:
    void slotShowHide();
    void slotShowMessage();
    void slotChangeIcon();
protected:
    virtual void closeEvent(QCloseEvent*);
private:
    QSystemTrayIcon* m_ptrayIcon = nullptr;
    QMenu* m_ptrayIconMenu = nullptr;
    bool m_bIconSwitcher;
    QAction *pactShowHide = nullptr, *pactShowMessage = nullptr, *pactChangeIcon = nullptr, *pactQuit = nullptr;
};

#endif // SYSTEMTRAY_H
