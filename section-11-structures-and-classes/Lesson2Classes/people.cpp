#include "people.h"
#include <iostream>

using namespace std;

void PersonalData::setAge(int age)
{
    if (age < 0)
        this->age = 0;
    else
        this->age = age;
};

short PersonalData::getAge()
{
    return age;
};

PersonalData::PersonalData()
{
    static int i = 0;
    cout << "This constructor has been just invoked " << ++i << endl;
    age = 10;

    p = new int[5];
}

PersonalData::PersonalData(short age)
{
    cout << "This cis a different instructor" << endl;
    this ->age = age;
}

PersonalData::~PersonalData()
{
    static int j = 0;
    cout << "This destructor has been just invoked " << ++j << endl;

    delete [] p; //THIS FREES MEMORY;
}




