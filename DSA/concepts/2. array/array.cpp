#include<iostream>
using namespace std;

int main()
{
    int array[5] = {10,20,30,40,50};

    int n = sizeof(array)/sizeof(int);

    cout<<n;

    // cout<<array<<endl; // Shows Address 
    return 0;
}