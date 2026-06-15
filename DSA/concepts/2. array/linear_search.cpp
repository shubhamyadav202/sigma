#include<iostream>
using namespace std;

int linearsearch(int array[],int n,int key)
{
    for(int i = 0;i<n;i++)
    {
        if(array[i] == key)
        {
            return i;
        }
    }
}

int main()
{
    int n = 5;
    int array[n] = {6,7,8,9,10};

    cout<<linearsearch(array,n,10);
    
    return 0;
}