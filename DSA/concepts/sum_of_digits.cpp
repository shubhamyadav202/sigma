#include<iostream>
using namespace std;

int main()
{
    int n,lastdigit,sum = 0;

    cout<<"Enter Anything :";
    cin>>n;

    while(n>0)
    {
        lastdigit = n % 10; // Finding last digit 
        sum += lastdigit;
        n = n/10; // moving to the next digit
    }

    cout<<"Sum :"<<sum;
    return 0;
}