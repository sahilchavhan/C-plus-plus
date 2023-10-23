//searching of an element in a matrix
#include<iostream>
using namespace std;

int main()
{
    int m,n,p,key;
    cout<<"enter the number of rows of matrix 1";
    cin>>m;
    cout<<"enter the number of columes of matrix 1";
    cin>>n;
    
    int aray1[m][n];
    
    cout<<"enter the elements of matrix"<<endl;
    for(int i=0;i<m;i=i+1)
    {
        for(int j=0;j<n;j=j+1)
        {
            cin>>aray1[i][j];
        }
       
    }

    cout<<"the elements of matrix are"<<endl;
    for(int i=0;i<m;i=i+1)
    {
        for(int j=0;j<n;j=j+1)
        {
            cout<<aray1[i][j]<<" ";
        }
        cout<<endl;
       
    }
    cout<<"enter the element to be searched"<<endl;
    cin>>key;
    
    int row=0,col=n-1;
    bool flag=false;
    while(row<m && col>=0)
    {
        if(aray1[row][col]==key)
        flag=true;

        else if(aray1[row][col]<key)
        row=row+1;

        else if(aray1[row][col]>key)
        col=col-1;
    }

    if(flag)
    cout<<"element is present";
    else
    cout<<"element is not present ";
    return 0;
}