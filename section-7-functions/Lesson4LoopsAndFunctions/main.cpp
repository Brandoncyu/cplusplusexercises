#include <iostream>
# define Pi 3.14
using namespace std;

void initMenu();
void menuDecision(int);
double areaCircle(double);
double areaSquare(double);
double areaRectangle(double, double);
double areaTriangle(double, double);

int main()
{
    int choice;
    char cont;

    do
    {
        system("clear");
        initMenu();

        cin >> choice;

        menuDecision(choice);
        do
        {
            cout << "Do you want to continue the program? (Y/N)" << endl;
            cin >> cont;
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
            cout << "Enter the radius: " << endl;
            cin >> r;
            areaCircle(r);
            break;
        case 2:
            cout << "Enter the side of a square: " << endl;
            cin >> a;
            areaSquare(a);
            break;
        case 3:
            cout << "Enter the width and height of a rectangle: " << endl;
            cin >> a >> b;
            areaRectangle(a, b);
            break;
        case 4:
            cout << "Enter the height and base of a triangle: " << endl;
            cin >> h >> b;
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
