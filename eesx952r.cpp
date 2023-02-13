#include "eesx952r.h"

EESX952R::EESX952R(){
    sr = new QXmlStreamReader();
    pix = new QPixmap(QString(""));

    read_info = readInfo(sr);

}
bool EESX952R::readInfo(QXmlStreamReader *reader){
    QFile file(":/equipment/sensors/pic/ise30a_01_n_m.xml");
    try {
        file.open(QIODevice::ReadOnly);
        reader->setDevice(&file);



    } catch (Exception::FileNotFoundException *e) {
        e->error_open_file();
    }
    return false;
}


QPixmap* EESX952R::getPicture()const{
    return this->pix;
}

float EESX952R::getWidth() const{
    return Width;
}

float EESX952R::getHeight() const{
    return Height;
}
float EESX952R::getLength() const{
    return Lenght;
}
int EESX952R::getCurrent() const{
    return current;
}
QString EESX952R::getName() const{
    return name;
}
QString EESX952R::getType() const{
    return type;
}

void EESX952R::setName(QString name){
    this->name = name;
}
void EESX952R::setType(QString type){
    this->type = type;
}
void EESX952R::setWidth(float width){
    this->Width = width;
}
void EESX952R::setHeight(float height){
    this->Height = height;
}
void EESX952R::setLength(float lenght){
    this->Lenght = lenght;
}
void EESX952R::setCurrent(int current){
    this->current = current;
}

