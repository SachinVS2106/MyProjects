#ifndef MYDATE_H
#define MYDATE_H
#include<iostream>

using namespace std;

class MyDate
{
public:
    MyDate();
   ~MyDate();
    void init();
    MyDate(int day,int month,int year);

    bool print();

    int getDay() const;
    void setDay(const int day);

    int getMonth() const;
    void setMonth(const int month);

    int getYear() const;
    void setYear(const int year);



private:
    int m_day;
    int m_month;
    int m_year;
};

#endif // MYDATE_H
