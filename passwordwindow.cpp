#include "passwordwindow.h"

PasswordWindow::PasswordWindow(QWidget *parent)
    : QWidget(parent)
{
    setWindowState(Qt::WindowActive);
    setWindowFlags(Qt::FramelessWindowHint);
    setGeometry(QRect(530,240,530,280));
    setFixedSize(QSize(530,280));
    setWindowIcon(QIcon(":/resources/chip.png"));
    QApplication::setQuitOnLastWindowClosed(true);
    frame = new QFrame(this);
    frame->setGeometry(QRect(20,30,490,230));

    combo = new QComboBox(this);
    combo->addItem(QString("Оператор"));
    combo->addItem(QString("Технолог"));
    combo->addItem(QString("Администратор"));

    pb_close = new QPushButton(this);
    pb_close->setGeometry(QRect(60,190,150,60));
    pb_close->setFont(QFont("Ariel",14,QFont::Bold));
    pb_close->setStyleSheet("background: black; text-align: center; color: white");
    pb_close->setText(QString("Закрыть"));

    pb_run = new QPushButton(this);
    pb_run->setGeometry(QRect(300,190,150,60));
    pb_run->setStyleSheet("background: black; text-align: center; color: white");
    pb_run->setText(QString("Ввод"));
    pb_run->setFont(QFont("Ariel",14,QFont::Bold));

    combo->setGeometry(QRect(30,40,470,40));
    combo->setStyleSheet("background: black; text-align: center; color: cadetblue");
    combo->setFont(QFont("Ariel",16,QFont::Bold));

    l_password = new QLineEdit(this);
    l_password->setAlignment(Qt::AlignHCenter);
    l_password->setStyleSheet("background: black; text-align: center; color: cadetblue");
    l_password->setFont(QFont("Ariel",16,QFont::Bold));
    l_password->setGeometry(QRect(30,120,470,40));
    l_password->setEchoMode(QLineEdit::Password);

    setStyleSheet("background-radius: 35 35 35 35; border-size: 55px; "
                                  "border: solid; border-width: 5px; border-color: cadetblue;"
                                  "border-radius: 15 15 15 15; background: black; text-align: center");
    popup = new PopUp(this);
    connect(pb_close, SIGNAL(clicked()), SLOT(onClose()));
    connect(pb_run,SIGNAL(clicked()),SLOT(onStart()));
}

void PasswordWindow::onClose(){
    close();
}

void PasswordWindow::onStart(){
    if((combo->currentText() == "Оператор") && l_password->text().toInt() == 0000){
    LNPRWin *w = new LNPRWin;
    popup->setPopupText(QString("Пароль введён верно!"));
    popup->show();
    QApplication::setQuitOnLastWindowClosed(true);
    w->show();
    /*?*/
    this->hide();
    }
    else{
        popup->setPopupText(QString("Пароль введён неверно!"));
        popup->show();
        close();
    }
}

PasswordWindow::~PasswordWindow()
{
}

