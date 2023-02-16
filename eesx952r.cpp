#include "eesx952r.h"

EESX952R::EESX952R(){

    sr = new QXmlStreamReader();
    pix = new QPixmap(QString(""));

    //read_info = readInfo(sr);

}

bool EESX952R::readInfo(QXmlStreamReader *reader){
    QFile file(":/equipment/sensors/pic/ise30a_01_n_m.xml");
    try {
        file.open(QIODevice::ReadOnly);
        reader->setDevice(&file);


    }catch (Exception::FileNotFoundException *e){
        e->error_found_file();
    }catch (Exception::FileOpenException *e){
       // e->error_open_file();
    }
    return false;
}

QPixmap* EESX952R::getPicture()const{
    return this->pix;
}

qreal EESX952R::getWidth() const{
    return width;
}

qreal EESX952R::getHeight() const{
    return height;
}
qreal EESX952R::getLength() const{
    return lenght;
}
/*
std::vector<qreal> EESX952R::getCurrent() const{
    return current;
}

void EESX952R::setCurrent(std::vector<qreal> current, qreal value){
    this->current = current;
}
*/

QString EESX952R::getName() const{
    return name;
}
/*
QString EESX952R::getType() const{
    return type;
}*/
void EESX952R::setName(QString name){
    this->name = name;
}
/*
void EESX952R::setType(QString type){
    this->type = type;
}*/
void EESX952R::setWidth(qreal width){
    this->width = width;
}
void EESX952R::setHeight(qreal height){
    this->height = height;
}
void EESX952R::setLength(qreal lenght){
    this->lenght = lenght;
}
