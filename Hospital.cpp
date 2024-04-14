#include "Hospital.h"
using namespace std;

Hospital::Hospital()
{
}
void Hospital::updateStaffInformation()
{
    // udate staff from database
    fstream fileStaff;
    fileStaff.open("staff.csv", ios::app);
    string line, word;
    vector<string> row;
    getline(fileStaff, line);
    stringstream ssLine(line);
    while (!fileStaff.eof())
    {
        while (getline(ssLine, word, ','))
        {
            row.push_back(word);
        }
        int id = stoi(row[0]);
        mapStaff[id].setFirstName(row[1]);
        mapStaff[id].setLastName(row[2]);
        mapStaff[id].setAge(stoi(row[3]));
        mapStaff[id].setIDNumber(row[4]);
        // set birth day
        std::string day, month, year;
        std::stringstream ss(row[5]);
        std::getline(ss, day, '/');
        std::getline(ss, month, '/');
        std::getline(ss, year, '/');
        Date tmpDate;
        tmpDate.setDay(stoi(day));
        tmpDate.setDay(stoi(month));
        tmpDate.setDay(stoi(year));
        mapStaff[id].setBirthDate(tmpDate);

        mapStaff[id].setRole(row[6]);
        mapStaff[id].setSpecialist(row[7]);
    }
}
void Hospital::updatePatientInformation()
{
}
void Hospital::updateApointments()
{
    // udate staff from database
    fstream fileApp;
    fileApp.open("apointment.csv", ios::app);
    string line, word;
    vector<string> row;
    getline(fileApp, line);
    stringstream ssLine(line);
    while (!fileApp.eof())
    {
        while (getline(ssLine, word, ','))
        {
            row.push_back(word);
        }
        int id = stoi(row[0]);
        int idStaff = stoi(row[1]);
        int idPatient = stoi(row[2]);
        mapAppointment[id].setDocor(mapStaff[idStaff]);
        mapAppointment[id].setPatient(mapPatient[idPatient]);
        std::string day, month, year, hour, min;
        std::stringstream ss(row[3]);
        std::getline(ss, day, '/');
        std::getline(ss, month, '/');
        std::getline(ss, year, '/');
        Date tmpDate;
        tmpDate.setDay(stoi(day));
        tmpDate.setDay(stoi(month));
        tmpDate.setDay(stoi(year));
        std::stringstream ss(row[4]);
        std::getline(ss, hour, ':');
        std::getline(ss, min, ':');
        tmpDate.setMin(stoi(min));
        tmpDate.setHour(stoi(hour));
        mapAppointment[id].setDateSchedule(tmpDate);
    }
}
void Hospital::displayStaffs()
{
    cout << "Display all of staff!\n";
    for (auto &staff : mapStaff)
    {
        cout << "The staff ID is: " << staff.first << endl
             << "The role of staff is: " << staff.second.getRole()
             << "Name is " << staff.second.getFirstName() << " " << staff.second.getLastName() << endl
             << "The specialization is " << staff.second.getSpecialist() << endl;
    }
}
void Hospital::displayPatient()
{
    cout << "Display all of staff!\n";
    for (auto &staff : mapStaff)
    {
        cout << "The staff ID is: " << staff.first << endl
             << "The role of staff is: " << staff.second.getRole()
             << "Name is " << staff.second.getFirstName() << " " << staff.second.getLastName() << endl
             << "The specialization is " << staff.second.getSpecialist() << endl;
    }
}
void Hospital::displayAppointment()
{
}
Hospital::~Hospital()
{
}
