#ifndef ECGHARDWARE_H
#define ECGHARDWARE_H
#include <iostream>


using namespace std;

namespace Device {
class ECGSensor;
class ECGHardware
{
public:
    ECGHardware();
    ~ECGHardware();
    ECGHardware(const ECGHardware& ecghw);

    void operator=(const ECGHardware& ecgHW);

    void start();
    void receiveData();

    bool print();
    void initSensor();

    bool getStatus() const;
    void setStatus(bool status);

private:
    ECGSensor **m_sensors;
    bool m_status;


};
}

#endif // ECGHARDWARE_H
