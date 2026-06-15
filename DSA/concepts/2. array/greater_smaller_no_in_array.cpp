#include<iostream>
using namespace std;

int main()
{
    int array[] = {5,4,3,9,12};

    int len = sizeof(array)/sizeof(int);

    int max = array[0];
    int min = array[0];
    
    for(int i = 0;i<len;i++)
    {
        if(array[i] > max)
        {
            max = array[i];
        }
        if(array[i] < min)
        {
            min = array[i];
        }
    }

    cout<<"Max Value :"<<max<<endl;
    cout<<"Min Value :"<<min;
    return 0;
}