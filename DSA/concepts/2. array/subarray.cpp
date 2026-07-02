#include<iostream>
using namespace std;

void  printsubarray(int array[],int n)
{
    for(int start = 0;start < n;start++)
    { 
        for(int end = start;end < n;end++)
        {
            // cout<<"("<< start << "," << end << ")  ";
            for(int i = start; i<=end ; i++)
            {
                cout<<array[i];
            }
            cout<<",";
        }
        cout<<endl;
    }
}

int main()

{
    int n = 5;
    int array[n] = {1,2,3,4,5};

    printsubarray(array,n);

    return 0;
}               