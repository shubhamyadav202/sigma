#include<iostream>
using namespace std;

class Animal{
    public:
    void eat()
    {
        cout<<"Animal is eating..."<<endl;
    }

    void breathe()
    {
        cout<<"Animal is Breathing..."<<endl;
    }
};

class Mammals : public Animal{
    public:
    string bloodType;

    Mammals()
    {
        this->bloodType = "worm";
    }
};

class Dog : public Mammals{
    public:
    void bark()
    {
        cout<<"Dog is Barking..."<<endl;
    }
};

int main()
{
    Dog d1;
    d1.eat();
    d1.breathe();
    d1.bark();
    cout<<d1.bloodType<<endl;
    
    return 0;
}