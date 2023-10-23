//wave sort
//time complexity is O(n/2) becz i is incrementing by 2 which is approximately equal to O(n)
#include<iostream>
using namespace std;

void wave(int aray[],int n)
{
    int temp;
    int i=1;
    while (i<=n)
    {
        if(aray[i]>aray[i-1])
        {
            temp=aray[i];
            aray[i]=aray[i-1];
            aray[i-1]=temp;
        }

        if(aray[i]>aray[i+1])
        {
            temp=aray[i];
            aray[i]=aray[i+1];
            aray[i+1]=temp;
        }

        i=i+2;
    }
    
}

int main()
{
    int aray[]={1,3,4,7,5,6,2};
    wave(aray,6);
    for(int i=0;i<=6;i=i+1)
    {
        cout<<aray[i]<<" ";
    }
    return 0;
}