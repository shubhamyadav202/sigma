// Print out the sum of the numbers in the second row of the “nums” array.
// Input-intnums[][]={{1,4,9},{11,4,3},{2,2,3}};

#include<iostream>
using namespace std;

void sum(int array[][3],int row,int col)
{
    int sum = 0;
    for(int i = 0;i<col;i++)
    {
        sum = sum + array[1][i];
    }
    cout<<"Sum :"<<sum;
}

int main()
{
    int nums[3][3]={{1,4,9},{11,4,3},{2,2,3}};

    sum(nums,3,3);
    return 0;
}