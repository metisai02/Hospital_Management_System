#include "Appointment.h"
using namespace std;
Appointment::Appointment()
{
}

Appointment::~Appointment()
{
}
void Appointment::setPatient(Patient &patient)
{
    this->patient = patient;
}
Patient Appointment::getPatient()
{
    return this->patient;
}

void Appointment::setDocor(Staff &doctor)
{
    this->doctor = doctor;
}
Staff Appointment::getDoctor()
{
    return this->doctor;
}
void Appointment::setDateSchedule(Date schedule)
{
    this->dateSchedule = schedule;
}
Date Appointment::getDateSchedule()
{
}
void Appointment::setStatus(int status)
{
    this->status = (status ? 1 : 0);
}
int Appointment::getStatus()
{
    return this->status;
}
void Appointment::addAppointment()
{
    // serch in data base and then adding patient and doctor
    string control;
    cout << "Did patient register yet? Y or N";
    cin >> control;
    if (control.compare("N") == 1)
    {
        this->patient.addPerson();
    }
    else
    {
        Hospital::displayStaffs();
        int tmp_id;
        cout << "Enter your ID patient: ";
        cin >> tmp_id;
    }
    cout << "Choose a ID doctor that you want to take apointment!!!" << endl;
    Hospital::displayStaffs();
    int idStaff;
    cin >> idStaff;
    this->doctor = Hospital::mapStaff[idStaff];
}

void Appointment::removeAppointment()
{
}