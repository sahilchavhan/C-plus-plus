//finding the subarary whhich is having maximum sum
//this method is better than the previous one but we willse another method which is better than this one
#include "climits"
#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n,m;
    
    cout<<"enter the number of terms";
    cin>>n;
    int aray[n];
    for(int i=0;i<n;i=i+1)
    {
        cin>>aray[i];
    }
    
    int mx=INT_MIN;
    
    int curaray[n+1];
    curaray[0]=0;
    for(int i=1;i<n+1;i=i+1)
    {
        curaray[i]=curaray[i-1]+aray[i-1];
    }

    for(int i=1;i<n+1;i=i+1)
    {   
        int sum;
        for(int j=0;j<i;j=j+1)
        {
            sum=curaray[i]-curaray[j];
            mx=max(sum,mx);
        }
    }
    cout<<"MAXIMUM SUM IS"<<mx;
    return 0;
}