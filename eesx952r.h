#ifndef EESX952R_H
#define EESX952R_H
#include <QFile>
#include "sensor.h"
#include "exception.h"
#include <QXmlReader>
#include <QXmlSimpleReader>
#include <QXmlAttributes>
#include <QXmlStreamReader>
#include <QPixmap>

using namespace std;

class EESX952R: public Sensor
{
public:
    EESX952R();
    bool readInfo(QXmlStreamReader *reader) override;
    void setName(QString name) override;
    void setType(QString type) override;
    void setWidth(float width) override;
    void setCurrent(int current) override;
    void setHeight(float height) override;
    void setLength(float lenght) override;
    QString getName() const override;
    QString getType() const override;
    float getWidth() const override;
    float getHeight() const override;
    float getLength() const override;
    int getCurrent() const override;
    QPixmap* getPicture() const;

private:
    QString name;
    QString type;
    QString power;
    float Lenght;
    float Width;
    float Height;
    int current;
    QXmlStreamReader *sr;
    QPixmap *pix;
    bool read_info;

};

#endif // EESX952R_H
