
#include "Staff.h"
using namespace std;
Staff::Staff() {}
Staff::~Staff() {}

void Staff::setSpecialist(string specialization)
{

    this->specialization = specialization;
}
std::string Staff::getSpecialist()
{
    return this->specialization;
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
    string specialization;
    cout << "Enter your specialization: ";
    cin >> specialization;
    setSpecialist(specialization);
    fstream fileStaff;
    fileStaff.open("./data/staff.csv", ios::app);

    fileStaff << getFirstName() << ','
              << getLastName() << ','
              << getAge() << ','
              << getIDNumber() << ','
              << getRole() << ','
              << getSpecialist() << endl;
    fileStaff.close();
}
void Staff::checkAppointments()
{
    int coutAppointment = 0;
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
        if (stoi(row[1]) == this->getID())
        {
            int idStaff = stoi(row[2]);
            int status = stoi(row[5]);
            cout << "Your appointment id " << row[0] << endl
                 << "Patient name is " << Hospital::mapPatient[idStaff].getFirstName() << " "
                 << Hospital::mapPatient[idStaff].getLastName() << endl
                 << "Status is " << (status ? "Wating" : "Checked") << endl;
        }
    }
    char control;
    do
    {
        cout << "Do you want to check any patient appointment??? Y or N\n";
        cin >> control;
        if (control == 'Y')
        {
            int idApp;
            cout << "Enter id appointment: " << endl;
            cin >> idApp;
            Hospital::mapAppointment[idApp].setStatus(1);
        }
    } while (control == 'N');
}
void Staff::earseAppointments(int idApp)
{
    if (Hospital::mapAppointment.erase(idApp))
    {
        cout << "Earse id appointment " << idApp << "successfully" << endl;
    }
    else
    {
        cout << "There is no ID appointment " << endl;
    }
}
void Staff::removePerson()
{
}