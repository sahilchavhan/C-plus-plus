//printing sum of all subarays
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
    
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int sum=0;
            for(m=i;m<=j;m=m+1)
            {
                sum=sum+aray[m];
            }
                cout<<sum<<" ";
            cout<<endl;
        }
        
    }
    return 0;
}