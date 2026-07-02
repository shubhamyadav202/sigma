#include<iostream>
using namespace std;

int main()
{
    int row = 3;
    int col = 3;
    int array[row][col];
    
    for(int i = 0;i<row;i++)
    {
        for(int j = 0;j<col;j++)
        {
            cin>>array[i][j];
        }
    }
    
    for(int i = 0;i<row;i++)
    {
        for(int j = 0;j<col;j++)
        {
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}