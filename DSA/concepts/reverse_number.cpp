#include<iostream>
using namespace std;

int main()
{
    int n,original,reversed = 0,digit;

    cout<<"Enter Any Number :";
    cin>>n;

    while(n>0)
    {
        digit = n % 10;
        reversed = reversed * 10 + digit;
        n = n / 10;
    }

    cout<<"Reversed :"<<reversed;
    return 0;
}