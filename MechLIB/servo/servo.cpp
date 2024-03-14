#include "servo.h"

Servo::Servo()
{
}
Servo::~Servo()
{
}
void Servo::setMass(qreal mass){
    this->mass = mass;
}
qreal Servo::getMass() const {
    return this->mass;
}
void Servo::setName(QString name){
    this->name = name;
}
QString Servo::getName() const {
    return this->name;
}
void Servo::setBrand(QString brand) {
    this->brand = brand;
}
QString Servo::getBrand() const {
    return this->brand;
}
void Servo::setWidth(qreal width) {
    this->width = width;
}
qreal Servo::getWidth() const {
    return  this->width;
}
void Servo::setHeight(qreal height) {
    this->height = height;
}
qreal Servo::getHeight() const {
    return  this->height;
}
void Servo::setLength(qreal length) {
    this->length = length;
}
qreal Servo::getLength() const {
    return this->length;
}
void Servo::setMaterial(QString material){
    this->material = material;
}
QString Servo::getMaterial() const {
    return this->material;
}
void Servo::setIP(QString ip){
    this->ip = ip;
}
QString Servo::getIP() const {
     return this->ip;
}
void Servo::setTorque(qreal torque){
    this->torque = torque;
}
qreal Servo::getTorque() const{
    return this->torque;
}
void Servo::setDiameter(qreal diameter){
    this->diameter = diameter;
}
qreal Servo::getDiameter() const{
    return this->diameter;
}
void Servo::setShaftSize(qreal shaft_size){
    this->shaftsize = shaft_size;
}
qreal Servo::getShaftSize() const{
    return this->shaftsize;
}
void Servo::setInercia(qreal inercia){
    this->inercia = inercia;
}
qreal Servo::getInercia() const{
    return inercia;
}
void Servo::setMotoHours(quint32 moto_hours){
    this->motohours = moto_hours;
}
quint32 Servo::getMotoHours() const{
    return this->motohours;
}
