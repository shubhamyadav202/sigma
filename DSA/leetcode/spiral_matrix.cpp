#include<iostream>
using namespace std;

void spiralMatrix(int matrix[][4],int row,int col)
{
    int startRow = 0;
    int endRow = row - 1;
    int startCol = 0;
    int endCol = col - 1;

    while(startRow <= endRow && startCol <= endCol)
    {

        //top
        for(int j=startCol;j<=endCol;j++)
        {
            cout<<matrix[startRow][j]<<" ";
        }
        
        //right
        for(int i = startRow + 1;i<=endRow;i++)
        {
            cout<<matrix[i][endCol]<<" ";
        }
        
        //bottom
        for(int j = endCol-1;j>=startCol;j--)
        {
            if(startRow == endRow)
            {
                break;
            }
            cout<<matrix[endRow][j]<<" ";
        }
        
        //left
        for(int i = endRow - 1;i>=startRow+1;i--)
        {
            if(startCol == endCol)
            {
                break;
            }
            cout<<matrix[i][startCol]<<" ";
        }
        startRow++;
        startCol++;
        endCol--;
        endRow--;
    }
    cout<<endl;
}

int main()
{
    int matrix[4][4] = {{1,2,3,4},
                        {5,6,7,8},
                        {9,10,11,12},
                        {13,14,15,16}};

    spiralMatrix(matrix,4,4);


    return 0;
}