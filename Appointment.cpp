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
void Appointment::addAppointment()
{
    // serch in data base and then adding patient and doctor
    string control;
    cout << "Did patient register yet? Y or N";

    setPatient(patient);
    setDocor(doctor);
}

void Appointment::removeAppointment()
{
}