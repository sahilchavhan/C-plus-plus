//ARITHMETIC SUBARRAY 
//this question is asked in google kick start
//arithmetic subaray is like A.P
#include<iostream>
using namespace std;

int main()
{
    int i,j,n,m;
    int a[m];
    cout<<"enter the number of terms";
    cin>>n;
    int aray[n];
    for(i=0;i<n;i=i+1)
    {
        cin>>aray[i];
    }
    int ans=2,pd=aray[1]-aray[0];
    for(j=2;j<n;j=j+1)
    {
        if(pd==aray[j]-aray[j-1])
        {
            ans=ans+1;
        }
        else
        {
            pd=aray[j]-aray[j-1];
        }
    }
    cout<<"the length of arithmetic subarray is"<<ans<<endl;
    return 0;
}