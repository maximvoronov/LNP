#include "exception.h"
#include "lnprwin.h"
#include "wgttext.h"

#include <QGraphicsColorizeEffect>
#include <QPropertyAnimation>
#include <QAnimationGroup>

LNPRWin::LNPRWin(QWidget *parent)
    : QWidget(parent)
{
/*load from config if not present to set it manualy*/
    setGeometry(0, 0, 1920, 1080);
    //setAttribute(Qt::WA_TranslucentBackground);
    setAttribute(Qt::WA_AcceptTouchEvents);
    box_loadcollect_r = new QPushButton(this);
    box_loadcollect_r->setStyleSheet("background-color: black;");
    box_loadcollect_r->setIconSize(QSize(64,64));

    box_tech = new QPushButton(this);
    box_tech->setStyleSheet("background-color: black");
    box_updown_load = new QPushButton(this);
    box_updown_load->setStyleSheet("background-color: black");
    block_filter = new QPushButton(this);
    block_filter->setStyleSheet("background-color: black");
    box_loadcollect_r->setMinimumSize(QSize(120,120));
    box_tech->setMinimumSize(QSize(120,120));
    box_updown_load->setMinimumSize(QSize(120,120));
    block_filter->setMinimumSize(QSize(120,120));

    b_mech = new QPushButton(this);
    b_mech->setStyleSheet("background-color: black");
    b_mech->setIconSize(QSize(64,64));
    b_mech->setIcon(QPixmap(":/resources/gear2.png"));
    b_mech->setMinimumSize(QSize(120,120));

    b_sensors = new QPushButton(this);
    b_sensors->setStyleSheet("background-color: black");
    b_sensors->setIconSize(QSize(64, 64));
    //b_sensors->setIcon(QPixmap("C:\\Prj\\LNP\\resources\\za.png"));
    b_sensors->setMinimumSize(QSize(120, 120));

    b_info = new QPushButton(this);
    b_info->setStyleSheet("background-color: black");
    b_info->setIconSize(QSize(80,80));
    b_info->setMinimumSize(QSize(120, 120));
    b_info->setIcon(QPixmap(":/equipment/sensors/pic/ise30a.jpg"));

    main_frame = new QFrame(this);
    main_frame->setGeometry(QRect(20, 20, 1895, 1050));
    main_frame->setStyleSheet("background-radius: 45 45 45 45; border-size: 15px; border: solid; border-width: 15px; border-color: cadetblue; border-radius: 30 30 30 30");
    additional_frame = new QFrame(this);
    additional_frame->setGeometry(560,60,400,40);
    additional_frame->setStyleSheet("background-radius: 15 15 15 15; border-size: 5px; border: solid; border-width: 5px; border-color: cadetblue; border-radius: 12 12 12 12");

    tech_process_frame = new QFrame(this);
    tech_process_frame->setGeometry(QRect(500,100,1000,600));

    lbl_adgesia = new QLabel(this);
    //lbl_adgesia->setPixmap(QPixmap("C:\\Prj\\LNP\\resources\\adg.png"));
    lbl_adgesia->setFixedSize(QSize(200, 200));
    //lbl_adgesia->setGeometry(QRect(560, 120, 560, 280));
    lbl_adgesia->setStyleSheet("background-color: black");
    /*блоки обработки*/
    frame_adgesia = new QFrame(this);
    frame_adgesia->setGeometry(QRect(520, 120, 560, 300));

    hbox_adgesia = new QHBoxLayout;
    hbox_adgesia->setMargin(15);
    hbox_adgesia->setSpacing(35);
    hbox_adgesia->addWidget(lbl_adgesia);
    hbox_adgesia->setGeometry(QRect(20, 120, 1320, 300));

    /**/
    lbl_term = new QLabel(this);
    lbl_term->setFixedSize(QSize(200,200));
    lbl_term->setStyleSheet("background-color: black");

    frame_term = new QFrame(this);
    frame_term->setGeometry(QRect(1100, 120, 380, 300));

    hbox_term = new QHBoxLayout;
    hbox_term->addWidget(lbl_term);
    hbox_term->setGeometry(QRect(1140, 120, 300, 300));

    /**/
    lbl_robot = new QLabel(this);
    lbl_robot->setStyleSheet("background-color: black");
    lbl_robot->setFixedSize(QSize(140, 140));

    hbox_robot = new QHBoxLayout;
    hbox_robot->addWidget(lbl_robot);
    hbox_robot->setGeometry(QRect(530, 470, 180, 180));

    frame_robot = new QFrame(this);
    frame_robot->setGeometry(QRect(520, 440, 200, 240));

    lbl_put_resist = new QLabel(this);
    lbl_put_resist->setStyleSheet("background-color: black");
    lbl_put_resist->setFixedSize(140, 140);
    hbox_put_resist = new QHBoxLayout;
    hbox_put_resist->addWidget(lbl_put_resist);
    hbox_put_resist->setGeometry(QRect(750, 470, 180, 180));
    frame_put_resist = new QFrame(this);
    frame_put_resist->setGeometry(QRect(740, 440, 200, 240));

    lbl_centr = new QLabel(this);
    lbl_centr->setStyleSheet("background-color: black");
    lbl_centr->setFixedSize(QSize(140, 140));
    hbox_centr = new QHBoxLayout;
    hbox_centr->addWidget(lbl_centr);
    hbox_centr->setGeometry(QRect(970, 470, 180, 180));

    lbl_term_stand = new QLabel(this);
    lbl_term_stand->setStyleSheet("background-color: black");
    lbl_term_stand->setFixedSize(QSize(180, 180));
    hbox_term_stand = new QHBoxLayout;
    hbox_term_stand->addWidget(lbl_term_stand);
    hbox_term_stand->setGeometry(QRect(1240, 470, 180, 180));

    frame_centr = new QFrame(this);
    frame_centr->setGeometry(QRect(960, 440, 200,240));

    frame_temr_stand = new QFrame(this);
    frame_temr_stand->setGeometry(QRect(1180, 440, 300, 240));

    /*вывод сообщений с технологического блока нанесения*/
    message_frame = new QFrame(this);
    message_frame->setGeometry(QRect(600, 800, 800, 200));

    service_frame = new QFrame(this);
    service_frame->setGeometry(QRect(50, 800, 500, 200));

    block_frame = new QFrame(this);
    block_frame->setGeometry(QRect(1450, 800, 420, 200));

    msg_info = new QLabel(this);
    msg_info->setStyleSheet("background: black; text-align: center; color: white");
    msg_info->setFont(QFont("Ariel", 25, QFont::Bold));
    msg_info->setText(QString("Внимание: Датчик не выключен!"));
    msg_info->setFixedSize(QSize(700, 140));
    msg_info->setAlignment(Qt::AlignCenter);
    hbox_msg_info = new QHBoxLayout;
    hbox_msg_info->addWidget(msg_info);
    hbox_msg_info->setGeometry(QRect(620, 760, 760, 280));

    vboxL = new QVBoxLayout;
    vboxL->setMargin(15);
    vboxL->setSpacing(35);

    vboxL->addWidget(box_loadcollect_r);
    vboxL->addWidget(box_updown_load);
    vboxL->addWidget(box_tech);
    vboxL->addWidget(block_filter);

    vboxR = new QVBoxLayout(this);
    vboxR->setMargin(15);
    vboxR->setSpacing(35);

    vboxR->addWidget(b_sensors);
    vboxR->addWidget(b_mech);
    vboxR->addWidget(b_info);

    gbox = new QGroupBox(this);
    gbox->setGeometry(50,100,160,600);
    gbox->setLayout(vboxL);

    gbox_service = new QGroupBox(this);
    gbox_service->setGeometry(1710,100,160,600);
    gbox_service->setLayout(vboxR);

    pal.setBrush(backgroundRole(),QBrush(QPixmap(":/resources/scheme.jpg")));
    setPalette(pal);

    animateRun(b_mech, AnimateUI::Button);
    animateRun(b_sensors, AnimateUI::Button);
    animateRun(additional_frame, AnimateUI::Frame);
    animateRun(frame_robot, AnimateUI::Frame);

    setStyleSheet("background-radius: 30 30 30 30; border-size: 15px; border: solid;"
                                     "border-width: 5px;"
                                     "border-color: cadetblue; border-radius: 30 30 30 30;");
    //connect(b_sensors, SIGNAL(clicked()), this, SLOT(onWgtText()));
}

void LNPRWin::setWindowWidth(int width){
    this->width = width;
}

void LNPRWin::setWindowHeight(int height){
    this->height = height;
}

int LNPRWin::getWindowWidth() const{
    return this->width;
}

int LNPRWin::getWindowHeight() const{
    return this->height;
}

LNPRWin::~LNPRWin()
{}

void LNPRWin::animateRun(QWidget *widget, enum AnimateUI ui_widget){
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
        anim->setStartValue(QColor(Qt::darkRed));
        anim->setKeyValueAt(0.25f,QColor(Qt::white));
        anim->setKeyValueAt(0.55f,QColor(Qt::darkGray));
        anim->setEndValue(QColor(Qt::black));
        anim->setDuration(12000);
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
    }
}

void LNPRWin::keyPressEvent(QKeyEvent *event)
{
    switch(event->type())
    {
        case QEvent::TouchBegin:
        break;

    }
}






