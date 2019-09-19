#include <iostream>

using namespace std;

int main()
{
    int var = 5;
    int a = 20;

    cout << *&var << endl;

    //use asterisk as pointers.
    int *p; ///this asterisk is just used to INFORM about that this variable is a POINTER so it is a variable that can point to address of another variable.

    p = &var;

    cout << *p << endl; //sthat asterisk here is used to RETRIEVE (GET) value FROM indicated (pointed) area in our memory(address)

    //*p = 20;
    //var = 60;
    p = &a;
    *p = 60;

    cout << "var: " << var << endl;
    cout << "*p: " << *p <<endl;
    cout << "p: " << p <<endl;
    cout << "a: " << a <<endl;

    int * const p_const = &a; // this is a pointer that has to be intiialized when defined, because it cannot change after defining the thing it is pointing to.

    const int * p_2 = &a;

    const int * const p_3 = &a; //pointer that cannot change the value that it is under address it is pointing to.

    cout <<endl <<endl <<endl;

    int ordinary_var = 10;

    int *ordinary_p = &ordinary_var;

    cout << "ordinary_var: " << ordinary_var <<endl; //integer value
    cout << "&ordinary_var: " << &ordinary_var <<endl; //address
    cout << "ordinary_p: " << ordinary_p <<endl; //value
    cout << "*ordinary_p: " << *ordinary_p <<endl; //integer value from pointed place (ordinary_var)
    cout << "&ordinary_p: " << &ordinary_p <<endl; //address of pointer itself

    return 0;
}
