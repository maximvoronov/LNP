#include "robot.h"

Robot::Robot(){
}

Robot::Robot(QPoint *point, qreal velocity, int revoluton) : velocity(0.0), revolution(0)
{
    point = new QPoint(0,0);
}

qreal Robot::getVelocity()const{
    return velocity;
}

void Robot::setVelocity(qreal velocity){
    this->velocity = velocity;
}

int Robot::getRevolution() const{
    return this->revolution;
}

void Robot::setRevoluton(int rev_count){
    this->revolution = rev_count;
}

bool Robot::writeToLog(QString message){
    return false;
}

bool Robot::animate(enum State state){
    return false;
}


