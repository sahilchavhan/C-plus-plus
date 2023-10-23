//count sort
//counting the occurence of elements of an array and storing the cunt in another array
//order is max(O(n),O(Ai))
#include<iostream>


using namespace std;

int main()
{
    int aray[]={1,3,2,3,4,1,6,4,3};
    int mx=0;
    for(int i=0;i<sizeof(aray)/sizeof(aray[0]);i=i+1)
    {
        mx=max(mx,aray[i]);
        // cout<<aray[i]<<endl;
    }
    cout<<mx<<endl;

    int aray2[mx+1]={0};
    for(int i=0;i<sizeof(aray)/sizeof(aray[0]);i=i+1)
    {
        // int temp=aray[i];
        // int count=1;
        // for(int j=i+1;j<sizeof(aray)/sizeof(aray[0]);j=j+1)
        // {
        //     if(temp==aray[j])
        //     {
        //        aray2[temp-1]=aray2[temp-1]+1;
        //     }
        //     else
        //     aray2[temp-1]=1;
        // }

        aray2[aray[i]]=aray2[aray[i]]+1;
    }
    for(int i=0;i<mx+1;i=i+1)
    {
        cout<<aray2[i]<<" ";
    }
    cout<<endl;
    // int aray3[mx+1];
    for(int i=1;i<mx+1;i=i+1)
    {
        aray2[i]=aray2[i]+aray2[i-1];
    }
    for(int i=0;i<mx+1;i=i+1)
    {
        cout<<aray2[i]<<" ";
    }
    cout<<endl;

    int aray4[sizeof(aray)/sizeof(aray[0])]={0};
    for(int i=(sizeof(aray)/sizeof(aray[0])-1);i>=0;i=i-1)
    {
        aray4[--aray2[aray[i]]]=aray[i];
    }

     for(int i=0;i<(sizeof(aray)/sizeof(aray[0]));i=i+1)
    {
        // mx=max(mx,aray[i]);
        cout<<aray4[i]<<" ";
    }
    return 0;
}
