#ifndef FARM_H_INCLUDED
#define FARM_H_INCLUDED
#include <iostream>

using namespace std;


class Animal
{
    protected:
        string voice;
    public:
        Animal();
        ~Animal();
        string getVoice() { return voice; }
};
class Dog : public Animal
{
        string sign;
    public:
      Dog();
      ~Dog();
      string getVoice() { return voice + sign; }
};
class Cat : public Animal
{
        string sign;
    public:
      Cat();
      ~Cat();
      string getVoice() { return voice + sign; }
};
class Cow : public Animal
{
        string sign;
    public:
      Cow();
      ~Cow();
      string getVoice() { return voice + sign; }
};

#endif // FARM_H_INCLUDED
