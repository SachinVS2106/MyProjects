#ifndef PERSON_H
#define PERSON_H

#include<iostream>
#include"mydate.h"
#include "ecgsystem.h"
#include <DeviceLayer/ecghardware.h>
using namespace std;

class Person
{
    enum GENDER {
        MALE = 10,
        FEMALE,
        TRANS
    };

public:
    Person();

    bool init();

    string getName() const;
    void setName(const string name);

    string getMobileNo() const;
    void setMobileNo(const string mobileNo);

    int getAge() const;
    void setAge(const int age);

    MyDate getDate() const;
    MyDate setDate(const MyDate date);

    bool initECG();
    bool print();

    bool registerECGHardware(Device::ECGHardware *h);
    bool unregisterECGHardware();
private:
    string m_name;
    string m_mobileNo;
    int m_age;
    GENDER m_gender;
    MyDate *m_date;     //to store the day,week of the day mothe and year.
    ECGSystem* m_system;
    Device::ECGHardware *m_ecgHardware;

};

#endif // PERSON_H
