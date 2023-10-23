//finding the subarary whhich is having maximum sum
//BUT THERE IS ONE PROBLEM WITH THIS METHOD IT IS HAVING AN ORDER OF N3 SO WE WILL SEE A NEW METHOD
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
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int sum=0;
            for(m=i;m<=j;m=m+1)
            {
                sum=sum+aray[m];
            }
                // cout<<sum<<" ";
            mx=max(mx,sum);
            // cout<<endl;
        }
        
    }
    cout<<"MAXIMUM SUM IS"<<mx;
    return 0;
}