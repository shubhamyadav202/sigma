#include<iostream>
using namespace std;

//abstract class
class Shape{
    public:
    virtual void draw() = 0; //abstract fxn,pure virtual fxn 
};

class Circle : public Shape{
    public:
    void draw()
    {
        cout<<"Draw Circle";
    }
};

class Square : public Shape{
    public:
    void draw()
    {
        cout<<"Draw Square";
    }
};

int main()
{
    Circle c1;
    c1.draw();

    Square s1;
    s1.draw();

    // Shape sh1; It will show error
    // sh1.draw();
    return 0;
}