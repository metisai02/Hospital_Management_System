#ifndef HOSPITAL_H
#define HOSPITAL_H
#include <string>
#include "Staff.h"
#include "Patient.h"
#include "Appointment.h"
#include "Admin.h"
#include <map>
#pragma once

class Hospital
{
public:
    Hospital();
    ~Hospital();
    static void updateStaffInformation();
    static void updatePatientInformation();
    static void updateApointments();

    static void displayStaffs();
    static void displayPatient();
    static void displayAppointment();

    static void login();
    static void logout();
    static void registerAccount();


private:
    friend class Appointment;
    friend class Staff;
    static std::map<int, Staff> mapStaff;
    static std::map<int, Patient> mapPatient;
    static std::map<int, Appointment> mapAppointment;
    static std::map<int, Admin> mapAdmin;
};

#endif