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
    pb_box_tech = new QPushButton(this);
    pb_box_tech->setGeometry(QRect(60,200,300,120));
    pb_box_tech->setText(QString("Бокс технологический"));
    pb_box_tech->setFont(QFont("Ariel",14,QFont::Bold));

    pb_box_collect = new QPushButton(this);
    pb_box_collect->setGeometry(QRect(60,60,300,120));
    pb_box_collect->setText(QString("Бокс подачи и\nсбора реактивов"));
    pb_box_collect->setFont(QFont("Ariel",14,QFont::Bold));

    pb_box_load = new QPushButton(this);
    pb_box_load->setText(QString("Бокс загрузки/\nвыгрузки"));
    pb_box_load->setGeometry(QRect(60,340,300,120));
    pb_box_load->setFont(QFont("Ariel",14,QFont::Bold));

    pb_block_filter = new QPushButton(this);
    pb_block_filter->setText(QString("Фильтрационный\nблок"));
    pb_block_filter->setGeometry(QRect(60,480,300,120));
    pb_block_filter->setFont(QFont("Ariel",14,QFont::Bold));

    pb_close = new QPushButton(this);
    pb_close->setText(QString("Закрыть\nмодуль"));
    pb_close->setGeometry(QRect(60,630,300,120));
    pb_close->setFont(QFont("Ariel",14,QFont::Bold));

    splitter_details = new QSplitter(this);
    splitter_details->setOrientation(Qt::Vertical);
    splitter_details->setGeometry(QRect(450,60,20,980));

    splitter_descr = new QSplitter(this);
    splitter_descr->setOrientation(Qt::Vertical);
    splitter_descr->setGeometry(QRect(1420,60,460,980));

    te_resist = new QTextEdit(this);
    te_resist->setFont(QFont("Ariel",12,QFont::Bold));
    te_resist->setGeometry(QRect(1440,80,420,940));

    pal = new QPalette;
    pal->setBrush(backgroundRole(), QBrush(QPixmap(":/resources/scheme.jpg")));
    setPalette(*pal);
    setStyleSheet("background-radius: 30 30 30 30; border-size: 55px;"
                            "background-color: black;"
                            "border: solid; border-width: 5px; border-color: cadetblue;"
                            "border-radius: 30 30 30 30;"
                            "text-align: center; color: cadetblue;");
    connect(pb_close,SIGNAL(clicked()),SLOT(onClose()));
    connect(pb_box_tech,SIGNAL(clicked()),SLOT(onTechBox()));
}
ApplicationModuleWindow::~ApplicationModuleWindow(){
}
void ApplicationModuleWindow::onClose(){
    close();
}
void ApplicationModuleWindow::onTechBox(){
    //pb_block_gmds = new QPushButton(this);
    te_resist->setText(QString("Базовым узлом блока является центрифуга, на столике, которой происходит процесс\n"
                               "обработки пластины диаметром 150мм. В процессе обработки пластина удерживается\n"
                               "на столике вакуумом. Рабочая зона блока образована неподвижной ванной и  подвижным\n"
                               "отражателем. Рабочая зона должна быть выполнена из из химически стойких материалов."
                               "Выполняемые операции блока проявления:\n"
                               "- подача электронорезиста на пластину в статическом и динамическом режимах\n"
                               "(сканирование) с помощью трех каналов;\n"
                               "- подача электронорезиста насосом-дозатором;\n"
                               "- формирование плёнки электронорезиста;\n"
                               "- отмывка краевого валика и обратной стороны пластины"));
    splitter_descr->addWidget(te_resist);
    te_resist->show();
    //        *pb_block_term = nullptr, *pb_robot = nullptr,
    //*pb_resist = nullptr, *pb_centr_plate = nullptr, *pb_block_term_stable = nullptr;
}


