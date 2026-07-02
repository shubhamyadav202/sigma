#include<iostream>
using namespace std;

void transposeMatrix(int array[][3],int row,int col)
{
    int transpose[col][row] = {{0}};

    for(int i = 0;i<row;i++)
    {
        for(int j = 0;j<col;j++)
        {
            transpose[j][i] = array[i][j];
        }
    }

    for(int i = 0;i<col;i++)
    {
        for(int j = 0;j<row;j++)
        {
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int matrix[2][3] = {
                        {1, 2, 3},
                        {4, 5, 6}
                        };

    transposeMatrix(matrix,2,3);                    
    return 0;
}