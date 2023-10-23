//2-d aray
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
    int aray[m][n];
    cout<<"enter the elements";
    for(i=0;i<m;i=i+1)
    {
        for(j=0;j<n;j=j+1)
        {
            cin>>aray[i][j];
        }
       
    }

    cout<<"enter the element to be searched";
    cin>>key;

    for(i=0;i<m;i=i+1)
    {
        for(j=0;j<n;j=j+1)
        {
            if(key==aray[i][j])
            {
                cout<<"element is present";
            }
            else
            {
                cout<<"element is not present";
            }
        }
        
    }
    return 0;
}