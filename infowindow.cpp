#include "infowindow.h"

InfoWindow::InfoWindow(QWidget *parent)
    : QWidget(parent)
{
    setFixedSize(250, 580);
    setWindowState(Qt::WindowActive);
    setWindowFlags(Qt::FramelessWindowHint);
    move(1460, 120);
    pal = new QPalette;
    pal->setBrush(backgroundRole(), QBrush(QPixmap(":/resources/scheme.jpg")));
    setPalette(*pal);
    transform = new QTransform();

   // img = new QImage(":/resources/bearing1.png");
    pixmap = new QPixmap(QString(":/resources/bearing1.png"));
    frame = new QFrame(this);
    frame->setGeometry(5, 10, 240, 560);

    lbl_picture = new QLabel(this);
    lbl_picture->setStyleSheet("background-color: black");
    lbl_picture->setFixedSize(QSize(220, 220));
    lbl_picture->setPixmap(*pixmap);

    b_close = new QPushButton(this);
    b_close->setText(QString("З&акрыть"));
    b_close->setIconSize(QSize(40, 40));
    b_close->setMinimumSize(QSize(60, 60));
    b_close->setStyleSheet("background: black; text-align: center; color: cadetblue");
    b_close->setFont(QFont("Ariel", 16, QFont::Bold));

    tedit = new QTextEdit(this);
    //tedit->setGeometry(QRect(10, 130, 160, 100));
    tedit->setFont(QFont("Arial", 14, QFont::Bold));
    tedit->setStyleSheet("background: black; text-align: center; color: cadetblue");

    vert_lay = new QVBoxLayout(this);
    vert_lay->setGeometry(QRect(10, 340, 340, 500));
    vert_lay->addStretch(1);
    vert_lay->setSpacing(5);
    vert_lay->setMargin(15);
    vert_lay->addWidget(lbl_picture);
    vert_lay->addStretch(1);
    vert_lay->setSpacing(5);
    vert_lay->setMargin(15);
    vert_lay->addWidget(tedit);
    vert_lay->addStretch(1);
    vert_lay->setSpacing(5);
    vert_lay->setMargin(15);
    vert_lay->addWidget(b_close);
    vert_lay->addStretch(1);
    vert_lay->setMargin(15);
    vert_lay->setSpacing(5);

    auto o = rxcpp::observable<>::create<int>(observableImpl);
    setLayout(vert_lay);
    connect(b_close, SIGNAL(clicked()), this, SLOT(onClose()));
    rotate(transform, pixmap);
}

void InfoWindow::onClose(){

    this->close();
}

InfoWindow::~InfoWindow(){
}


void InfoWindow::rotate(QTransform *transform, QPixmap *pixmap){
    QPainter p(pixmap);
    transform->rotate(35, Qt::XAxis);

    p.setRenderHint(QPainter::Antialiasing);
    p.setRenderHint(QPainter::SmoothPixmapTransform);

    p.drawPixmap(220,220,*pixmap);
    p.rotate(30);

    //QPixmap *pix = new Pixmap;
    //pix = pixmap->transformed(transform);

    return;
}


/*
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
*/



/*
void InfoWindow::animateRun(QWidget *widget enum ui_widget){
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
    }
}
*/
