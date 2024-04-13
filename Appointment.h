#ifndef APPOINTMENT_H
#define APPOINTMENT_H
#include <iostream>
#include <string>
#include "Staff.h"
#include "Date.h"
#include "Patient.h"
#pragma once

class Appointment
{
public:
    Appointment();
    ~Appointment();

    void setPatient(Patient &);
    Patient getPatient();

    void setDocor(Staff &);
    Staff getDoctor();

    void addAppointment();
    void removeAppointment();

private:
    Patient patient;
    Staff doctor;
    Date dateSchedule;
};

#endif