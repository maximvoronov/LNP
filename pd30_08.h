#ifndef PD30_08_H
#define PD30_08_H
#include <device.h>
#include <encoder.h>

class PD30_08 : public Device, public Encoder
{
public:
    PD30_08();

    ~PD30_08();

    void setName(QString name) override;
    QString getName() const override;

    void setBrand(QString brand) override;
    QString getBrand() const override;

    void setWidth(qreal width) override;
    qreal getWidth() const override;

    void setHeight(qreal height) override;
    qreal getHeight() const override;

    void setLength(qreal lenght) override;
    qreal getLength() const override;

    void setKind(QString kind) override;
    QString getKind() const override;

    void setShaftSize(qreal shaft_size) override;
    qreal getShaftSize() const override;

    void setOutputType(QString output_type) override;
    QString getOutputType() const override;

    void setEncoderResolution(qint32 encoder_resolution) override;
    qint32 getEncoderResolution() const override;


private:
    qint32 encoder_resolution;
    qreal shaft_size;
    qreal supply_voltage, wattage, ressistance;
    qreal length, height, width;
    std::vector<qreal> voltage, current;
    QString name, brand, output_type, kind;
protected:
    qint8 counter;
};

#endif // PD30_08_H
