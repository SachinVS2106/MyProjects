#ifndef ADDRESS_H
#define ADDRESS_H
using namespace std;
#include<iostream>
class Address
{
public:
    Address();
   ~Address();
    void print();
    Address(int plot,string cross,string main,string city,int pincode);

    int getPlot() const;
    void setPlot(const int plot);

    string getCross() const;
    void setCross(const string cross);

    string getMain() const;
    void setMain(const string main);

    string getLandMark() const;
    void setLandMark(const string landMark);

    string getCity() const;
    void setCity(const string city);

    int getPinCode() const;
    void setPinCode(const int pinCode);



private:
    int m_plotNumber;
    string m_cross;
    string m_main;
    string m_landMark;
    string m_city;
    int m_pinCode;
};

#endif // ADDRESS_H
