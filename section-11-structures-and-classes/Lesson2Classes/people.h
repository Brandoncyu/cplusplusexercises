#ifndef PEOPLE_H_INCLUDED
#define PEOPLE_H_INCLUDED

class PersonalData
{
    //you want variables in the private section because you don't want people from outside learning how to put variables in.
    private:
        short age;
        int *p;
    public:
        PersonalData(); //constructor
        PersonalData(short); //constructor
        ~PersonalData(); //destructor
        /**
            this function is setting age. If age is lower than 0, then age = 10;
        */
        void setAge(int);
        short getAge();

};

#endif // PEOPLE_H_INCLUDED
