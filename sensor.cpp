#include "sensor.h"

Sensor::Sensor()
{

}
void Sensor::setName(QString name){
    this->name = name;
}
QString Sensor::getName() const{
    return name;
}
void Sensor::setBrand(QString brand){
    this->brand = brand;
}
QString Sensor::getBrand() const{
    return this->brand;
}
void Sensor::setWidth(qreal width){
    this->width = width;
}

void Sensor::setHeight(qreal height){
    this->height = height;
}
void Sensor::setLength(qreal length){
    this->length = length;
}
qreal Sensor::getWidth() const{
    return this->width;
}
qreal Sensor::getHeight() const{
    return this->height;
}
qreal Sensor::getLength() const{
    return this->length;
}
void Sensor::setCurrent(qreal current){
    this->current = current;
}
void Sensor::setVoltage(qreal voltage){
    this->voltage = voltage;
}
void Sensor::setWattage(qreal wattage){
    this->wattage = wattage;
}
void Sensor::setRessistance(qreal ressistance){
    this->ressistance = ressistance;
}
qreal Sensor::getCurrent()const{
    return this->current;
}
qreal Sensor::getVoltage() const{
    return this->voltage;
}
qreal Sensor::getWattage() const{
    return this->wattage;
}
qreal Sensor::getRessistance() const{
    return this->ressistance;
}



