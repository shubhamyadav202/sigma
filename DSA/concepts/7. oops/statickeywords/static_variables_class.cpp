#include<iostream>
using namespace std;

// Class definition
class Example{
    public:
    static int x;   // Static variable (shared among all objects)
};

// Static variable must be defined outside the class
int Example::x = 0;

int main()
{
    // Creating three objects of class Example
    Example eg1;
    Example eg2;
    Example eg3;

    // Accessing static variable using objects
    // Even though we use different objects, 'x' is shared

    cout << eg1.x++ << endl;   // Prints 0, then increments x to 1
    cout << eg2.x++ << endl;   // Prints 1, then increments x to 2
    cout << eg3.x++ << endl;   // Prints 2, then increments x to 3

    return 0;
}