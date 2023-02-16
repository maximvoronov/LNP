#include "pd30_08.h"

PD30_08::PD30_08()
{

}

PD30_08::~PD30_08(){}


void PD30_08::setName(QString name){
    this->name = name;
}
QString PD30_08::getName() const{
    return this->name;
}
void PD30_08::setBrand(QString brand){
    this->brand = brand;
}
QString PD30_08::getBrand() const{
    return this->brand;
}
void PD30_08::setWidth(qreal width){
    this->width = width;
}
qreal PD30_08::getWidth() const{
    return this->width;
}
void PD30_08::setHeight(qreal height){
    this->height = height;
}
qreal PD30_08::getHeight() const{
    return this->height;
}

qreal PD30_08::getLength() const{
    return this->length;
}
void PD30_08::setLength(qreal lenght){
    this->length = lenght;
}


void PD30_08::setKind(QString kind){
    this->kind = kind;
}
QString PD30_08::getKind() const{
    return this->kind;
}
qreal PD30_08::getShaftSize() const{
    return this->shaft_size;
}
void PD30_08::setShaftSize(qreal shaft_size){
    this->shaft_size = shaft_size;
}
void PD30_08::setOutputType(QString output_type){
    this->output_type = output_type;
}
QString PD30_08::getOutputType() const{
    return this->output_type;
}
void PD30_08::setEncoderResolution(qint32 encoder_resolution){
    this->encoder_resolution = encoder_resolution;
}
qint32 PD30_08::getEncoderResolution() const{
    return this->encoder_resolution;
}



