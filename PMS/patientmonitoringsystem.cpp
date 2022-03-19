#include "patientmonitoringsystem.h"
#include "person.h"
PatientMonitoringSystem::PatientMonitoringSystem()
{
    cout << "We are in PatientMonitoringSystem Constructor" << endl;
    m_addres=nullptr;
    iniit();
}

//PatientMonitoringSystem::PatientMonitoringSystem(int a,int b) {
//    iniit();
//}


bool PatientMonitoringSystem::iniit()
{
    cout << "Inside Patient monitoring system init()" << endl;
    m_hospitalName= "RC_Hospital";
    m_phoNo= "788778768";
    m_licenceNo="456LMA";
    m_ward= 100;

    if (m_addres == nullptr){
        m_addres =new Address;
        m_addres->setPlot(100);
        m_addres->setCross("2nd cross");
        m_addres->setMain("3rd main");
        m_addres->setCity("Bangalore");
        m_addres->setLandMark("royal county park");
        m_addres->setPinCode(560083);
    }
    initECGHardware();
    return true;
}

bool PatientMonitoringSystem::inputPatientDetails() {
    cout << "Inside inputPatientDetails()" << endl;
    cout << "Enter Number of patient: ";
    cin >> m_count;
    m_pat = new Person* [m_count];
    if (currecnt_Patient>m_count) {
        cout << "Beds are full " << endl;
        return false;
    }

    for (int i=0;i<m_count;i++) {
        Person *pat = new Person;
        m_pat[currecnt_Patient++] = pat;
        string name;
        string mobileNo;
        int age;
        cout << "Enter Pat name: ";
        cin >> name;
        pat->setName(name);
        cout << "Enter Pat Mobile Number: ";
        cin >> mobileNo;
        pat->setMobileNo(mobileNo);
        cout << "Enter Pat Age: ";
        cin >> age;
        pat->setAge(age);
        pat->init();
        //        m_pat[i]->print();
    }
    print();
    return true;
}



bool PatientMonitoringSystem::initECGForPerson() {
    cout << "Inside initECGForPerson()" <<endl;
    int whichPerson;
    cout << "Enter which person get ECG System: ";
    cin >>whichPerson;
    if(whichPerson>currecnt_Patient) {
        cout << "Patient does not exist"<<endl;
        return false;
    }
    cout << "ECG is initiated for " << whichPerson +1<< "st Patient"<<endl<< m_pat[whichPerson]->print() << endl;
    m_pat[whichPerson]->initECG();
    int found = -1;
    for (int i=0;i<10; i++) {
        if (m_ecgHardware[i]->getStatus()== false) {
            found =i;
            break;
        }
    }
    if (found == -1) {
        cout << "Hardware system not found" <<endl;
        return 1;
    }
    else {
    ECGHardware *ech = m_ecgHardware[found];
    m_pat[whichPerson]->registerECGHardware(ech);
    }
    return true;
}

bool PatientMonitoringSystem:: print(){
    cout << "Inside PtMonitoring s/m print ()" << endl;
    cout << "\n";
    cout << "**********Hospital Details**********" <<endl;
    cout << "We are in Patient monitoring system print()" << endl;
    cout << "Hospital Name: " <<m_hospitalName <<endl;
    cout << "Phone Number: " << m_phoNo << endl;
    cout << "Licence Number: " << m_licenceNo <<endl;
    cout << "Ward Number : " << m_ward <<endl;
    cout << "Address:" <<endl;
    m_addres->print();
    for (int i=0;i<m_count;i++) {
        m_pat[i]->print();
    }

    return true;
}

bool PatientMonitoringSystem:: initECGHardware() {
    cout << "Inside initECGHardware ()" << endl;
    m_ecgHardware = new Device::ECGHardware*[10];
    for (int i=0;i<10;i++) {
        m_ecgHardware[i] = new Device::ECGHardware;
//        cout << "Adress of object: " << m_ecgHardware[i] << endl;

      //m_ecgHardware[i].operator=(m_ecgHardware[i+1]);
    }
    return true;
}
