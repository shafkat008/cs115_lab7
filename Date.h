// Name:
// Student Number:
// Date:

#ifndef __DATE_H__  
#define __DATE_H__


#include <iostream>
using namespace std;

class Date
{
  private:
    int month;
    int day;
    int year;
  public:
    Date();
    Date(int m, int d, int y);
    int endOfMonth() const;
    int getMonth() const;
    int getDay() const;
    int getYear() const;
    void setMonth(int m);
    void setDay(int d);
    void setYear(int y);
    void printDate() const;
    bool sameDay(const Date& myDate) const;
};


#endif