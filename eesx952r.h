#ifndef EESX952R_H
#define EESX952R_H
#include <QFile>
#include "device.h"
#include <QXmlReader>
#include <QXmlSimpleReader>
#include <QXmlAttributes>
#include <QXmlStreamReader>
#include <QPixmap>
#include "exception.h"

using namespace std;
/**
 * @brief The EESX952R class
 *
 */
class EESX952R: public Device
{
public:
    EESX952R();
    bool readInfo(QXmlStreamReader *reader);
    void setName(QString name) override;
    //void setType(QString type) override;
    void setWidth(qreal width) override;
    //void setCurrent(std::vector<qreal> current, qreal value) override;
    void setHeight(qreal height) override;
    void setLength(qreal lenght) override;
    QString getName() const override;
    //QString getType() const override;
    qreal getWidth() const override;
    qreal getHeight() const override;
    qreal getLength() const override;
    //std::vector<qreal> getCurrent() const override;
    QPixmap* getPicture() const;

private:
    QString name, type;
    qreal lenght, width, height;
    std::vector<qreal> current;
    QXmlStreamReader *sr;
    QPixmap *pix;
    bool read_info;

};

#endif // EESX952R_H
