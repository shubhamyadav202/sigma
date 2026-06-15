// Print the number of all 7’s that are in the 2d array
// Input-intarr[][]={{4,7,8},{8,8,7}};n=2,m=3

#include<iostream>
using namespace std;

int count(int array[][3],int row,int col,int key)
{
    int count = 0;
    for(int i = 0;i<row;i++)
    {
        for(int j = 0;j<col;j++)
        {
            if(array[i][j] == key)
            {
                count = count + 1;
            }
        }
    }

    cout<<"Count :"<<count;
}

int main()
{

    int arr[2][3]={{7,7,8},{7,7,7}};

    count(arr,2,3,7);
    return 0;
}