// backtracking problem
// rat in a maze
#include<iostream>
using namespace std;

void backtracking(int **maze, int **maze_1,int n,int x,int y)
{
    if(x==n-1 && y==n-1)
    {
        for(int i=0;i<n;i=i+1)
        {
            for(int j=0;j<n;j=j+1)
            {
                cout<<maze_1[i][j]<<" ";
            }
            cout<<endl;
        }
        return;
    }

    if(x<n && y<n && maze[x][y]==1)
    {
        maze_1[x][y]=1;
        backtracking(maze, maze_1, n, x+1, y);
        backtracking(maze, maze_1, n, x, y+1);
    }
    else 
        maze_1[x][y]=0;
}

int main()
{
    int n;
    cout<<"enter the size of maze";
    cin>>n;
    int maze[n][n];
    cout<<"enter the maze";
    for(int i=0;i<n;i=i+1)
    {
        for(int j=0;j<n;j=j+1)
        {
            cin>>maze[i][j];
        }
        
    }

    for(int i=0;i<n;i=i+1)
    {
        for(int j=0;j<n;j=j+1)
        {
            cout<<maze[i][j]<<" ";
        }
        cout<<endl;
    }



    int maze_1[n][n];
    for(int i=0;i<n;i=i+1)
    {
        for(int j=0;j<n;j=j+1)
        {
            maze_1[i][j]=0;
        }
    }
    cout<<endl;
    for(int i=0;i<n;i=i+1)
    {
        for(int j=0;j<n;j=j+1)
        {
            cout<<maze_1[i][j]<<" ";
        }
        cout<<endl;
    }

    backtracking(maze,maze_1,n,0,0);
    return 0;
}