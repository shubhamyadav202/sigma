#include<iostream>
using namespace std;

class Car{
    public:
        string name;
        string color;

    Car(string name,string color)
    {
        this->name = name;
        this->color = color;
    }

    Car(Car &original) // Created own copy constructor
    {
        cout<<"copying original to new..\n";
        name = original.name;
        color = original.color;
    }
};
int main()
{
    Car c1("Thar","Black");

    Car c2(c1); //Automatically copy constructor is created in C++ and contents are passed in other object

    cout<<c2.name<<endl;
    cout<<c2.color<<endl;
    return 0;
}