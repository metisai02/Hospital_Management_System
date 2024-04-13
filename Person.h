#ifndef PERSON_H
#define PERSON_H
#include <string>
#include <iostream>
#include <fstream>
#include <stdexcept>
#include "Date.h"

// #include "User.h"

#pragma once

class Person
{
public:
    // Person(std::string, std::string, int, std::string, Date, User);
    Person();
    ~Person();

    void setFirstName();
    std::string getFirstName();

    void setLastName();
    std::string getLastName();

    void setAge();
    int getAge();

    void setIDNumber();
    std::string getIDNumber();

    void setBirthDate();
    Date getBirthDate();

    virtual void addPerson();
    virtual void removePerson();
    virtual void displayDetail();

private:
    std::string firstName;
    std::string lastName;
    int age;
    std::string IDNumber;
    Date birthDay;
    // User user;
};

#endif