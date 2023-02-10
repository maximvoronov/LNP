#include "robotmessages.h"

RobotMessages::RobotMessages()
{}

RobotMessages::RobotMessages(QString message, int message_counter) : message(), message_counter(0)
{
}

void RobotMessages::setMessage(QString message){
    this->message = message;
}

QString RobotMessages::getMessage() const
{
    return message;
}


