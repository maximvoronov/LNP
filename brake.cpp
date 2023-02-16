#include "brake.h"

Brake::Brake()
{

}

qreal Brake::getTorque()const {
    return this->torque;

}
void Brake::setTorque(qreal torque){
    this->torque = torque;
}

qint32 Brake::getRotationSpeed() const{
    return this->rotation_speed;
}

void Brake::setName(QString name){
    this->name = name;
}
QString Brake::getName() const{
    return this->name;
}
void Brake::setBrand(QString brand){
    this->brand = brand;
}
QString Brake::getBrand() const{
    return this->brand;
}

void Brake::setWidth(qreal width){
    this->width = width;
}
void Brake::setHeight(qreal height){
    this->height = height;
}
void Brake::setLength(qreal lenght){
    this->length = lenght;
}

qreal Brake::getWidth() const{
    return this->width;
}
qreal Brake::getHeight() const{
    return this->height;
}
qreal Brake::getLength() const{
    return this->length;
}


