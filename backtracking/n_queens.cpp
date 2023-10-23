//backtracking problem
//n-queens problem
//their is an error in the code
#include<iostream>
using namespace std;

bool issafe(int **board, int n, int row, int col)
{
    for(int x=0;x<row;x=x+1)
    {
        if(board[x][col]==1)
        {
            return false;
        }
    }

    int x=row;
    int y=col;
    while(x>=0 && y>=0)
    {
        if(board[x-1][y-1]==1)
        return false;
        x=x-1;
        y=y-1;
    }
    
     x=row;
     y=col;
    while(x>=0 && y<n)
    {
        if(board[x-1][y+1]==1)
        return false;
        x=x-1;
        y=y+1;
    }
    return true;
}

bool nqueens(int **board,int n,int row)
{
    if(row>=n)
    {
        return true;
    }
    for(int col=0;col<n;col=col+1)
    {
        if(issafe(board, n, row, col))
        {
        board[row][col]=1;
        
        if(nqueens(board, n, row+1))
        return true;
        
        board[row][col]=0;
        }
    }
    return false;
}
int main()
{
    int n;
    cout<<"enter the size of maze";
    cin>>n;
    int **board= new int*[n];
    for(int i=0;i<n;i=i+1)
    {
        board[i]=new int[n];
        for(int j=0;j<n;j=j+1)
        {
            board[i][j]=0;
        }
    }

    if(nqueens(board,n,0))
    {
        for(int i=0;i<n;i=i+1)
        {
        
        for(int j=0;j<n;j=j+1)
            {
                cout<<board[i][j]<<" ";
            }cout<<endl;
        }
    }
    return 0;
}