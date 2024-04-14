#ifndef APPOINTMENT_H
#define APPOINTMENT_H
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include "Staff.h"
#include "Date.h"
#include "Patient.h"
#include "Hospital.h"
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

    void setStatus(int);
    int getStatus();
    
    void setDateSchedule(Date);
    Date getDateSchedule();
    void addAppointment();
    void removeAppointment();

private:
    int id;
    Patient patient;
    Staff doctor;
    Date dateSchedule;
    int status;
};

#endif