#include "person.h"
#include "mydate.h"
#include "ecglead.h"
Person::Person()
{
    cout << "Inside person constructor" << endl;
    m_date=nullptr;
}

bool Person::init()
{
    int day;
    int month;
    int year;
    cout << "Enter Pat Day: ";
    cin >> day;
    cout << "Enter Pat Month: ";
    cin >> month;
    cout << "Enter Pat Year: ";
    cin >> year;

    if (m_date == nullptr ) {
        m_date= new MyDate(day,month,year);
    }


    return true;
}

string Person::getName() const {
    return m_name;
}

void Person::setName(const string name) {
    this->m_name = name;
}

string Person::getMobileNo() const {
    return m_mobileNo;
}

void Person::setMobileNo(const string mobileNo) {
    this->m_mobileNo = mobileNo;
}

int Person::getAge() const {
    return m_age;
}

void Person::setAge(const int age) {
    this->m_age = age;
}


bool Person:: print() {
    cout << "Inside Person Print()" << endl;
    cout << "**********Patient Details**********" << endl;
    cout << "Patient Name: "<< m_name << endl;
    cout << "Patient Mobile NUmber: " << m_mobileNo << endl;
    cout << "Patient Age: " <<m_age << endl;
    m_date->print();
    cout << "We are out off Person Print()" << endl;
    return true;
}


bool Person::initECG() {
    cout << "Started initiation of ECG System" << endl;
    m_system = new ECGSystem;
    ECGSystem ecgSystem = *m_system;
//  ECGSystem ecgSystem(*m_system);
//  ecgSystem = *m_system;
    return true;
}

bool Person::registerECGHardware(Device::ECGHardware *h) {
    cout << "Inside registerECGHardware ()" << endl;
    m_ecgHardware = h;
    m_ecgHardware->setStatus(true);
    m_ecgHardware->start();

    ECGHardware ecgHardware;
    ecgHardware = *m_ecgHardware;

    ECGHardware ecgHw1 = *m_ecgHardware;
//    ECGHardware ecgHw1(*m_ecgHardware);
    return true;
}

bool Person::unregisterECGHardware() {
    cout << "Inside unregisterECGHardware()" <<endl;
    m_ecgHardware->setStatus(false);
    m_ecgHardware = nullptr;
    return true;
}
