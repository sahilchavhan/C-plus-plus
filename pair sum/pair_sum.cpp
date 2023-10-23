//pair sum 
//its order is n2 so we will see another method
#include "climits"
#include "bits/stdc++.h"
using namespace std;

bool check(int aray[],int n,int key)
{
    int i,j;
    for(int i=0;i<n-1;i=i+1)
    {
        for(int j=i+1;j<n;j=j+1)
        {
            if(aray[i]+aray[j]==key)
            return true;

            else 
            return false;
        }
    }
}

int main()
{
    int n,m,key;
    
    cout<<"enter the number of terms";
    cin>>n;
    int aray[n];
    for(int i=0;i<n;i=i+1)
    {
        cin>>aray[i];
    }
    cout<<"enter the sum which is to be found";
    cin>>key;

    cout<<check(aray,n,key)<<endl;
    return 0;
}