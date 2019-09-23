#include <iostream>
#include "farm.h"

using namespace std;
void voiceOfAnimal(Animal *);
int main()
{
    Animal animal;
    Dog dog;
    Cat cat;
    Cow cow;

    cout << animal.getVoice() <<endl;
    cout << dog.getVoice() <<endl;
    cout << cat.getVoice() <<endl;
    cout << cow.getVoice() <<endl;

    voiceOfAnimal(&cat);

    Animal *p = &dog;
    cout << p->getVoice() << endl;

    return 0;
}
void voiceOfAnimal(Animal *p)
{
    cout << p->getVoice() << endl;
};
