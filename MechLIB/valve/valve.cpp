#include "valve.h"

Valve::Valve()
{

}
Valve::~Valve(){}
qreal Valve::getMass() const{
    return this->mass;
}
void Valve::setMass(qreal mass){
    this->mass = mass;
}
void Valve::setMaterial(QString material){
    this->material = material;
}
QString Valve::getMaterial() const{
    return this->material;
}
void Valve::setIP(QString ip){
    this->ip = ip;
}
QString Valve::getIP() const{
    return this->ip;
}
void Valve::setName(QString name){
    this->name = name;
}
QString Valve::getName() const{
    return name;
}
void Valve::setBrand(QString brand){
    this->brand = brand;
}
QString Valve::getBrand() const{
    return this->brand;
}
void Valve::setWidth(qreal width){
    this->width = width;
}
void Valve::setHeight(qreal height){
    this->height = height;
}
void Valve::setLength(qreal length){
    this->length = length;
}
qreal Valve::getWidth() const{
    return this->width;
}
qreal Valve::getHeight() const{
    return this->height;
}
qreal Valve::getLength() const{
    return this->length;
}
QString Valve::getFitting() const{
    return this->fitting;
}
void Valve::setFitting(QString fitting){
    this->fitting = fitting;
}
qreal Valve::getConsumption() const{
    return this->consumption;
}
void Valve::setConsumption(qreal consumption){
    this->consumption = consumption;
}
qreal Valve::getTemperature() const{
    return this->temperature;
}
void Valve::setTemperature(qreal temperature){
    this->temperature = temperature;
}
