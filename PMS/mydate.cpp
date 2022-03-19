#include "mydate.h"

MyDate::MyDate()
{
    cout << "We are in MyDate constructor" << endl;

}
MyDate::MyDate(int day,int month,int year) {
    m_day = day;
    m_month = month;
    m_year = year;
}

bool MyDate::print() {
    cout << "Date of bith :" << m_day << "/" << m_month << "/" << m_year<< endl;
    return true;
}


int MyDate::getDay() const {
    return m_day;
}

void MyDate::setDay(const int date) {
    this->m_day = date;
}

int MyDate::getMonth() const {
    return m_month;
}

void MyDate::setMonth(const int month) {
    this->m_month = month;
}

int MyDate::getYear() const {
    return m_year;
}

void MyDate::setYear(const int year) {
    this->m_year = year;
}
