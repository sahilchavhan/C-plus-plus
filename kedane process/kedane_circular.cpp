//kadane process for circular aray
//finding the subarary whhich is having maximum sum
// formul is [wrapsum = total sum - (-non wrap sum)]
#include "climits"
#include "bits/stdc++.h"
using namespace std;

int kadane(int aray[],int n)
{
    int mx=INT_MIN;
    int sum=0;
    for(int i=0;i<n;i=i+1)
    {
        if(aray[i]>0)
        {
            sum=sum+aray[i];
            mx=max(sum,mx);
        }
        else{
            sum=0;
            mx=max(sum,mx);
        }
    }
    return mx;
}

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

    int wrapsum,totalsum=0,nonwrapsum;
    for(int i=0;i<n;i=i+1)
    {
        totalsum=totalsum+aray[i];
        aray[i]=-aray[i];
    }

    nonwrapsum=kadane(aray,n);
    wrapsum=totalsum+nonwrapsum;
    cout<<"maximum sum of an circulr subaray is "<<wrapsum<<endl;
   
    return 0;
}