//kadane process
//finding the subarary whhich is having maximum sum
// in kedane process we are checkingte elemet if it is posotve the only we are adding it to sum els we are making sum=0 and in both the cases we aretakng the maximum of sum an mx
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

    cout<<"maximum sum of an subaray is "<<mx<<endl;
    return 0;
}