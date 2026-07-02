// Assume Queens doesn't attack 

#include<iostream>
#include<vector>
using namespace std;

void printBoard(vector<vector<char>> board)
{
    int n = board.size();

    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<n;j++)
        {
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"-------------------------------"<<endl;
}

bool isSafe(vector<vector<char>> board,int row,int col)
{
    int n = board.size();

    // Checking for horizontal safe
    for(int j = 0;j<n;j++)
    {
        if(board[row][j] == 'Q')
        {
            return false;
        }
    }

    // Checking for Vertical safe
    for(int i = 0;i<row;i++)
    {
        if(board[i][col] == 'Q')
        {
            return false;
        }
    }

    // Checking for Diagonal Left safe
    for(int i=row,j=col ; i >= 0 && j >= 0 ; i--,j--)
    {
        if(board[i][j] == 'Q')
        {
            return false;
        }
    }
    
    // Checking for Diagonal right safe
    for(int i=row,j=col ; i >= 0 && j < n ; i--,j++)
    {
        if(board[i][j] == 'Q')
        {
            return false;
        }
    }

    return true;
}

int nQueens(vector<vector<char>> board,int row) // ith row -> ith queen rakhni hai
{
    int n = board.size();

    if(row == n)
    {
        return 1;
    }

    int count = 0;

    for(int col = 0;col<n;col++) // columns
    {
        if(isSafe(board,row,col) == true)
        {
            board[row][col] = 'Q';
            count = count + nQueens(board,row + 1);
            board[row][col] = '.'; // backtrack
        }
    }
    return count; // No. of possible Solutions at each level
}

int main()
{
    vector<vector<char>> board;//Created 2d dynamic matrix
    int n = 4;

    for(int i = 0;i<n;i++)
    {
        vector<char> newRow;
        for(int j = 0;j<n;j++)
        {
            newRow.push_back('.');
        }
        board.push_back(newRow);
    }

    int count = nQueens(board,0);
    cout<<"Count : "<<count;

    return 0;
}