#include "pump.h"

Pump::Pump()
{

}
Pump::~Pump()
{

}
void Pump::setMass(qreal mass){
    this->mass = mass;
}
qreal Pump::getMass() const {
    return this->mass;
}
void Pump::setName(QString name){
    this->name = name;
}
QString Pump::getName() const {
    return this->name;
}
void Pump::setBrand(QString brand) {
    this->brand = brand;
}
QString Pump::getBrand() const {
    return this->brand;
}
void Pump::setWidth(qreal width) {
    this->width = width;
}
qreal Pump::getWidth() const {
    return  this->width;
}
void Pump::setHeight(qreal height) {
    this->height = height;
}
qreal Pump::getHeight() const {
    return  this->height;
}
void Pump::setLength(qreal length) {
    this->length = length;
}
qreal Pump::getLength() const {
    return this->length;
}
void Pump::setMaterial(QString material){
    this->material = material;
}
QString Pump::getMaterial() const {
    return this->material;
}
void Pump::setIP(QString ip){
    this->ip = ip;

}
QString Pump::getIP() const {
     return this->ip;
}
