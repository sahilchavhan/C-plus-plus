//2-d aray
#include<iostream>
using namespace std;

int main()
{
    // #ifndef ONLINE_JUDGE
    // freopen( _Filename: "input.txt", _Mode: "r", _File: stdin);
    // freopen( _Filename: "output.txt", _Mode: "w", _File: stdout);
    // #endif
    int m,n,i,j;
    cout<<"enter the number of rows";
    cin>>m;
    cout<<"enter the number of columes";
    cin>>n;
    int aray[m][n];
    for(i=0;i<m;i=i+1)
    {
        for(j=0;j<n;j=j+1)
        {
            cin>>aray[i][j];
        }
       
    }
    for(i=0;i<m;i=i+1)
    {
        for(j=0;j<n;j=j+1)
        {
            cout<<aray[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}