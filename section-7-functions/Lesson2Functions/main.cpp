#include <iostream>

using namespace std;

//parameters
void welcome(); //declaration
//don't need to declare the name of parameters in declaration.
bool isNumber(string);
void enterName();
//in-line declaration is a bad idea.
double add (double a, double b){ return a + b; }
//does not change value of parameters
void changeValueTo10(int x)
{
    x = 10
}

int main()
{
    welcome();

    enterName();
    enterName();
    enterName();
}

bool isNumber(string tmp)
{
    if (tmp[0] =='0')
        return false;
    for (int i = 0; i < tmp.length(); i++)
       if (!(tmp[i] >= 48 && tmp[i] <= 57))
            return false;

    return true;
}

void welcome()
{
    cout << "Welcome To Our Function" <<endl;
}

void enterName()
{
    string tmp;
    //if you do int it does breaks when you put in something wrong.

    cout << "Enter the number: " << endl;
    cin >> tmp;

    if (isNumber(tmp))
        cout << "Number entered properly " << endl;
    else
        cout << "Number wasn't enetered properly " << endl;

}
