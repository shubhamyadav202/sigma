#include<iostream>
using namespace std;

void func1()
{
    cout<<"I am Function 1"<<endl;
    func1();
}

int main()
{
    func1();
    return 0;
}