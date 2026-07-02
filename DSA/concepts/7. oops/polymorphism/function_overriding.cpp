#include<iostream>
using namespace std;

class Parent{
    public:
    void show()
    {
        cout<<"I am Parent FUNCTION";
    }
};

class Child : public Parent{
    public:
    void show()
    {
        cout<<"I am Child FUNCTION";
    }
};

int main()
{
    Child c1;
    c1.show();
    return 0;
}