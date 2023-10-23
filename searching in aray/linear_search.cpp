//linear searching
// the order of linear searching is O(n)
// this is a normal seraching method in which we are checking each element of an aray one by one
#include<iostream>
using namespace std;

int linear(int arr[],int n,int key)
{
    int i;
    for(i=0;i<n;i=i+1)
    {
        if(arr[i]==key)
        return i;
    }
    return -1;
}

int main()
{
    int n;
    int i,key,pos;
    int aray[n];
    cout<<"enter the number of term";
    cin>>n;
    for(i=0;i<n;i=i+1)
    {
        cin>>aray[i];
    }
    cout<<"enter the element which is to be found";
    cin>>key;
    pos=linear(aray,n,key);
    if(pos==-1)
    cout<<"the element is not found";
    else
    cout<<"the elememnt is at "<<pos;

    return 0;
}