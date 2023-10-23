//binary searching
// the order of binary searching is O(log n)
// in this method we are checking the middle element of an aray
//condition is aray should be sorted
#include<iostream>
using namespace std;

int binary(int arr[],int n,int key)
{
    int i;
    int start=0,end=n;
    while(start<end)
    {
        int mid=(start+end)/2;
        if(arr[mid]==key)
        return mid;

        else if(key<arr[mid])
        end=mid-1;

        else 
        {start=mid+1;}

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
    pos=binary(aray,n,key);
    if(pos==-1)
    cout<<"the element is not found";
    else
    cout<<"the elememnt is at "<<pos;

    return 0;
}
