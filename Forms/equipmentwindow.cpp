#include "equipmentwindow.h"

EquipmentWindow::EquipmentWindow(QWidget *parent) : QWidget(parent)
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

    //vbox_container = new QVBoxLayout(this);
    //vbox_container->setGeometry(QRect(40,340,340,500));

    pb_chembox = new QPushButton(this);
    pb_chembox->setGeometry(QRect(60,60,300,120));
    pb_chembox->setText(QString("Блок химической\nобработки"));
    pb_chembox->setFont(QFont("Ariel",14,QFont::Bold));

    pb_termbox = new QPushButton(this);
    pb_termbox->setGeometry(QRect(60,200,300,120));
    pb_termbox->setText(QString("Блок термической\nобработки"));
    pb_termbox->setFont(QFont("Ariel",14,QFont::Bold));

    //pb_chembox->setGeometry(QRect(60,60,40,80));
    //pb_chembox->setIconSize(QSize(40,40));
    //pb_chembox->setMinimumSize(QSize(60,60));
    //pb_chembox->setStyleSheet("background-color: black; background: black; text-align: center; color: cadetblue");
    //

    pb_termresist = new QPushButton(this);
    pb_termresist->setText(QString("Блок нанесения\nтерморезиста"));
    pb_termresist->setGeometry(QRect(60,340,300,120));
    pb_termresist->setFont(QFont("Ariel",14,QFont::Bold));

    /*
    pb_termoresist->setGeometry(QRect(60,60,40,80));

    pb_termoresist->setIconSize(QSize(40,40));
    pb_termoresist->setMinimumSize(QSize(60,60));
    */
    //pb_termoresist->setStyleSheet("background-color: black; background: black; text-align: center; color: cadetblue");
    //pb_termoresist->setFont(QFont("Ariel",16,QFont::Bold));

    //pb_termbox = new QPushButton(this);
    //pb_termbox->setText(QString("Блок термической обработки"));
    /*
    pb_termbox->setGeometry(QRect(60,60,40,80));

    pb_termbox->setIconSize(QSize(40,40));
    pb_termbox->setMinimumSize(QSize(60,60));
    */
    //pb_termbox->setStyleSheet("background-color: black; background: black; text-align: center; color: cadetblue");
    //pb_termbox->setFont(QFont("Ariel",16,QFont::Bold));

    //vsplitter_content = new QSplitter(Qt::Vertical);
    //vsplitter_description = new QSplitter(Qt::Vertical);

    /*
    vbox_container->setMargin(15);
    vbox_container->setSpacing(5);
    vbox_container->addStretch(1);
    vbox_container->addWidget(pb_chembox);
    vbox_container->setMargin(15);
    vbox_container->setSpacing(5);
    vbox_container->addStretch(1);
    vbox_container->addWidget(pb_termbox);
    vbox_container->setMargin(15);
    vbox_container->setSpacing(5);
    vbox_container->addStretch(1);
    vbox_container->addWidget(pb_termoresist);
    setLayout(vbox_container);

*/
    pal = new QPalette;
    pal->setBrush(backgroundRole(), QBrush(QPixmap(":/resources/scheme.jpg")));
    setPalette(*pal);
    setStyleSheet("background-radius: 30 30 30 30; border-size: 55px;"
                            "background-color: black;"
                            "border: solid; border-width: 5px; border-color: cadetblue;"
                            "border-radius: 30 30 30 30;"
                            "text-align: center; color: cadetblue;");
    //setLayout(vbox_container);
    connect(pb_chembox,SIGNAL(clicked()),SLOT(onClose()));
}

EquipmentWindow::~EquipmentWindow(){
}
void EquipmentWindow::onClose(){
    close();
}
