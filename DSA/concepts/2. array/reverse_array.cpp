#include<iostream>
using namespace std;

int main()
{
    int n = 5;
    int array[n] = {5,6,7,8,9};
    int start = 0;
    int end = n-1;

    while(start < end)
    {
        swap(array[start],array[end]);
        start++;
        end--;
    }

    for(int i = 0;i<n;i++)
    {
        cout<<array[i];
    }

    return 0;
}