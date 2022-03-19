#ifndef ECGSENSOR_H
#define ECGSENSOR_H
#include "ecghardware.h"
namespace Device {
class ECGSensor
{
    ECGSensor();
public:
    ECGSensor(ECGHardware *ecgH);
    ~ECGSensor();

    void start();
    void operator=(const ECGSensor& ecgSensor);
    void init();
    void print();
    void startCollectingData();
    void stop();

    int gety() const;
    void setY(int y);

private:
    ECGHardware *m_recevr;
    int m_y;

};

}

#endif // ECGSENSOR_H
