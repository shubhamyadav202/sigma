#include<iostream>
using namespace std;

bool search(int matrix[][4],int row,int col,int key)
{
    int i = 0;
    int j = col - 1;
    
    while(i < row && j >=0)
    {
        if(matrix[i][j] == key)
        {
            cout<<"Found at Cell ("<<i<<","<<j<<")";
            return true;
        }
        else if (matrix[i][j] > key)
        {
            //left 
            j--;
        }
        else
        {
            //down
            i++;
        }
        
    }

    cout<<"Key not Found";
    return false;
}

int main()
{
    int matrix[4][4] = {{10,20,30,40},
                        {15,25,35,45},
                        {27,29,37,48},
                        {32,33,15,16}};

    search(matrix,4,4,33);
    return 0;
}