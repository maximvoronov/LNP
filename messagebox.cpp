#include "messagebox.h"

MessageBox::MessageBox(QWidget *parent) : QWidget(parent)
{
    if (parent != nullptr){
        widget = parent;
    }
    else{
        widget = this;
    }
    setWindowState(Qt::WindowActive);
    setWindowFlags(Qt::FramelessWindowHint);
    setGeometry(QRect(530,240,530,280));
    setFixedSize(QSize(530,280));
    frame = new QFrame(this);
    frame->setGeometry(QRect(20,30,490,230));

    msg = new QLabel(this);
    msg->setGeometry(QRect(40,50,450,120));
    msg->setText(QString("Провести диагностику оборудования?"));
    msg->setStyleSheet("background: black; text-align: center; color: cadetblue");
    msg->setFont(QFont("Ariel",16,QFont::Bold));

    pb_no = new QPushButton(this);
    pb_no->setGeometry(QRect(60,190,150,60));
    pb_no->setFont(QFont("Ariel",14,QFont::Bold));
    pb_no->setStyleSheet("background: black; text-align: center; color: white");
    pb_no->setText(QString("Нет"));
    pb_yes = new QPushButton(this);
    pb_yes->setGeometry(QRect(300,190,150,60));
    pb_yes->setStyleSheet("background: black; text-align: center; color: white");
    pb_yes->setText(QString("Да"));
    pb_yes->setFont(QFont("Ariel",14,QFont::Bold));

    setStyleSheet("background-radius: 35 35 35 35; border-size: 5px; "
                                  "border: solid; border-width: 5px; border-color: cadetblue;"
                                  "border-radius: 15 15 15 15; background: black");
    animateRun(msg, AnimateUI::Label);
    connect(pb_no, SIGNAL(clicked()),SLOT(onClose()));
}

MessageBox::~MessageBox(){

}

void MessageBox::onClose(){
    close();
}
void MessageBox::animateRun(QWidget *widget, enum AnimateUI ui_widget){
    effect = new QGraphicsColorizeEffect(this);
    anim = new QPropertyAnimation(effect, "color");
    widget->setGraphicsEffect(effect);
    switch (ui_widget) {
    case AnimateUI::Button:
        anim->setStartValue(QColor(Qt::darkRed));
        //anim->setKeyValueAt(0.25f,QColor(Qt::cyan));
        anim->setKeyValueAt(0.55f,QColor(Qt::darkGray));
        anim->setEndValue(QColor(Qt::black));
        anim->setDuration(3000);
        anim->setLoopCount(-1);
        anim->start();
        break;
    case AnimateUI::Frame:
        anim->setStartValue(QColor(Qt::red));
        //anim->setKeyValueAt(0.25f,QColor(Qt::white));
        //anim->setKeyValueAt(0.55f,QColor(Qt::darkGray));
        anim->setEndValue(QColor(Qt::black));
        anim->setDuration(1000);
        anim->setLoopCount(-1);
        anim->start();
        break;
    case AnimateUI::Group:
        anim->setStartValue(QColor(Qt::darkRed));
        anim->setKeyValueAt(0.25f,QColor(Qt::white));
        anim->setKeyValueAt(0.55f,QColor(Qt::darkYellow));
        anim->setEndValue(QColor(Qt::black));
        anim->setDuration(3000);
        anim->setLoopCount(-1);
        anim->start();
        break;
    case AnimateUI::Label:
        anim->setStartValue(QColor(Qt::darkRed));
        anim->setKeyValueAt(0.25f,QColor(Qt::white));
        anim->setKeyValueAt(0.55f,QColor(Qt::darkRed));
        anim->setEndValue(QColor(Qt::black));
        anim->setDuration(7000);
        anim->setLoopCount(-1);
        anim->start();
        break;
    }
}
