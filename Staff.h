#ifndef STAFF_H
#define STAFF_H
#include "Person.h"
#include "Date.h"
#include "string"
#include <fstream>
#include <vector>
#pragma once

class Staff : public Person
{
public:
    Staff();
    ~Staff();

    void setSpecialist();
    std::string getSpecialist();

    void setIDStaff();
    int getIDStaff();

    void setIDApointments(int);

    void displayDetail() override;
    virtual void addPerson() override;
    virtual void removePerson() override;

private:
    std::string specialization;
    int IDStaff;
};

#endif