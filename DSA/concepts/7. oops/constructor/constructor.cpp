#include<iostream>
using namespace std;

class Car{
    string name;
    string color;

    public:
    Car()
    {
        cout<<"Constructor without paramaters."<<endl;
    }

    Car(string nameValue,string colorValue) // constructor contains same name as the name of the class
    {
        cout<<"Constructor with parameters."<<endl;
        name = nameValue; // this->name = name
        color = colorValue; // this->color = color
    }

    void start()
    {
        cout<<"Car is Started...."<<endl;
    }

    void stop()
    {
        cout<<"Car is Stoppedddd"<<endl;
    }

    //Getter
    string getName()
    {
        return name;
    }

    string getColor()
    {
        return color;
    }
};

int main()
{
    Car c0; // Non-parametrized constructor is called
    Car c1("Thar","Black"); // Once a object is created, a constructor is called automatically
    cout << "Car name :"<< c1.getName() << endl;
    cout << "Car color :"<< c1.getColor() << endl;

    return 0;
}