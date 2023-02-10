#ifndef ROBOT_H
#define ROBOT_H
#include <QPoint>
#include "sensor.h"
#include <robotmessages.h>
#include "exception.h"
#include <QRect>

class Robot
{
public:

    enum State { Ready = 100, Busy, BreakingDown, Stopped };

    Robot();
    Robot(QPoint *point, qreal velocity, int revoluton);
    bool calibration(QPoint &point);

    void setCoordinate(QPoint *point);
    QPoint* getCoordinate(QPoint *point);

    bool moveTo(QPoint &point);

    int getRevolution() const;
    void setRevoluton(int rev_count);

    qreal getVelocity() const;
    void setVelocity(qreal velocity);

    bool writeToLog(QString message);

    unsigned char getJoints()const;
    void setJoints(unsigned char jounts);

    bool animate(enum State state);

private:
    QPoint *point = nullptr;
    /*число оборотов*/
    int revolution;
    /*скорость*/
    qreal velocity;
    unsigned char joints;
    Sensor *sensor[];
};

#endif // ROBOT_H
