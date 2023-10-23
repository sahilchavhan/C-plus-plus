//this question was asked in amazon and oracle
//Find the repeating element in an aray
//this is the basic brute force approach
// brute force means checking all the elements 
#include<iostream>
using namespace std;

int main()
{
    int i,j,n,m,cur;
    int a[m];
    cout<<"enter the number of terms";
    cin>>n;
    int aray[n];
    for(i=0;i<n;i=i+1)
    {
        cin>>aray[i];
    }

    for(i=0;i<n;i=i+1)
    {
        cur=aray[i];
        for(j=i+1;j<n;j=j+1)
        {
            if(cur==aray[j])
            cout<<aray[j]<<"is repeating at"<<i<<" and "<<j;
        }
    }
    return 0;
}