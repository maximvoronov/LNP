#ifndef ROBOTMESSAGES_H
#define ROBOTMESSAGES_H
#include <QString>

class RobotMessages
{
public:
    RobotMessages();
    RobotMessages(QString message, int message_counter);

    void setMessage(QString message);
    QString getMessage() const;

private:
    QString message;
    int message_counter;
};

#endif // ROBOTMESSAGES_H
