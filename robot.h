#ifndef ROBOT_H
#define ROBOT_H
#include <robotmessages.h>
#include <verticaldrive.h>
#include <swingdrive.h>
#include <manipulatortraveldrive.h>
#include <exception.h>

class LNPRWin;
class Robot
{
public:
    enum class RobotState { Ready, Busy, BreakingDown, Stopped };
    enum class VerticalDriveEvents { Engine, Sensor, Brake };
    friend class LNPRWin;
    Robot();
    Robot(std::shared_ptr<VerticalDrive> vd,
          std::shared_ptr<SwingDrive> sd,
          std::shared_ptr<ManipulatorTravelDrive> mtd, QString name);

    void setVerticalDriveSensor(qreal sensor);
    qreal getVerticalDriveSensor() const;

    QString getName() const;
    void setName(QString name);

    bool setConnection();
    bool animate(enum RobotState state);
    Q_DISABLE_COPY_MOVE(Robot);
private:
    std::mutex rb_mutex;
    QString name;
    bool flag;
    std::unique_ptr<RobotMessages> msg;
    std::shared_ptr<VerticalDrive> vd;
    std::shared_ptr<SwingDrive> sd;
    std::shared_ptr<ManipulatorTravelDrive> mtd;

};

#endif // ROBOT_H
