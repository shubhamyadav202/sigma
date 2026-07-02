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

class Fish : protected Animal{
    public:

    int fins;

    void swim()
    {
        eat(); //but the contents of parent class can be called here
        breathe();
        cout<<"Swims"<<endl;
    }
};

int main()
{
    Fish f1;
    f1.swim();
    // f1.eat(); // In Protected i cannot be called here in main
    // f1.breathe();
    
    return 0;
}