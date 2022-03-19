#include "ECGSensor.h"
#include "iostream"
using namespace std;
using namespace Device;

ECGSensor::ECGSensor()
{
    cout << "ECG Sensor is Created" <<endl;

}
ECGSensor::ECGSensor(ECGHardware *ecgH)
{
    cout << "ECG Sensensor is Created " <<endl;
    m_recevr = ecgH;
}

ECGSensor::~ECGSensor()
{
    cout << "Destructor" <<endl;
}

void ECGSensor::start()
{
    cout << "ECG Sensor data copy is Started" << endl;
    m_recevr->receiveData();

}

Car


void ECGSensor::init()
{
    cout << "ECG Sensor init" << endl;
}

void Device::ECGSensor::print() {
    cout << "ECG Sensor print()" << endl;
}

void ECGSensor::startCollectingData()
{

}

void ECGSensor::stop()
{

}

int ECGSensor::gety() const
{
    return m_y;
}

void ECGSensor::setY(int y)
{
    m_y = y;
}
