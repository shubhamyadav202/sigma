#include<iostream>
using namespace std;

class Animal{
    public:
    void eat(){
        cout<<"Eatinggg..."<<endl;
    }

    void breathe(){
        cout<<"Breathing..."<<endl;
    }
};

class Bird : public Animal{
    public:
    void fly()
    {
        cout<<"Flyingg..."<<endl;
    }
};

class Fish : public Animal{
    public:
    void swim()
    {
        cout<<"Swimming..."<<endl;
    }
};

class Mammals : public Animal{
    public:
    void walk()
    {
        cout<<"Walking..."<<endl;
    }
};

int main()
{
    Bird b1;
    b1.eat();
    b1.breathe();
    b1.fly();

    Fish f1;
    f1.eat();
    f1.breathe();
    f1.swim();

    Mammals m1;
    m1.eat();
    m1.breathe();
    m1.walk();
    return 0;
}