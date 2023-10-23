//pair sum 
//thi is method 2 having order n1
#include "climits"
#include "bits/stdc++.h"
using namespace std;

bool check(int aray[],int n,int key)
{
    int i,j,start,end;
    start=0;
    end=n-1;
    while(start<end)
    {
        if(aray[start]+aray[end]==key)
        return 1;

        else if(aray[start]+aray[end]>key)
        end=end-1;

        else if(aray[start]+aray[end]<key)
        start=start+1;
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
    m=check(aray,n,key);
    cout<<m<<endl;
    return 0;
}