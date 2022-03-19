#ifndef PATIENTMONITORINGSYSTEM_H
#define PATIENTMONITORINGSYSTEM_H
#include<address.h>
#include <iostream>
#include <person.h>
#include "DeviceLayer/ecghardware.h"
using namespace std;
using namespace Device;
class PatientMonitoringSystem
{

public:
    bool iniit();
    PatientMonitoringSystem(int a,int b);
    PatientMonitoringSystem();
   ~PatientMonitoringSystem();
    bool inputPatientDetails();
    bool print();
    bool initECGForPerson();
    bool initECGHardware ();
//    bool addPerson(Person *p);


private:
    string m_hospitalName;
    string m_phoNo;
    Address* m_addres;
    string m_licenceNo;
    int m_ward;
    int currecnt_Patient=0;
//    Person *m_pat[100];
    Person** m_pat;
    int m_count;
    ECGHardware **m_ecgHardware;

};

#endif // PATIENTMONITORINGSYSTEM_H
