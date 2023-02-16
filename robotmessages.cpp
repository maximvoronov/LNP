#include "robotmessages.h"

RobotMessages::RobotMessages()
{}

RobotMessages::RobotMessages(QList<QString> message, int message_counter) : message(), message_counter(0)
{
}

void RobotMessages::setMessage(QList<QString> message){
    this->message = message;
}

QList<QString> RobotMessages::getMessage() const
{
    return message;
}


