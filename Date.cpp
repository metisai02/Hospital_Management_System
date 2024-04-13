#include "Date.h"
using namespace std;
Date::Date()
{
}
// Date(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
Date::~Date()
{
}

unsigned int Date::getMin()
{
    return this->min;
}
void Date::setMin()
{
    unsigned int min;
    cout << "Enter min: ";
    cin >> min;
    if (min < 60)
        this->min = min;
    else
        throw invalid_argument("Min is not valid !");
}

unsigned int Date::getHour()
{
    return this->hour;
}
void Date::setHour()
{
    unsigned int hour;
    cout << "Enter hour: ";
    cin >> hour;
    if (min < 24)
        this->hour = hour;
    else
        throw invalid_argument("Hour is not valid !");
}

unsigned int Date::getDay()
{
    return this->day;
}
void Date::setDay()
{
    unsigned int day;
    cout << "Enter day: ";
    cin >> day;
    if (day <= 31)
        this->day = day;
    else
        throw invalid_argument("Day is not valid !");
}

unsigned int Date::getMonth()
{
    return this->month;
}
void Date::setMonth()
{
    unsigned int month;
    cout << "Enter month: ";
    cin >> month;
    if (month <= 12)
        this->month = month;
    else
        throw invalid_argument("Month is not valid !");
}

unsigned int Date::getYear()
{
    return this->year;
}
void Date::setYear()
{
    unsigned int year;
    cout << "Enter year: ";
    cin >> year;
    if (year <= 2024)
        this->year = year;
    else
        throw invalid_argument("year is not valid !");
}

void Date::addFull()
{
    setMin();
    setHour();
    setDay();
    setMonth();
    setYear();
}
void Date::addHalf()
{
    this->min = 0;
    this->hour = 0;
    setDay();
    setMonth();
    setYear();
}
