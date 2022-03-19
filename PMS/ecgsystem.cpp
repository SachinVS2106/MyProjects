#include "ecgsystem.h"
#include <iostream>
#include "ecglead.h"

using namespace std;
ECGSystem::ECGSystem()
{
    cout << "We are in ECG System" << endl;
    init();
}

ECGSystem::~ECGSystem()
{
    cout << "ECGSystem is destroyed " << endl;
}

ECGSystem::ECGSystem(ECGSystem &ecgsys)
{
    cout << "Copy Constructor of ECG System called" << endl;
    init();
    for (int i=0;i<12;i++) {
        *m_ecgLeads[i] = *ecgsys.m_ecgLeads[i];
    }
}

bool ECGSystem::init() {
    cout << "We are in ECG System init()" << endl;
    m_ecgLeads = new ECGLead*[12];
    for (int i=0;i<12;i++) {
        m_ecgLeads[i] = new ECGLead(this);
        cout << "Lead " << i+1 <<"is connceted to pt" << endl;
    }
    return true;
}

bool ECGSystem::print() {
    cout << "ECG system assigned to person" << endl;
    return true;
}

bool ECGSystem::conncet2HW(ECGHardware *h)
{
    cout << "Connect 2 H/W" <<endl;
    m_ecgHW = h;
    return true;
}

bool ECGSystem::disconnectHW()
{
    cout << "disconnectHW()" << endl;
    return true;
}

void ECGSystem::start()
{
    cout << "ECG System is started" << endl;
    for (int i=0;i<12;i++) {
        m_ecgLeads[i]->start();
    }
}

void ECGSystem::receiveData()
{

}

void ECGSystem::operator=(const ECGSystem& ecgSys)
{
    for (int i=0;i<12;i++) {
            m_ecgLeads[i]->setY(ecgSys.m_ecgLeads[i]->gety());
    }
}
