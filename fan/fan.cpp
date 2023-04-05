#include "fan.h"

Fan::Fan(): voltage(24), wattage(2.54), noise(27)
{
}


void Fan::setName(QString name){
    this->name = name;
}

QString Fan::getName()const{
    return this->name;
}
void Fan::setBrand(QString brand){
    this->brand = brand;
}

QString Fan::getBrand()const{
    return this->brand;
}
void Fan::setIP(QString ip){
    this->ip = ip;
}
QString Fan::getIP() const{
    return this->ip;
}

void Fan::setLength(qreal lenght){
    this->lenght = lenght;
}

qreal Fan::getLength()const{
    return this->lenght;
}
void Fan::setWidth(qreal width){
    this->width = width;
}

qreal Fan::getWidth() const{
    return this->width;
}
void Fan::setHeight(qreal height){
    this->height = height;
}

qreal Fan::getHeight()const{
    return this->height;
}


qreal Fan::getCurrent()const{
    return this->current;
}
qreal Fan::getVoltage() const{
    return this->voltage;
}
qreal Fan::getWattage() const{
    return this->voltage;
}
qreal Fan::getRessistance() const{
    return this->ressistance;
}
void Fan::setCurrent(qreal current){
    this->current = current;
}
void Fan::setWattage(qreal wattage){
    this->wattage = wattage;
}
void Fan::setRessistance(qreal ressistance){
    this->ressistance = ressistance;
}
void Fan::setVoltage(qreal voltage){
    this->voltage = voltage;
}
void Fan::setNoise(qreal noise){
    this->noise = noise;
}
qreal Fan::getNoise() const{
    return this->noise;
}
