#include "bxw.h"

BXW::BXW()
{

} 
BXW::~BXW()
{

}

void BXW::setBrand(QString brand){
    this->brand = brand;
}

QString BXW::getBrand() const{
    return this->brand;
}

void BXW::setWidth(qreal width){
    this->width = width;
}
qreal BXW::getWidth() const{
    return this->width;
}

void BXW::setHeight(qreal height){
    this->height = height;
}
qreal BXW::getHeight() const{
    return this->height;
}

void BXW::setLength(qreal length){
    this->length = length;
}
qreal BXW::getLength() const{
    return this->length;
}

void BXW::setName(QString name){
    this->name = name;
}
QString BXW::getName() const{
    return this->name;
}
void BXW::setMass(qreal mass){
    this->mass = mass;
}

qreal BXW::getMass() const{
    return this->mass;
}

void BXW::setTorque(qreal torque)
{
    this->torque = torque;
}

qreal BXW::getTorque() const{
    return this->torque;
}

void BXW::setCurrent(qreal current){
    this->current = current;
}
qreal BXW::getCurrent() const{
    return this->current;
}
void BXW::setVoltage(qreal voltage)
{
    this->voltage = voltage;
}
qreal BXW::getVoltage() const{
    return this->voltage;
}
void BXW::setWattage(qreal wattage)
{
    this->wattage = wattage;
}
qreal BXW::getWattage() const{
    return this->wattage;
}



void BXW::setRessistance(qreal ressistance)
{
    this->ressistance = ressistance;
}
qreal BXW::getRessistance() const{
    return this->ressistance;
}

void BXW::setRotationSpeed(qint32 rotation_speed)
{
    this->rotasion_speed = rotasion_speed;
}
qint32 BXW::getRotationSpeed() const{
    return this->rotasion_speed;
}
