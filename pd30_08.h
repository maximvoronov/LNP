#ifndef PD30_08_H
#define PD30_08_H
#include "encoder.h"

class PD30_08 : public Encoder
{
public:
    PD30_08();

    void setName(QString name) override;
    void setShaftSize(std::vector<qreal> shaft_size, qreal value) override;
    void setBrand(QString brand) override;
    void setEncoderResolution(std::vector<qint32> encoder_resolution, qint32 value) override;
    void setOutputType(QString output_type) override;
    void setSupplyVoltage(std::vector<qreal> voltage, qreal value) override;

    QString getName() const override;
    QString getBrand() const override;
    QString getOutputType() const override;
    std::vector<qint32> getEncoderResolution() const override;
    std::vector<qreal> getShaftSize() const override;
    std::vector<qreal> getSupplyVoltage() const override;

    ~PD30_08();

private:
    std::vector<qint32> encoder_resolution;
    std::vector<qreal> shaft_size;
    std::vector<qreal> supply_voltage;
    QString name, brand, output_type;
protected:
    qint8 counter;
};

#endif // PD30_08_H
