// Assume Queens doesn't attack 

#include<iostream>
#include<vector>
using namespace std;

// Passed by const reference to avoid unnecessary copying
void printBoard(const vector<vector<char>>& board)
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

// Passed by const reference to avoid unnecessary copying
bool isSafe(const vector<vector<char>>& board, int row, int col)
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

// Changed return type to bool and passed board by reference
bool nQueens(vector<vector<char>>& board, int row) 
{
    int n = board.size();

    // Base case: All queens are placed
    if(row == n)
    {
        printBoard(board);
        return true; // Signal that we found a solution
    }

    for(int col = 0;col<n;col++) // columns
    {
        if(isSafe(board,row,col) == true)
        {
            board[row][col] = 'Q';
            
            // If the deeper recursive call found a solution, bubble the 'true' up!
            if (nQueens(board, row + 1) == true) 
            {
                return true; 
            }
            
            board[row][col] = '.'; // backtrack
        }
    }
    
    // If no columns worked for this row, return false to trigger backtracking
    return false; 
}

int main()
{
    vector<vector<char>> board;
    int n = 5;

    for(int i = 0;i<n;i++)
    {
        vector<char> newRow;
        for(int j = 0;j<n;j++)
        {
            newRow.push_back('.');
        }
        board.push_back(newRow);
    }

    // We no longer need to capture the result in main unless we want to print "No solution found"
    nQueens(board,0);

    return 0;
}