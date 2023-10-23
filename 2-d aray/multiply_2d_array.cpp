//multiplication of 2 matrices
#include<iostream>
using namespace std;

int main()
{
    int m,n,p,key;
    cout<<"enter the number of rows of matrix 1";
    cin>>m;
    cout<<"enter the number of columes of matrix 1";
    cin>>n;
    cout<<"enter the number of columes of matrix 2";
    cin>>p;
    int aray1[m][n];
    int aray2[n][p];
    cout<<"enter the elements of first matrix"<<endl;
    for(int i=0;i<m;i=i+1)
    {
        for(int j=0;j<n;j=j+1)
        {
            cin>>aray1[i][j];
        }
       
    }
    cout<<"enter the elements of second matrix"<<endl;
    for(int i=0;i<n;i=i+1)
    {
        for(int j=0;j<p;j=j+1)
        {
            cin>>aray2[i][j];
        }
       
    }
   
    cout<<"the elements of first matrix are"<<endl;
    for(int i=0;i<m;i=i+1)
    {
        for(int j=0;j<n;j=j+1)
        {
            cout<<aray1[i][j]<<" ";
        }
        cout<<endl;
       
    }
    cout<<"the elements of second matrix are"<<endl;
    for(int i=0;i<n;i=i+1)
    {
        for(int j=0;j<p;j=j+1)
        {
            cout<<aray2[i][j]<<" ";
        }
       cout<<endl;
    }
    int aray3[m][p];
    for(int i=0;i<m;i=i+1)
    {
        for(int j=0;j<p;j=j+1)
        {
            for(int k=0;k<n;k=k+1)
            {
                aray3[i][j]=aray1[i][k]+aray2[k][j];
            }
        }
    }

     cout<<"the resultant matrix is"<<endl;
    for(int i=0;i<m;i=i+1)
    {
        for(int j=0;j<p;j=j+1)
        {
            cout<<aray3[i][j]<<" ";
        }
       cout<<endl;
    }

    return 0;
}