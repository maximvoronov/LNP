#include "bearing.h"

Bearing::Bearing()
{

}
Bearing::Bearing(qreal B, qreal D,
        qreal d, qreal r,
        qreal f0, qreal Cr,
        qreal C0r, qreal mass,
        QString type,
        QString name, QString brand, QString series)
    : B(0), D(0), d(0), r(0), f0(0), Cr(0), C0r(0), mass(0),  type(""), name(""),  brand(""),  series("")
{

}

void Bearing::setLength(qreal length){
    this->length = length;
}
qreal Bearing::getLength() const{
    return this->length;
}
void Bearing::setWidth(qreal width){
    this->width = width;
}
qreal Bearing::getWidth() const{
    return this->width;
}
void Bearing::setHeight(qreal height){
    this->height = height;
}
qreal Bearing::getHeight() const{
    return this->height;
}
void Bearing::setB(qreal B){
    this->B = B;
}
qreal Bearing::getB() const{
    return this->B;
}
void Bearing::setD(qreal D){
    this->D = D;
}
qreal Bearing::getD() const{
    return this->D;
}
void Bearing::setd(qreal d){
    this->d = d;
}
qreal Bearing::getd() const{
    return this->d;
}
void Bearing::setr(qreal r){
    this->r = r;
}
qreal Bearing::getr() const{
    return this->r;
}
void Bearing::setCr(qreal Cr){
    this->Cr = Cr;
}
qreal Bearing::getCr() const{
    return this->Cr;
}
void Bearing::setf0(qreal f0){
    this->f0 = f0;
}
qreal Bearing::getf0() const{
    return this->f0;
}
void Bearing::setC0r(qreal C0r){
    this->C0r = C0r;
}
qreal Bearing::getC0r() const{
    return this->C0r;
}
void Bearing::setMass(qreal mass){
    this->mass = mass;
}
qreal Bearing::getMass() const{
    return this->mass;
}
void Bearing::setMaterial(QString material){
    this->material = material;
}
QString Bearing::getMaterial() const{
    return this->material;
}
void Bearing::setSeries(QString series){
    this->series = series;
}
QString Bearing::getSeries() const{
    return this->series;
}
void Bearing::setBrand(QString brand){
    this->brand = brand;
}
QString Bearing::getBrand() const{
    return this->brand;
}
void Bearing::setType(QString type){
    this->type = type;
}
QString Bearing::getType() const{
    return this->type;
}
QString Bearing::getName() const{
    return this->name;
}
void Bearing::setName(QString name){
    this->name = name;
}

QString Bearing::getIP() const{
    return this->ip;
}
void Bearing::setIP(QString ip){
    this->ip = ip;
}

qreal Bearing::getOuterDiameter() const{
    return this->outer_diameter;
}
void Bearing::setOuterDiameter(qreal outer_diameter){
    this->outer_diameter = outer_diameter;
}
qreal Bearing::getInnerDiameter() const{
    return this->inner_diameter;
}
void Bearing::setInnerDiameter(qreal inner_diameter){
    this->inner_diameter = inner_diameter;
}
