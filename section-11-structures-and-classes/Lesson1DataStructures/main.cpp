#include <iostream>

using namespace std;

//how to declare data structures.
struct personalData
{
    string name;
    string surname;
    string telephoneNumber;
    short age;
}a,b;

void test(personalData *);

int main()
{
    personalData person[5];
    a.age =50;

    person[0].name = "Brandon";
    person[1].name = "Cameron";
    person[0].surname = "Yu";
    person[0].telephoneNumber = "3108971813";
    person[0].age = 22;
/*
    cout << person[1].name << endl;
    cout << person[0].surname << endl;
    cout << person[0].telephoneNumber << endl;
    cout << person[0].age << endl;
*/

/*
    cout << (*person).name << endl;
    cout << (*&person[0]).name << endl;
    cout << person->name << endl;
    cout << (person+1)->name << endl;
*/

    personalData *p = &person[0];
    cout << p -> name <<endl;

    test(p);

    cout << p -> name <<endl;
    return 0;
}

void test(personalData *person)
{
    person->name = "Agnes";
}
