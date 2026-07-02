#include<iostream>
#include<algorithm>
using namespace std;

void printarray(int array[],int n)
{
    for(int i = 0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }
}

int main()
{
    int n = 8;
    int array[n] = {1,4,1,3,2,4,3,7};

    // Ascending Order
    sort(array,array+8);
    
    //Descending Order
    sort(array,array+8,greater<int>());


    printarray(array,n);
    return 0;
}