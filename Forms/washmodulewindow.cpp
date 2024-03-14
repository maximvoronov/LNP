#include "washmodulewindow.h"

WashModuleWindow::WashModuleWindow(QWidget *parent) : QWidget(widget)
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
    setMouseTracking(true);

    main_frame = new QFrame(this);
    main_frame->setGeometry(QRect(20,20,1895,1050));
    main_frame->setStyleSheet("background-radius: 45 45 45 45; border-size: 15px; "
                              "border: solid; border-width: 15px; border-color: cadetblue;"
                              "border-radius: 30 30 30 30");
    splitter_details = new QSplitter(this);
    splitter_details->setOrientation(Qt::Vertical);
    splitter_details->setGeometry(QRect(450,60,20,980));

    gbox = new QGroupBox(this);
    gbox->setGeometry(QRect(60,60,350,960));

}
WashModuleWindow::~WashModuleWindow(){

}

bool WashModuleWindow::animateUI(){
    return false;
}
