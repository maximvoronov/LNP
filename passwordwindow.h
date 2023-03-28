#ifndef PASSWORDWINDOW_H
#define PASSWORDWINDOW_H

#include <QComboBox>
#include <QWidget>
#include <QPushButton>
#include <QFrame>
#include <QLineEdit>
#include <lnprwin.h>
#include <QApplication>

class PasswordWindow : public QWidget
{
    Q_OBJECT
public:
    PasswordWindow(QWidget *parent = nullptr);
    ~PasswordWindow();
public slots:
    void onClose();
    void onStart();
public:
    QLineEdit *l_password = nullptr;
private:
    QFrame *frame = nullptr;
    QComboBox *combo = nullptr;
    QPushButton *pb_close = nullptr, *pb_run = nullptr;
};
#endif // PASSWORDWINDOW_H
