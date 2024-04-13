#ifndef USER_H
#define USER_H
#include "string"
#pragma once

class User
{
public:
    User();
    ~User();

    std::string getUserName();
    void setUserName(std::string);

    void setPassWord(std::string);
    std::string getPassWord();

private:
    std::string userName;
    std::string passWord;
};

#endif