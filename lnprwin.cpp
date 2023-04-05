#include "exception.h"
#include "lnprwin.h"
#include <QGraphicsColorizeEffect>
#include <QPropertyAnimation>
#include <QAnimationGroup>

LNPRWin::LNPRWin(QWidget *parent)
    : QWidget(parent)
{
    /*load from config if not present to set it manualy*/
    tech_settings = new QSettings(QString("tech_settings.ini"), QSettings::IniFormat, this);
    system_settings = new QSettings(QString("system.ini"), QSettings::IniFormat, this);
    systray = new SystemTray;
    setWindowIcon(QIcon(":/resources/chip.png"));
    setWindowFlag(Qt::FramelessWindowHint);
    setWindowState(Qt::WindowFullScreen);

    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screen_geometry = screen->geometry();

    int screen_height = screen_geometry.height();
    int screen_width = screen_geometry.width();

    writeSettings(system_settings, "Display", "Height", screen_height);
    writeSettings(system_settings, "Display", "Width", screen_width);
    writeSettings(system_settings, "Display", "X", screen_width-screen_width);
    writeSettings(system_settings, "Display", "Y", screen_width-screen_width);
    writeSettings(system_settings, "MainFrame", "Height", screen_height/2);
    writeSettings(system_settings, "MainFrame", "Width", screen_width/2);

    int h, w, x, y;
    h = w = x = y = 0;
    h = readSettings(system_settings, "Display", "Height", h);
    w = readSettings(system_settings, "Display", "Width", w);
    x = readSettings(system_settings, "Display", "X", x);
    y = readSettings(system_settings, "Display", "Y", y);

    if(h == screen_height)
    {
        writeSettings(system_settings, "Display", "Height", screen_height);
    }
    if( w == screen_width)
    {
        writeSettings(system_settings, "Display", "Width", screen_width);
    }
    //setGeometry(0, 0, 1920, 1080);
    //setGeometry(x, y, w, h);
    x++; y++;
    popup = new PopUp();
    popup->setGeometry(QRect(400,400,200,100));
    popup->setPopupText("Робот не включён");
    popup->show();

    module_app = new QPushButton(this);
    module_app->setStyleSheet("background-color: black;");
    module_app->setIconSize(QSize(120,120));
    module_app->setMinimumSize(QSize(120,120));
    module_app->setIcon(QIcon(":/resources/net.png"));
    module_app->setToolTip(QString("Модуль нанесения"));

    //module_app->setVisible(true);

    module_dev = new QPushButton(this);
    module_dev->setStyleSheet("background-color: black");
    module_dev->setIcon(QIcon(":/resources/tech2.png"));
    module_dev->setIconSize(QSize(120,120));
    module_dev->setMinimumSize(QSize(120,120));
    module_dev->setToolTip(QString("Модуль проявления"));
    //module_dev->setDisabled(true);
    //module_dev->setVisible(false);

    module_wash = new QPushButton(this);
    module_wash->setStyleSheet("background-color: black");
    module_wash->setIcon(QPixmap(":/resources/radio1.png"));
    module_wash->setIconSize(QSize(120,120));
    module_wash->setMinimumSize(QSize(120,120));
    module_wash->setToolTip(QString("Модуль индивидуальной гидромеханической\nотмывки пластин"));

    block_filter = new QPushButton(this);
    block_filter->setStyleSheet("background-color: black");
    block_filter->setIcon(QIcon(":/resources/point.png"));
    block_filter->setIconSize(QSize(120,120));
    block_filter->setMinimumSize(QSize(120,120));

    b_exit = new QPushButton(this);
    b_exit->setText(QString("Закрыть"));
    b_exit->setStyleSheet("background-color: black; color: cadetblue");
    b_exit->setFont(QFont("Ariel",12, QFont::Bold));
    b_exit->setIconSize(QSize(120,120));
    b_exit->setMinimumSize(QSize(120,120));

    b_mech = new QPushButton(this);
    b_mech->setStyleSheet("background-color: black");
    b_mech->setIconSize(QSize(60, 60));
    b_mech->setIcon(QPixmap(":/resources/gear3.png"));
    b_mech->setMinimumSize(QSize(120, 120));

    b_sensors = new QPushButton(this);
    b_sensors->setStyleSheet("background-color: black");
    b_sensors->setIconSize(QSize(120, 120));
    b_sensors->setIcon(QIcon(":/resources/exit3.png"));
    b_sensors->setMinimumSize(QSize(120, 120));

    b_info = new QPushButton(this);
    b_info->setStyleSheet("background-color: black");
    b_info->setIconSize(QSize(120, 120));
    b_info->setIcon(QPixmap(":/resources/way.png"));

    main_frame = new QFrame(this);
    main_frame->setGeometry(QRect(20, 20, 1895, 1050));
    main_frame->setStyleSheet("background-radius: 45 45 45 45; border-size: 15px; "
                              "border: solid; border-width: 15px; border-color: cadetblue; "
                              "border-radius: 30 30 30 30");
    additional_frame = new QFrame(this);
    additional_frame->setGeometry(560,60,400,40);
    additional_frame->setStyleSheet("background-radius: 15 15 15 15; border-size: 5px; "
                                    "border: solid; border-width: 5px; border-color: cadetblue; "
                                    "border-radius: 12 12 12 12");
    tech_process_frame = new QFrame(this);
    tech_process_frame->setGeometry(QRect(400,100,1000,600));

    lbl_adgesia = new QLabel(this);
    lbl_adgesia->setFixedSize(QSize(200,200));

    lbl_adgesia->setStyleSheet("background-color: black");
    /*блоки обработки*/
    frame_adgesia = new QFrame(this);
    frame_adgesia->setGeometry(QRect(420,120,460,300));
    frame_adgesia->setToolTip(QString("Блок наненения промоутера адгезии ГМДС"));

    hbox_adgesia = new QHBoxLayout;
    hbox_adgesia->setMargin(15);
    hbox_adgesia->setSpacing(35);
    hbox_adgesia->addWidget(lbl_adgesia);
    hbox_adgesia->setGeometry(QRect(20,120,1320,300));

    /**/
    lbl_term = new QLabel(this);
    lbl_term->setFixedSize(QSize(200,200));
    lbl_term->setStyleSheet("background-color: black");
    chem_block_pixmap = new QPixmap(":/resources/1.png");
    lbl_term->resize(chem_block_pixmap->size());

    lbl_term->setPixmap(*chem_block_pixmap);

    frame_term = new QFrame(this);
    frame_term->setGeometry(QRect(920,120,460,300));
    frame_term->setToolTip(QString("Блок термообработки"));

    hbox_term = new QHBoxLayout;
    hbox_term->addWidget(lbl_term);
    hbox_term->setGeometry(QRect(1020,120,300,300));

    /**/
    lbl_robot = new QLabel(this);
    lbl_robot->setStyleSheet("background-color: black");
    lbl_robot->setFixedSize(QSize(140, 140));
    robot_pixmap = new QPixmap(":/resources/robot3.png");

    lbl_robot->setPixmap(*robot_pixmap);
    hbox_robot = new QHBoxLayout;
    hbox_robot->addWidget(lbl_robot);
    hbox_robot->setGeometry(QRect(420,470,180,180));

    frame_robot = new QFrame(this);
    frame_robot->setGeometry(QRect(420,440,180,240));
    frame_robot->setToolTip(QString("Блок управления роботом"));
    lbl_put_resist = new QLabel(this);
    lbl_put_resist->setStyleSheet("background-color: black");
    lbl_put_resist->setFixedSize(140,140);
    hbox_put_resist = new QHBoxLayout;
    hbox_put_resist->addWidget(lbl_put_resist);
    hbox_put_resist->setGeometry(QRect(640,470,180,180));
    frame_put_resist = new QFrame(this);
    frame_put_resist->setGeometry(QRect(640,440,180,240));
    frame_put_resist->setToolTip(QString("Блок нанесения электронного резиста"));

    lbl_centr = new QLabel(this);
    lbl_centr->setStyleSheet("background-color: black");
    lbl_centr->setFixedSize(QSize(140,140));
    hbox_centr = new QHBoxLayout;
    hbox_centr->addWidget(lbl_centr);
    hbox_centr->setGeometry(QRect(860,470,180,180));

    lbl_term_stand = new QLabel(this);
    lbl_term_stand->setStyleSheet("background-color: black");
    lbl_term_stand->setFixedSize(QSize(180,180));
    hbox_term_stand = new QHBoxLayout;
    hbox_term_stand->addWidget(lbl_term_stand);
    hbox_term_stand->setGeometry(QRect(1140,470,180,180));

    frame_centr = new QFrame(this);
    frame_centr->setGeometry(QRect(860,440,180,240));
    frame_centr->setToolTip(QString("Блок центрирования пластин"));

    frame_temr_stand = new QFrame(this);
    frame_temr_stand->setGeometry(QRect(1080,440,300,240));
    frame_temr_stand->setToolTip(QString("Блок термостабилизации"));

    /*вывод сообщений с технологического блока нанесения*/
    message_frame = new QFrame(this);
    message_frame->setGeometry(QRect(600,800,800,200));

    //service_frame = new QFrame(this);
    //service_frame->setGeometry(QRect(50,800,500,200));

    block_frame = new QFrame(this);
    block_frame->setGeometry(QRect(1450,800,420,200));
    msg_info = new QLabel(this);
    msg_info->setStyleSheet("background: black; text-align: center; color: white");
    msg_info->setFont(QFont("Ariel", 25, QFont::Bold));
    msg_info->setFixedSize(QSize(700, 140));
    msg_info->setAlignment(Qt::AlignCenter);
    hbox_msg_info = new QHBoxLayout;
    hbox_msg_info->addWidget(msg_info);
    hbox_msg_info->setGeometry(QRect(620, 760, 760, 280));

    vboxL = new QVBoxLayout;
    vboxL->setMargin(15);
    vboxL->setSpacing(35);

    vboxL->addWidget(module_app);
    vboxL->addWidget(module_dev);
    vboxL->addWidget(module_wash);
    vboxL->addWidget(block_filter);
    vboxL->addWidget(b_exit);

    vboxR = new QVBoxLayout;
    vboxR->setMargin(15);
    vboxR->setSpacing(35);

    vboxR->addWidget(b_sensors);
    vboxR->addWidget(b_mech);
    vboxR->addWidget(b_info);
    /*Левый*/
    gbox = new QGroupBox(this);
    gbox->setGeometry(50,80,160,940);
    gbox->setLayout(vboxL);
    /*Правый*/
    gbox_service = new QGroupBox(this);
    gbox_service->setGeometry(1710,80,160,500);
    gbox_service->setLayout(vboxR);

    pal.setBrush(backgroundRole(),QBrush(QPixmap(":/resources/scheme.jpg")));
    setPalette(pal);
    setStyleSheet("background-radius: 30 30 30 30; border-size: 15px; border: solid;"
                                     "border-width: 5px;"
                                     "border-color: cadetblue; "
                                     "border-radius: 30 30 30 30;");
    initEquipment();
    /*
    try {
        bool res = readSettingsBar();
    } catch (Exception::FileOpenException e){

    e.error_open_file();
    }
    */
    animateRun(b_mech, AnimateUI::Button);
    animateRun(b_info, AnimateUI::Button);
    animateRun(b_sensors, AnimateUI::Button);
    animateRun(additional_frame, AnimateUI::Frame);
    animateRun(frame_robot, AnimateUI::Frame);
    //animateRun(module_dev, AnimateUI::Button);
    animateRun(module_app, AnimateUI::Button);
    animateRun(module_wash, AnimateUI::Button);
    animateRun(block_filter, AnimateUI::Button);

    connect(b_info, SIGNAL(clicked()), this, SLOT(onInfoWindow()));
    connect(module_app, SIGNAL(clicked()), this, SLOT(onApplicationModuleWindow()));
    connect(module_wash, SIGNAL(clicked()), this, SLOT(onEquipmentWindow()));
    connect(b_exit, SIGNAL(clicked()), this, SLOT(onExit()));

}

void LNPRWin::closeEvent(QCloseEvent *event){
    switch (event->type()) {
    }
}

void LNPRWin::onExit(){
    /*Сохранение настроек тех.процесса*/
    close();
}

void LNPRWin::onEquipmentWindow(){
    ew = new EquipmentWindow(this);
    /*
    ew->setStyleSheet("background-radius: 0 0 0 0; "
                                     "border-size: 5px; border: solid;"
                                     "border-width: 5px;"
                                     "border-color: cadetblue;"
                                     "border-radius: 0 0 0 0");
    */
    //infowin->tedit->setText(brake->getMaterial());
    ew->show();
}
void LNPRWin::onApplicationModuleWindow(){
    aw = new ApplicationModuleWindow(this);
    aw->show();
}

void LNPRWin::initEquipment(){
    //robot = new Robot();
    //QString engine = robot->sd->getName()
    //brake = new Brake(1223, 12,12, 12, 1200,"fdsfdsf", "sfdsfdsfdsf", "Пластик", 211, 54, 32);
    robot = std::make_shared<Robot>();

    //QString s = robot.operator->()->sd.get()->getName();

//    brake = new Brake();
//    brake->setMaterial(QString("Металл, Пластик"));

}

bool LNPRWin::readSettingsBar(){
    QSettings settings;
    settings.beginGroup("LNPRWin");
    progress = new QProgressBar();
    progress->setWindowFlag(Qt::FramelessWindowHint);
    progress->setGeometry(QRect(300,500,1300,80));
    /*
    progress->setStyleSheet("background-radius: 30 30 30 30; border-size: 55px;"
                            "background-color: black;"
                            "border: solid; border-width: 5px; border-color: cadetblue;"
                            "border-radius: 30 30 30 30;"
                            "text-align: center; color: cadetblue;");
    */
    progress->setStyleSheet("border: 5px  solid cadetblue; border-radius: 5px; ::chunk background-color: pink; "
                            "width: 10px; margin: 0.5px");
    progress->setRange(0, 100);
    progress->setMinimumWidth(200);

    //progress->setAlignment(Qt::AlignCenter);
    /*вычислить и применить маску*/
    //progress->setMask();
    progress->setValue(15);
    progress->setTextVisible(true);
    progress->setFont(QFont("Ariel",25,QFont::Bold));
    progress->setWindowFlag(Qt::FramelessWindowHint);
    pal.setBrush(backgroundRole(),QBrush(Qt::black));
    progress->setPalette(pal);
    progress->setVisible(true);
    progress->setOrientation(Qt::Horizontal);
    progress->show();
    return false;
}

void LNPRWin::writeSettings(QSettings* filename, QString group, QString name, int value){
    filename->beginGroup(group);
    filename->setValue(name, value);
    filename->sync();
    filename->endGroup();
}

int LNPRWin::readSettings(QSettings* filename, QString group, QString name, int value){
    filename->beginGroup(group);
    value = filename->value(name).toInt();
    filename->sync();
    filename->endGroup();
    return value;
}

void LNPRWin::onInfoWindow(){
    infowin = new InfoWindow(this);
    infowin->setStyleSheet("background-radius: 0 0 0 0; "
                                     "border-size: 5px; border: solid;"
                                     "border-width: 5px;"
                                     "border-color: cadetblue;"
                                     "border-radius: 0 0 0 0");

    //infowin->tedit->setText(brake->getMaterial());
    infowin->show();
}

LNPRWin::~LNPRWin(){
}

void LNPRWin::animateRun(QWidget *widget, enum AnimateUI ui_widget){
    effect = new QGraphicsColorizeEffect(this);
    anim = new QPropertyAnimation(effect, "color");
    widget->setGraphicsEffect(effect);
    switch (ui_widget) {
    case AnimateUI::Button:
        anim->setStartValue(QColor(Qt::darkRed));
        anim->setKeyValueAt(0.55f,QColor(Qt::darkGray));
        anim->setEndValue(QColor(Qt::black));
        anim->setDuration(3000);
        anim->setLoopCount(-1);
        anim->start();
        break;
    case AnimateUI::Frame:
        anim->setStartValue(QColor(Qt::red));
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
    }
}

void LNPRWin::keyPressEvent(QKeyEvent *event)
{
    switch(event->type())
    {
        break;
    }
}






