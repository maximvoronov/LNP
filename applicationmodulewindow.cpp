#include "applicationmodulewindow.h"

ApplicationModuleWindow::ApplicationModuleWindow(QWidget *parent) : QWidget(parent)
{
    if (parent != nullptr){
        widget = parent;
    }
    else{
        widget = this;
    }
    setWindowState(Qt::WindowActive);
    setWindowFlags(Qt::FramelessWindowHint);
    setGeometry(QRect(0,0,1920,1080));
    main_frame = new QFrame(this);
    main_frame->setGeometry(QRect(20, 20, 1895, 1050));
    main_frame->setStyleSheet("background-radius: 45 45 45 45; border-size: 15px; "
                              "border: solid; border-width: 15px; border-color: cadetblue;"
                              "border-radius: 30 30 30 30");
    pal = new QPalette;
    pal->setBrush(backgroundRole(), QBrush(QPixmap(":/resources/scheme.jpg")));
    setPalette(*pal);
    setStyleSheet("background-radius: 30 30 30 30; border-size: 55px;"
                            "background-color: black;"
                            "border: solid; border-width: 5px; border-color: cadetblue;"
                            "border-radius: 30 30 30 30;"
                            "text-align: center; color: cadetblue;");
}
ApplicationModuleWindow::~ApplicationModuleWindow(){
}

void ApplicationModuleWindow::onClose(){
    close();
}
