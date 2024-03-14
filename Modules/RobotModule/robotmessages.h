#ifndef ROBOTMESSAGES_H
#define ROBOTMESSAGES_H
#include <QString>
#include <QList>

class RobotMessages
{
public:
    RobotMessages();
    RobotMessages(QList<QString> message, int message_counter);

    void setMessage(QList<QString> message);
    QList<QString> getMessage() const;

private:
    QList<QString> message;
    int message_counter;
};

#endif // ROBOTMESSAGES_H
