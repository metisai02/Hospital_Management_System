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
    cin >> control;
    if (control.compare("N") == 1)
    {
        this->patient.addPerson();
    }
    cout << "Choose a doctor that you want to take apointment!!!" << endl;
    string firstname;
    string lastname;
    int age;
    string IDnumber;
    string role;
    string specialization;
    // reading stafff data from CSV file
    fstream fileStaff;
    fileStaff.open("staff.csv", ios::app);
    string line, word;
    vector<string> row;
    getline(fileStaff, line);
    stringstream ssLine(line);
    while (getline(ssLine, word, ','))
    {
        row.push_back(word);
    }
    
    setPatient(patient);
    setDocor(doctor);
}

void Appointment::removeAppointment()
{
}