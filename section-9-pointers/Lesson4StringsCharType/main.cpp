#include <iostream>

using namespace std;

int main()
{
    string text = "this is a test"; // t r a la \0;

    for (int i = 0; i < text.length(); i++)
    {
        cout << text[i] << endl;
    }

    char ch = text[0];

    cout << ch << endl;

    char characters[] = "1eii23asd2asdfa4"; //how strings are formed.

    cout << characters << endl;

    //characters = "asdfewareawra" //can't declare because you set the char limit.

    cout << characters[0] << endl;
    cout << *(characters) << endl;

    cout << characters[1] << endl;
    cout << *(characters + 1 ) << endl;

    const char *text2 = text.c_str(); // converts to string.

    cout << text2 << endl;

    char * a = "this is a test 12314"; //cannot change values.
    cout << a << endl;

    char b[] = " this is a test 1513";
    b[0] = 'e';

    cout << b << endl;

    char * const dynamic_array = new char[60];
    dynamic_array = "lalala";
    cout << dynamic_array <> endl;

    delete [] dynamiic_array;

    return 0;
}
