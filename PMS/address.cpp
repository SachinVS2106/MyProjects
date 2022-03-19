#include "address.h"

Address::Address()
{
    cout<< "We are in Adress constructor()" << endl;
}

Address::Address(int plot, string cross, string main, string city, int pincode)
{

}

int Address::getPlot() const {  //can not modify member variables
    return m_plotNumber;
}
void Address::setPlot(const int plotno) {
    this->m_plotNumber = plotno;
}

string Address::getCross() const {
    return m_cross;
}
void Address::setCross(const string cross) {
    this->m_cross = cross;
}

string Address::getCity() const{
    return m_city;
}
void Address::setCity(const string city) {
    this->m_city = city;
}

string Address::getLandMark() const {
    return m_landMark;
}
void Address::setLandMark(const string landMark) {
    this->m_landMark = landMark;
}

int Address::getPinCode() const {
    return m_pinCode;
}
void Address::setPinCode(const int pinCode) {
    this->m_pinCode = pinCode;
}

string Address::getMain() const{
    return m_main;
}

void Address::setMain(const string main) {
    this->m_main = main;
}

void Address::print() {
    cout <<m_plotNumber<<","<< m_cross<<","<< m_main<<","<< m_landMark<<","<< m_city<<","<< m_pinCode<<endl;
}
