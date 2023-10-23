//bubble sort
//in bubble sort we are actully compairing two elements of array one by one and we are swapping greater elememt to the right?
// worst time compexity is O(n2)
// best time complexity is O(n) when the aray is already sorted
#include<iostream>
using namespace std;

int main()
{
    int n;
    int i,j,key,pos;
    cout<<"enter the number of term";
    cin>>n;
    int aray[n];
    for(i=0;i<n;i=i+1)
    {
        cin>>aray[i];
    }
    for(j=0;j<n-1;j=j+1)
    {
        for(i=0;i<n;i=i+1)
        {
            if(aray[i]>aray[i+1])
            {
            pos=aray[i];
            aray[i]=aray[i+1];
            aray[i+1]=pos;
            }
        }
    }


    for(i=0;i<n;i=i+1)
    {
        cout<<aray[i]<<" ";
    }


    return 0;
}

