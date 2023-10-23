//2-d aray
// spiral printing of a 2-d aray
#include<iostream>
using namespace std;

int main()
{
    // #ifndef ONLINE_JUDGE
    // freopen( _Filename: "input.txt", _Mode: "r", _File: stdin);
    // freopen( _Filename: "output.txt", _Mode: "w", _File: stdout);
    // #endif
    int m,n,i,j,key;
    cout<<"enter the number of rows";
    cin>>m;
    cout<<"enter the number of columes";
    cin>>n;
    int row_start=0,column_start=0,row_end=m-1,column_end=n-1,row,column;
    int aray[m][n];
    cout<<"enter the elements";
    for(i=0;i<m;i=i+1)
    {
        for(j=0;j<n;j=j+1)
        {
            cin>>aray[i][j];
        }
       
    }

    while(row_start<=row_end || column_start<=column_end)
    {
        for(column=column_start;column<=column_end;column=column+1)
        {
            cout<<aray[row_start][column]<<" ";
        }
        row_start=row_start+1;
        for(row=row_start;row<=row_end;row=row+1)
        {
            cout<<aray[row][column_end]<<" ";
        }
        column_end=column_end-1;
        for(column=column_end;column>=column_start;column=column-1)
        {
            cout<<aray[row_end][column]<<" ";
        }
        row_end=row_end-1;
        for(row=row_end;row>=row_start;row=row-1)
        {
            cout<<aray[row][column_start]<<" ";
        }
        column_start=column_start+1;
        
    }
    return 0;
}