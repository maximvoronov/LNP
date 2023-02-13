#ifndef SENSOR_H
#define SENSOR_H
#include <QString>
#include <QTime>
#include <QXmlStreamReader>

class  Sensor
{
public:

    enum SensorState { On = 201, Off };
    enum LightSource {};

    virtual void setName(QString name) = 0;
    virtual QString getName() const = 0;

    virtual void setType(QString type) = 0;
    virtual QString getType() const = 0;

    virtual void setCurrent(int current) = 0;
    virtual int getCurrent() const = 0;

    virtual void setLength(float lentht) = 0;
    virtual float getLength() const = 0;

    virtual void setWidth(float width) = 0;
    virtual float getWidth() const = 0;

    virtual void setHeight(float height) = 0;
    virtual float getHeight() const = 0;

    virtual bool readInfo(QXmlStreamReader *reader) = 0;

    //virtual ~Sensor(){};

    //virtual Sensor();



    //QTime response;

};

#endif // SENSOR_H
