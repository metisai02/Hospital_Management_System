
#include "Staff.h"
using namespace std;
Staff::Staff() {}
Staff::~Staff() {}

void Staff::setSpecialist()
{
    string specialization;
    cout << "Enter your specialization: ";
    cin >> specialization;
    this->specialization = specialization;
}
std::string Staff::getSpecialist()
{
    return this->specialization;
}

void Staff::setIDStaff()
{
    int idStaff;
    cout << "Enter idStaff: ";
    cin >> idStaff;
    this->IDStaff = idStaff;
}
int Staff::getIDStaff()
{
    return this->IDStaff;
}

void Staff::displayDetail()
{
    cout << "\nThis is the informations of staff!!" << endl;
    Person::displayDetail();
    cout << "Specialization of staff is " << this->specialization << endl;
}
void Staff::addPerson()
{
    cout << "Adding new staff into the system" << endl;
    Person::addPerson();
    string role = "Doctor";
    setRole(role);
    setSpecialist();
    setIDStaff();
    fstream fileStaff;
    fileStaff.open("data/staff.csv", ios::app);

    fileStaff << getFirstName() << ','
              << getLastName() << ','
              << getAge() << ','
              << getIDNumber() << ','
              << getRole() << ','
              << getSpecialist() << endl;
    fileStaff.close();
}
void Staff::removePerson()
{
}