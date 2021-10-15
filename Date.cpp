// Name:
// Student Number:
// Date:

#include "Date.h"

Date::Date()
{
  month = 0;
  day = 0;
  year = 0;
}

Date::Date(int m, int d, int y)
{
  month = m;
  day = d;
  year = y;
}

int Date::endOfMonth() const
{
  int finalDay = 0;
  switch (month)
  {
    case 1:
      finalDay = 31;
      break;
    case 2:
	    if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
        finalDay = 29;
      else
        finalDay = 28;
      break;
    case 3:
      finalDay = 31;
      break;
    case 4:
      finalDay = 30;
      break;
    case 5:
      finalDay = 31;
      break;
    case 6:
      finalDay = 30;
      break;
    case 7:
      finalDay = 31;
      break;
    case 8:
      finalDay = 31;
      break;
    case 9:
      finalDay = 30;
      break;
    case 10:
      finalDay = 31;
      break;
    case 11:
      finalDay = 30;
      break;
    case 12:
      finalDay = 31;
      break;
  }
  return finalDay;
}

int Date::getMonth()const
{
  return month;
}

int Date::getDay()const
{
  return day;
}

int Date::getYear()const
{
  return year;
}

void Date::setMonth(int m)
{
  month = m;
}

void Date::setDay(int d)
{
  day = d;
}

void Date::setYear(int y)
{
  year = y;
}

void Date::printDate() const
{
  cout << "Date is: " << month << "/" << day << "/" << year << endl;
}

bool Date::sameDay(const Date& myDate) const
{
  if (day == myDate.day)
    return true;
  else
    return false;
}