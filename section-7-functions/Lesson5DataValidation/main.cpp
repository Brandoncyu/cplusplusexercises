//temporary buffer.

#include <iostream>
# define Pi 3.14
using namespace std;

void initMenu();
void menuDecision(int);
double areaCircle(double);
double areaSquare(double);
double areaRectangle(double, double);
double areaTriangle(double, double);
bool isValid(string);
bool isValid();

int main()
{
    int choice;
    char cont;

    do
    {
        system("clear");
        initMenu();
        while (!(cin >> choice))
        {
            //cout << "state before: " << cin.rdstate() << endl;
            cin.clear();
            //cout << "state before: " << cin.rdstate() << endl;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            system("clear");
            initMenu();
            cout << "You've just typed the wrong data to the input" << endl;
        }


        menuDecision(choice);
        do
        {
            cout << "Do you want to continue the program? (Y/N)" << endl;
            cin >> cont;
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); //ignores all numbers after first.
        } while(cont != 'y' && cont != 'Y' && cont != 'n' && cont != 'N');

    } while(cont == 'y' || cont == 'Y');


    return 0;
}

void initMenu()
{
    cout << "Enter option:" << endl;
    cout << "1. Circle" << endl;
    cout << "2. Square" << endl;
    cout << "3. Rectangle" << endl;
    cout << "4. Triangle" << endl;
}

void menuDecision(int choice)
{
    double r, a, b, h;
    switch (choice)
    {
        case 1:
            do{ cout << "Enter the radius: " << endl; cin >> r; } while(!isValid());
            areaCircle(r);
            break;
        case 2:
            cout << "Enter the side of a square: " << endl;
            do{ cin >> a; } while(!isValid("The Side is Wrong, please type it again:"));
            areaSquare(a);
            break;
        case 3:
            cout << "Enter the width and height of a rectangle: " << endl;
            do{ cin >> a >> b; } while(!isValid("The Side is Wrong, please type it again:"));
            areaRectangle(a, b);
            break;
        case 4:
            cout << "Enter the height and base of a triangle: " << endl;
            do{ cin >> h >> b; } while(!isValid("The Height or Base is Wrong, please type it again:"));
            areaTriangle(h, b);
            break;
        default:
            cout << "You didn't choose any of the options from above" << endl;
    }
}

double areaCircle(double r)
{
    double result = Pi * r * r;
    cout << "the area of a circle that's radius is " << r << " is " << result << endl;
    return result;
}

double areaSquare(double a)
{
    double result = a * a;
    cout << "the area of a square that's side is " << a << " is " << result << endl;
    return result;
}
double areaRectangle(double a, double b)
{
    double result = a * b;
    cout << "the area of a rectangle that's first side is " << a << " and second side is " << b << " is " << result << endl;
    return result;
}
double areaTriangle(double h, double b)
{
    double result = (1/2) * h * b;
    cout << "the area of a triangle that's height is " << h << " and base is " << b << " is " << result << endl;
    return result;
}

bool isValid(string error_msg)
{
    if (cin.rdstate())
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        system("clear");
        initMenu();
        cout << error_msg << endl;
        return false;
    }
    return true;
}

bool isValid()
{
    if (cin.rdstate())
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        system("clear");
        initMenu();
        return false;
    }
    return true;
}
