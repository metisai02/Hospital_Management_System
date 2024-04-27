#ifndef PATIENT_H
#define PATIENT_H
#include <iostream>
#include <string>
#include "Person.h"

// #pragma once

class Patient : public Person
{
public:
    Patient();
    ~Patient();
    virtual void function() override;
    virtual void displayDetail() override;
    virtual void addPerson() override;
    // virtual void removePerson() override;
    // static int getIDPatient() ;
private:
    // static int idPatient;
};

#endif