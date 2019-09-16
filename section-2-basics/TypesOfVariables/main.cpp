#include <iostream>

using namespace std;

int main()
{
    //Type_Of_Varaible nameOfVaraiable;
    //Type_Of_Varaible nameOfVaraiable1 nameOfVaraiable2 nameOfVaraiable3;

    int a = 40, b, c = 20;
    cout << "a : " << a << " address: " << &a << endl;
    cout << "b : " << b << " address: " << &b << endl;
    cout << "c : " << c << " address: " << &c << endl;

    short t1 = 5; //-32768 to 32767, 2 BYTES. Short is the same as short int

    cout << t1 << endl;

    float t2 = 5.12; //float is 4 bytes.
    double t3 = 5.12; //double is 8 bytes.

    cout << t2 << endl;
    cout << t3 << endl;

    char t4 ='a';
    cout << t4 << endl;

    string t5 = "Hello World!";
    cout << t5 << endl;

    string x = "part1";
    string y = "part2";
    string combineStrings = x + " " + y;

    cout << combineStrings <<endl;

    //boolean : true or false

    bool t6 = true;
    cout << t6 << endl; //consolled out as 1;

    unsigned short t7 = 25293; //0 to 65535
    cout << t7 << endl;

    const string NAMEOFGAME = "Conqueror of C++";
    cout << NAMEOFGAME << endl; //general principle, capitalize your constants.
}
