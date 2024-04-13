
#include "Person.h"
using namespace std;
Person::Person()
{
}
Person::~Person()
{
}
void Person::setFirstName()
{
    string firstname;
    cout << "Enter first name: ";
    cin >> firstname;
    this->firstName = firstname;
}
std::string Person::getFirstName()
{
    return this->firstName;
}

void Person::setLastName()
{
    string lastname;
    cout << "Enter last name: ";
    cin >> lastname;
    this->lastName = lastname;
}
std::string Person::getLastName()
{
    return this->lastName;
}

void Person::setAge()
{
    int age;
    cout << "Enter age: ";
    cin >> age;
    if (age > 0 && age < 100)
        this->age = age;
    else
        throw invalid_argument("\nThe age no valid!!");
}
int Person::getAge()
{
    return this->age;
}

void Person::setIDNumber()
{
    string idNumber;
    cout << "Enter ID number with 10 digits: ";
    cin >> idNumber;
    if (idNumber.size() == 10)
        this->IDNumber = idNumber;
    else
        throw invalid_argument("Please enter 10 digits for ID number");
}
std::string Person::getIDNumber()
{
    return this->IDNumber;
}
void Person::setBirthDate()
{

    cout << "Set your birth day" << endl;
    this->birthDay.addHalf();
}
Date Person::getBirthDate()
{
    return this->birthDay;
}

void Person::addPerson()
{
    setFirstName();
    setLastName();
    setAge();
    setBirthDate();
    setIDNumber();
}
void Person::removePerson()
{
}
void Person::displayDetail()
{
    cout << "\nThe person is " << firstName << " " << lastName << endl
         << "Age is " << age << endl
         << "Birthday " << birthDay.getDay() << '/' << birthDay.getMonth() << '/' << birthDay.getYear() << endl
         << "ID number is " << IDNumber << endl;
}