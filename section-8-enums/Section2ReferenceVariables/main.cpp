#include <iostream>

using namespace std;

int main()
{
    string name = "Agnes";
    string name2 = "lala";

    cout << "Value of Variable: " << name << " " << "address of variable is :" << &name <<endl;

    //ampersand in reference variable declaration indicates you are creating ref varaibles.
    string &nr_6 = name;

    cout << "Value of Variable: " << nr_6 << " " << "address of variable is :" << &nr_6 <<endl;

    nr_6 = name2;
    // can't do &nr_6 = name2

    cout << "Value of Variable: " << nr_6 << " " << "address of variable is :" << &nr_6 <<endl;

    nr_6 = "Scott";

    cout << "Value of Variable: " << name << " " << "address of variable is :" << &name <<endl;

    cout << "Value of Variable: " << nr_6 << " " << "address of variable is :" << &nr_6 <<endl;

    //reference variables must be initialized when created.
    //ref var can't change associations / connections
    //ref variables must be same type as assocaited variables

    return 0;
}
