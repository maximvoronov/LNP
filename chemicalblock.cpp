#include "chemicalblock.h"

ChemicalBlock::ChemicalBlock()
{

}
ChemicalBlock::~ChemicalBlock()
{

}
void ChemicalBlock::setName(QString name){
    this->name = name;
}
QString ChemicalBlock::getName() const{
    return this->name;
}
void ChemicalBlock::setMass(qreal mass){
    this->mass = mass;
}
qreal ChemicalBlock::getMass() const{
    return this->mass;
}
void ChemicalBlock::setBrand(QString brand){
    this->brand = brand;
}
QString ChemicalBlock::getBrand() const{
    return this->brand;
}
void ChemicalBlock::setWidth(qreal width){
    this->width = width;
}
qreal ChemicalBlock::getWidth() const{
    return this->width;
}
void ChemicalBlock::setHeight(qreal height){
    this->height = height;
}
qreal ChemicalBlock::getHeight() const{
    return this->height;
}
void ChemicalBlock::setLength(qreal length){
    this->length = length;
}
qreal ChemicalBlock::getLength() const{
    return this->length;
}
void ChemicalBlock::setMaterial(QString material){
    this->material = material;
}
QString ChemicalBlock::getMaterial() const{
    return this->material;
}
