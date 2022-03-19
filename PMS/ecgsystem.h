#ifndef ECGSYSTEM_H
#define ECGSYSTEM_H

#include"DeviceLayer/ecghardware.h"
using namespace Device;

class ECGLead;
class ECGSystem
{
public:
    ECGSystem();
   ~ECGSystem();
    ECGSystem(ECGSystem& ecgsys);

    bool init();
    bool print();
    bool conncet2HW(Device::ECGHardware *h);
    bool disconnectHW();

    void start();
    void receiveData();

    void operator=(const ECGSystem& ecgSys);


private:
//    ECGLead m_ecgLeads1[12];
//    ECGLead *m_ecgLeads2[12];
    ECGLead **m_ecgLeads;
    Device::ECGHardware *m_ecgHW;
    int m_x;
};

#endif // ECGSYSTEM_H
