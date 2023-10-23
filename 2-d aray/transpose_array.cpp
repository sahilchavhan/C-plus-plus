//transpose of a matrix
#include<iostream>
using namespace std;

int main()
{
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
    for(i=0;i<m;i=i+1)
    {
        for(j=i;j<n;j=j+1)
        {
            key=aray[i][j];
            aray[i][j]=aray[j][i];
            aray[j][i]=key;
        }
       
    }
    for(i=0;i<m;i=i+1)
    {
        for(j=0;j<n;j=j+1)
        {
            cout<<aray[i][j];
        }
       cout<<endl;
    }
   
    return 0;
}