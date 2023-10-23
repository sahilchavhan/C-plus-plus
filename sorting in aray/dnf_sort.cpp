//DNF-SORT(Dutch National flag sort)
//time compelexity is O(n) in each operation either mid gets incremented or high gets decremented and also their is only one loop
#include<iostream>
using namespace std;

void dnf(int aray[],int n)
{
    int temp,low=0,mid=0,high=n;
    for(int i=0;i<high;i=i+1)
    {
        if(aray[i]==1)
        {
            mid=mid+1;
        }
        else if(aray[i]==0)
        {
            temp=aray[mid];
            aray[mid]=aray[low];
            aray[low]=temp;
            low=low+1;
            mid=mid+1;
        }
        else if(aray[i]==2)
        {
            temp=aray[mid];
            aray[mid]=aray[high];
            aray[high]=temp;  
            mid=mid+1;
            high=high-1; 
        }
    }
}

int main()
{
    int aray[]={1,1,2,0,0,1,2,2,1,0};
    int n=sizeof(aray)/sizeof(aray[0]);
    // cout<<n<<endl;
    dnf(aray,n-1);
    for(int i=0;i<n;i=i+1)
    {
        cout<<aray[i]<<" ";
    }
    return 0;
}