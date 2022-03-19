#include "ecglead.h"
#include <iostream>

using namespace  std;
ECGLead::ECGLead()
{
    cout << "We are in ECG lead() constructor" <<endl;
}

ECGLead::ECGLead(ECGSystem *ecgLd)
{
    m_recevr = ecgLd;
}

void ECGLead::start()
{
    cout << "ECG Lead is Started" << endl;
    m_recevr->receiveData();
}

void ECGLead::operator=(const ECGLead &ecgL)
{
    cout << "Value is assigned to lead" << endl;
    this->m_y = ecgL.m_y;
}

int ECGLead::gety() const
{
    return m_y;
}

void ECGLead::setY(int y)
{
    m_y = y;
}

bool print () {
    cout << "Lead is conncted";
    return true;
}
