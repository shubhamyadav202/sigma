#include<iostream>
using namespace std;

void swapping(int &a,int &b)
{
    cout<<a<<" "<<b<<" ";
    int temp = a;
    a = b;
    b = temp;
    cout<<a<<" "<<b<<" ";
}

int main()
{
    int p = 10;
    int q = 20;

    swapping(p,q);

    cout<<p<<" "<<q<<" ";

    return 0;
}