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
    setMouseTracking(true);
    //sm = new SensorMessages();

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

    gbox_equipment = new QGroupBox(this);
    gbox_equipment->setGeometry(QRect(480, 60, 920, 980));

    gridbox = new QGridLayout(this);
    //gridbox->setGeometry(QRect(470,600,350,960));
    gridbox->setMargin(40);
    gridbox->setSpacing(35);

    vbox = new QVBoxLayout(this);
    vbox->setMargin(40);
    vbox->setSpacing(35);

    pb_box_tech = new QPushButton(this);
    //pb_box_tech->setGeometry(QRect(60,100,300,120));
    pb_box_tech->setText(QString("Бокс\nтехнологический"));
    pb_box_tech->setFont(QFont("Ariel",14,QFont::Bold));
    pb_box_tech->setFixedSize(QSize(250,150));

    pb_box_collect = new QPushButton(this);
    //pb_box_collect->setGeometry(QRect(60,240,300,120));
    pb_box_collect->setText(QString("Бокс подачи и\nсбора реактивов"));
    pb_box_collect->setFont(QFont("Ariel",14,QFont::Bold));
    pb_box_collect->setFixedSize(QSize(250,150));

    pb_box_load = new QPushButton(this);
    pb_box_load->setText(QString("Бокс загрузки/\nвыгрузки"));
    //pb_box_load->setGeometry(QRect(60,380,300,120));
    pb_box_load->setFont(QFont("Ariel",14,QFont::Bold));
    pb_box_load->setFixedSize(QSize(250,150));

    pb_block_filter = new QPushButton(this);
    pb_block_filter->setText(QString("Фильтрационный\nблок"));
    //pb_block_filter->setGeometry(QRect(60,520,300,120));
    pb_block_filter->setFont(QFont("Ariel",14,QFont::Bold));
    pb_block_filter->setFixedSize(QSize(250,150));

    pb_close = new QPushButton(this);
    pb_close->setText(QString("Закрыть\nмодуль"));
    //pb_close->setGeometry(QRect(60,630,300,120));
    pb_close->setFont(QFont("Ariel",14,QFont::Bold));
    pb_close->setFixedSize(QSize(250,150));

    vbox->addWidget(pb_box_tech);
    vbox->addWidget(pb_box_collect);
    vbox->addWidget(pb_box_load);
    vbox->addWidget(pb_block_filter);
    vbox->addWidget(pb_close);

    gbox->setLayout(vbox);
    gbox_equipment->setLayout(gridbox);
    gbox->setFlat(true);

    block_promo_adgesia = new QPushButton(this);
    block_promo_adgesia->setText(QString("Блок нанесения\nпромоутера адгезии"));
    block_promo_adgesia->setMinimumSize(QSize(120,120));
    block_promo_adgesia->setFont(QFont("Ariel",14,QFont::Bold));
    block_promo_adgesia->setFixedSize(QSize(250,150));

    block_term = new QPushButton(this);
    block_term->setText(QString("Блок\nтермообрабоки"));
    block_term->setMinimumSize(QSize(120,120));
    block_term->setFont(QFont("Ariel",14,QFont::Bold));
    block_term->setFixedSize(QSize(250,150));

    robot = new QPushButton(this);
    robot->setText(QString("Робот-манипулятор"));
    robot->setMinimumSize(QSize(120,120));
    robot->setFont(QFont("Ariel",14,QFont::Bold));
    robot->setFixedSize(QSize(250,150));

    block_resist = new QPushButton(this);
    block_resist->setText(QString("Блок нанесения\nэлектронного резиста"));
    block_resist->setMinimumSize(QSize(120,120));
    block_resist->setFont(QFont("Ariel",14,QFont::Bold));
    block_resist->setFixedSize(QSize(250,150));

    block_center = new QPushButton(this);
    block_center->setText(QString("Блок\nцентрирования пластин"));
    block_center->setMinimumSize(QSize(120,120));
    block_center->setFont(QFont("Ariel",14,QFont::Bold));
    block_center->setFixedSize(QSize(250,150));

    block_term_stable = new QPushButton(this);
    block_term_stable->setText(QString("Блок\nтермостабилизации"));
    block_term_stable->setMinimumSize(QSize(120,120));
    block_term_stable->setFont(QFont("Ariel",14,QFont::Bold));
    block_term_stable->setFixedSize(QSize(250,150));

    tech_process = new QPushButton(this);
    tech_process->setText(QString("Технологический\nпроцесс (Рецепт)"));
    tech_process->setMinimumSize(QSize(120,120));
    tech_process->setFont(QFont("Ariel",14,QFont::Bold));
    tech_process->setFixedSize(QSize(250,150));

    gridbox->addWidget(block_promo_adgesia,0,0);
    gridbox->addWidget(block_term,0,1);
    gridbox->addWidget(robot,0,2);
    gridbox->addWidget(block_resist,1,0);
    gridbox->addWidget(block_center,1,1);
    gridbox->addWidget(block_term_stable,1,2);
    gridbox->addWidget(tech_process, 2,0);

    splitter_descr = new QSplitter(this);
    splitter_descr->setOrientation(Qt::Vertical);
    splitter_descr->setGeometry(QRect(1420,60,460,980));

    te_resist = new QTextEdit(this);
    te_resist->setFont(QFont("Ariel",12,QFont::Bold));
    te_resist->setReadOnly(true);
    te_resist->setGeometry(QRect(1440,80,420,940));
    setStyleSheet("background-radius: 30 30 30 30; border-size: 55px;"
                            "background-color: black;"
                            "border: solid; border-width: 5px; border-color: cadetblue;"
                            "border-radius: 30 30 30 30;"
                            "text-align: center; color: cadetblue;");
    pal = new QPalette;
    pal->setBrush(backgroundRole(), QBrush(QPixmap(":/resources/scheme.jpg")));
    setPalette(*pal);
    connect(pb_close,SIGNAL(clicked()),SLOT(onClose()));
    connect(pb_box_tech,SIGNAL(clicked()),SLOT(onTechBox()));
}
ApplicationModuleWindow::~ApplicationModuleWindow(){
}
void ApplicationModuleWindow::onClose(){
    close();
}
void ApplicationModuleWindow::onTechBox(){
    msgbox = new MessageBox(this);
    msgbox->show();
    //pb_block_gmds = new QPushButton(this);
    te_resist->setText(QString("Базовым узлом блока является центрифуга, на столике, которой происходит процесс\n"
                               "обработки пластины. В процессе обработки пластина удерживается на столике вакуумом.\n"
                               "Рабочая зона блока образована неподвижной ванной и подвижным отражателем. Рабочая зона\n"
                               "выполнена из химически стойких материалов.\nВыполняемые операции блока проявления:\n"
                               "- подача электронорезиста на пластину в статическом и динамическом режимах\n"
                               "(сканирование) с помощью каналов;\n"
                               "- подача электронорезиста насосом-дозатором;\n"
                               "- формирование плёнки электронорезиста;\n"
                               "- отмывка краевого валика и обратной стороны пластины"));
    splitter_descr->addWidget(te_resist);
    te_resist->show();
}

void ApplicationModuleWindow::mouseMoveEvent(QMouseEvent *event){
    switch(event->type()){
    case QMoveEvent::Move:

        break;


    }
}


