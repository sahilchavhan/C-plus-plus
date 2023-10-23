//printing all subarays
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
            for(m=i;m<=j;m=m+1)
            {
                cout<<aray[m];
            }
            cout<<endl;
        }
        
    }
    return 0;
}