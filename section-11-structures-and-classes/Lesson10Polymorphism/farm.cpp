#include "farm.h"

Animal::Animal()
{
    voice="default value";
}
Animal::~Animal()
{
    cout << "im from the base class" <<endl;
}
Dog::Dog()
{
    sign = "D";
    voice = "woof";
}
Dog::~Dog()
{
    cout << "im from the sub-class" <<endl;
}
Cat::Cat()
{
    sign = "C";
    voice = "meow";
}
Cat::~Cat()
{
    cout << "im from the sub-class" <<endl;
}
Cow::Cow()
{
    sign = "CO";
    voice = "woof";
}
Cow::~Cow()
{
    cout << "im from the sub-class" <<endl;
}
