#include "brush.h"

Brush::Brush()
{

}
Brush::~Brush()
{

}
void Brush::setMass(qreal mass){
    this->mass = mass;
}
qreal Brush::getMass() const {
    return this->mass;
}
void Brush::setName(QString name){
    this->name = name;
}
QString Brush::getName() const {
    return this->name;
}
void Brush::setBrand(QString brand) {
    this->brand = brand;
}
QString Brush::getBrand() const {
    return this->brand;
}
void Brush::setWidth(qreal width) {
    this->width = width;
}
qreal Brush::getWidth() const {
    return  this->width;
}
void Brush::setHeight(qreal height) {
    this->height = height;
}
qreal Brush::getHeight() const {
    return  this->height;
}
void Brush::setLength(qreal length) {
    this->length = length;
}
qreal Brush::getLength() const {
    return this->length;
}
void Brush::setMaterial(QString material){
    this->material = material;
}
QString Brush::getMaterial() const {
    return this->material;
}
void Brush::setIP(QString ip){
    this->ip = ip;
}
QString Brush::getIP() const {
     return this->ip;
}
