#include<iostream>
using namespace std;

int main()
{
    int marks = 10;
    int *ptr = &marks;

    int &markscopy = marks; // Alias (Single Variable Can Be Accessed By Two Different Names).

    cout<<marks<<endl;
    cout<<ptr<<endl;

    *ptr = 20;

    cout<<marks<<endl;

    return 0;
}