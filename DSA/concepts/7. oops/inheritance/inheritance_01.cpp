#include<iostream>
using namespace std;

class Animal
{
    public:
    string color;

    void eat()
    {
        cout<<"Animal is Eating"<<endl;
    }

    void breathe()
    {
        cout<<"Animal is Breathing"<<endl;
    }
};

class Fish : public Animal{
    public:

    int fins;

    void swim()
    {
        cout<<"Swims"<<endl;
    }
};

int main()
{
    Fish f1;
    f1.swim();
    f1.eat();
    f1.breathe();
    
    return 0;
}