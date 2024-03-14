#ifndef PASSWORDWINDOW_H
#define PASSWORDWINDOW_H

#include <QComboBox>
#include <QWidget>
#include <QPushButton>
#include <QFrame>
#include <QLineEdit>
#include <Forms/lnprwin.h>
#include <QApplication>
#include <popup.h>

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
    PopUp *popup = nullptr;
};
#endif // PASSWORDWINDOW_H
