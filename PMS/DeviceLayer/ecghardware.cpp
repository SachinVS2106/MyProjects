#include <iostream>
#include "ecghardware.h"
#include "ECGSensor.h"

using namespace Device;


ECGHardware::ECGHardware()
{
    cout << "ECG Hardware is Created" <<endl;
    m_status = false;
    initSensor();
}
//Scope resolution with deivce namespace
Device::ECGHardware::~ECGHardware()
{
    cout << "Inside ECGHardware Destructor" <<endl;
}

ECGHardware::ECGHardware(const ECGHardware& ecghw)
{
    cout << "Hardware object is created using argument constructor" << endl;
    m_status = false;
    initSensor();

    for (int i=0;i<12;i++) {
        *m_sensors[i] = *ecghw.m_sensors[i];
      //*m_sensors[i].operator(*ecghw.m_sensor[i])
    }
}

void ECGHardware::operator=(const ECGHardware& ecgHW)
{
    cout << "Operator Overloading() of ECG Hardwarwe" << endl;
    for (int i=0;i<12;i++) {
 //           m_sensors[i]->setY(ecgHW.m_sensors[i]->gety());

        *m_sensors[i] = *ecgHW.m_sensors[i];

    }
}


bool ECGHardware::print() {
    cout << "ECG hardware print()" << endl;
    return true;
}

void ECGHardware::initSensor()
{
    cout <<"Sensors initiation is started" << endl;
    m_sensors = new Device::ECGSensor*[12];
    for (int i=0;i<12;i++) {
        m_sensors[i] = new ECGSensor(this);
    }
}

void ECGHardware::start()
{
    cout << "ECG Hardware data copy is started" << endl;
    for (int i=0;i<12;i++) {
        m_sensors[i]->start();
    }
}

void ECGHardware::receiveData()
{
    cout << "Data is Received" << this << endl;
}

bool ECGHardware::getStatus() const
{
    return m_status;
}

void ECGHardware::setStatus(bool status)
{
    cout << "Status was set" << endl;
    m_status = status;
}





