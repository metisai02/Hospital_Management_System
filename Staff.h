#ifndef STAFF_H
#define STAFF_H
#include "Person.h"
#include "Date.h"
#include "string"
#include "Hospital.h"
#include <sstream>
#include <fstream>
#include <vector>
#pragma once

class Staff : public Person
{
public:
    Staff();
    ~Staff();

    void setSpecialist(std::string);
    std::string getSpecialist();

    void setIDApointments(int);

    virtual void displayDetail() override;
    virtual void addPerson() override;
    virtual void removePerson() override;
    void checkAppointments();
    void earseAppointments(int);

private:
    std::string specialization;
};

#endif