#include "Patient.h"
#include <fstream>
#include <vector>
#include <string>
#include "Hospital.h"

using namespace std;


Patient::Patient()
{

}

Patient::~Patient()
{

}

// int Patient::idPatient{0};

// int Patient::getIDPatient()
// {
//     return idPatient;
// }

void Patient::function()
{
    bool end_program = false;
    while (!end_program)
    {

         cout << "\nChoose your option: \n"
             << "[1]: View your information\n"
             << "[2]: Watch list of doctor\n"
             << "[3]: Book an appointment\n"
             << "[4]: View my an appointment\n"
             << "[5]: View my medical history\n"
             << "[6]: Logout!\n"
             << "Enter your choice: "; 
                int control;
        Appointment a;
        Date d;
        cin >> control;
        switch (control)
        {
        case 1:
            this->displayDetail();
            break;
        case 2:
            Hospital::displayStaffs();
            break;
        case 3:
            a.setPatient(this);
            int idStaff;
            cout << "Enter id of doctor that you want book: ";
            cin >> idStaff;
            Hospital::mapStaff[idStaff].displayDetail();
            a.setStaff(Hospital::mapStaff[idStaff]);
            cout << "Choose date you want book: " << endl;
                unsigned int day;
            cout << "Enter day: ";
            cin >> day;
            d.setDay(day);
            unsigned int month;
            cout << "Enter month: ";
            cin >> month;
            d.setMonth(month);
            unsigned int year;
            cout << "Enter year: ";
            cin >> year;
            d.setYear(year);
            unsigned int hour;
            cout << "Enter hour: ";
            cin >> hour;
            d.setHour(hour);
            unsigned int minute;
            cout << "Enter minute: ";
            cin >> minute;
            d.setMin(minute);
            a.setDateSchedule(d);
            a.addAppointment();
            break;
        case 6:
            cout << "Loggout suceecfully\n";
            Hospital::loggedIn = false;
            end_program = true;
            break;
        default:
            break;
        }           
    }
    
}
void Patient::addPerson()
{
    cout << "Adding new patient into the system" << endl;
    Person::addPerson();

    fstream filePatient;
    filePatient.open("./../data/patient.csv",ios::app);
    if (filePatient.is_open() == 0)
    {
        cout << "Don't open patient file to add information of patient to database" << endl;
        cout << "Please check again, Error system !!!" << endl;
        return;
    }else 
    {

    filePatient << getID() << ','
             << getFirstName() << ','
              << getLastName() << ','
              << getAge() << ','
              << getIDNumber() << ','
              << getBirthDate().getDay() << '/' << getBirthDate().getMonth() << '/' << getBirthDate().getYear() << endl;
    filePatient.close();
    }
    Hospital::mapPatient[getID()] = *this;
    Hospital::mapStaff[1].displayDetail();
}

void Patient::displayDetail()
{
    cout << "\nThis is the informations of Patient!!" << endl;
    Person::displayDetail();
}