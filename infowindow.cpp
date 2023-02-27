#include "infowindow.h"

InfoWindow::InfoWindow(QWidget *parent)
    : QWidget(parent)
{
    setFixedSize(250, 580);
    setWindowState(Qt::WindowActive);
    setWindowFlags(Qt::FramelessWindowHint);
    pal = new QPalette;
    pal->setBrush(backgroundRole(), QBrush(QPixmap(":/resources/scheme.jpg")));
    setPalette(*pal);
    frame = new QFrame(this);
    b_close = new QPushButton(this);
    b_close->setText(QString("З&акрыть"));
    b_close->setIconSize(QSize(40, 40));
    b_close->setMinimumSize(QSize(60, 60));
    b_close->setStyleSheet("background: black; text-align: center; color: cadetblue");

    b_close->setFont(QFont("Ariel", 16, QFont::Bold));
    frame->setGeometry(5, 10, 240, 560);
    tedit = new QTextEdit(this);
    tedit->setGeometry(QRect(20, 130, 260, 100));
    tedit->setFont(QFont("Arial", 14, QFont::Bold));
    tedit->setStyleSheet("background: black; text-align: center; color: cadetblue");
    vert_lay = new QVBoxLayout(this);
    vert_lay->setGeometry(QRect(20, 180, 140, 500));
    vert_lay->addWidget(tedit);
    vert_lay->addWidget(b_close);
    vert_lay->setMargin(55);
    vert_lay->setSpacing(5);
    vert_lay->setStretch(2, 12);
    setStyleSheet("background-radius: 30 30 30 30; border-size: 15px; border: solid;"
                                     "border-width: 5px;"
                                     "border-color: cadetblue; border-radius: 30 30 30 30;");
    setLayout(vert_lay);
    connect(b_close, SIGNAL(clicked()), this, SLOT(onClose()));
}

void InfoWindow::onClose(){
    this->close();
}

void InfoWindow::paintEvent(QPaintEvent *){
    QPainter painter(this);
    //painter.begin();
    painter.setRenderHint(QPainter::Antialiasing, true);
   // painter.setBrush(QBrush(QPixmap(":/resources/scheme.jpg")));
}

void InfoWindow::update()
{
    setGeometry(300,500,500,600);
    pal = new QPalette;
    pal->setBrush(backgroundRole(),QBrush(QPixmap(":/resources/scheme.jpg")));
    frame = new QFrame();
    frame->setGeometry(280,480,580,580);
    setStyleSheet("background-radius: 30 30 30 30; border-size: 15px; border: solid;"
                                     "border-width: 5px;"
                                     "border-color: cadetblue; border-radius: 30 30 30 30;");
}
