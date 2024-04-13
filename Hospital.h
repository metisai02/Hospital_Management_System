#ifndef HOSPITAL_H
#define HOSPITAL_H
#include <string>
#include "Staff.h"
#include "Patient.h"
#include "Appointment.h"
#include <map>
#pragma once

class Hospital
{
public:
    Hospital();
    ~Hospital();

private:
    std::map<int, Staff> mapStaff;
    std::map<int, Patient> mapPatient;
    std::map<int, Appointment> mpAppointment;
};

#endif