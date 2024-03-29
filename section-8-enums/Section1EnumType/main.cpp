#include <iostream>

using namespace std;

//enum is a type.
enum dayOfWeek { M = 1, TU, W, TH, F, SA, SN };
string getDay(dayOfWeek);
int main()
{
    dayOfWeek d = SN;

    //logs out 6. setting it to M logs out 0, Tu logs out 1, etc.
    cout << d << endl;

    //logs out 1.
    cout << dayOfWeek(TU) << endl;
    cout << getDay(TU) << endl;

    int i;

    cout << "Enter the day of a week " << endl;
    cin >> i;
    cout << getDay(dayOfWeek(i)) << endl;

    return 0;
}

string getDay(dayOfWeek d)
{
    switch (d)
    {
        case M:
            return "Monday";
        case TU:
            return "Tuesday";
        case W:
            return "Wednesday";
        case TH:
            return "Thursday";
        case F:
            return "Friday";
        case SA:
            return "Saturday";
        case SN:
            return "Sunday";
        default:
            return "You typed something wrong";
    }


}
