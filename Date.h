#ifndef DATE_H
#define DATE_H
#include <stdexcept>
#include <iostream>

#pragma once

class Date
{
public:
    Date();
    // Date(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
    ~Date();

    unsigned int getMin();
    void setMin();

    unsigned int getHour();
    void setHour();

    unsigned int getDay();
    void setDay();

    unsigned int getMonth();
    void setMonth();

    unsigned int getYear();
    void setYear();

    void addFull();
    void addHalf();

private:
    unsigned int min;
    unsigned int hour;
    unsigned int day;
    unsigned int month;
    unsigned int year;
};

#endif