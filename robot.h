#ifndef ROBOT_H
#define ROBOT_H
#include <robotmessages.h>
#include <verticaldrive.h>

class Robot
{
public:

    enum State { Ready = 100, Busy, BreakingDown, Stopped };

    virtual bool animate(enum State state) = 0;
private:
    VerticalDrive *vd;

};

#endif // ROBOT_H
