#include "robot.h"

Robot::Robot(){
    name = "rm130";
}

Robot::Robot(std::shared_ptr<VerticalDrive> vd,
             std::shared_ptr<SwingDrive> sd,
             std::shared_ptr<ManipulatorTravelDrive> mtd, QString name_l){
    sd->sensor->setName("RK32");
    sd->engine->setName("423f");
    mtd->engine->setName("wf3");
    //vd->encoder[0]->setName(Sensor::SensorGroup::CHEMICAL);
    //sd->encoder->setName("dfdsf");
    name = name_l;
}

QString Robot::getName() const{
    return this->name;
}
void Robot::setName(QString name){
    this->name = name;
}
bool Robot::animate(enum RobotState state){
    switch(state)
    {
        case RobotState::Ready:
        /*animate(one)*/
        return true;
        break;
    case RobotState::Busy:
        /*animate(two)*/
        return true;
        break;
    case RobotState::BreakingDown:
        try {
        //animate(three)
        /*попробовать восстановить состояние*/
    } catch (Exception::RobotException e) {
        e.error_breakingdown(); //write to
        return false;
    }
        break;
    case RobotState::Stopped:
        return true;
        break;
    }
    return false;
}



