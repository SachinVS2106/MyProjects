#include <iostream>
#include "patientmonitoringsystem.h"
using namespace std;


int main()
{
    cout << "We are in main" << endl;
    PatientMonitoringSystem *pms= new PatientMonitoringSystem();
    pms->inputPatientDetails();
    pms->initECGForPerson();
//    pms->print();
//    pms->initECG(10);
//    Person *p = new Person;
//    p->setName("sachin");
//    p->setAge(25);
//    p->setMobileNo("122228676");
//    pms->addPerson(p);
//    PatientMonitoringSystem *pms1= new PatientMonitoringSystem(10,20);
    return 0;
}
