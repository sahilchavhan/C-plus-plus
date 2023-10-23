//merge sort
#include<iostream>
using namespace std;

void merge(int aray[], int start, int mid, int end)
{
    
    
    int n1=mid-start+1;
    int n2=end-mid;

    int a[n1];
    int b[n2];

    for(int i=0;i<n1;i=i+1)
    {
        a[i]=aray[start+i];
    }

    for(int i=0;i<n2;i=i+1)
    {
        b[i]=aray[mid+1+i];
    }

    int i=0;
    int j=0;
    int k=start;
    while(i<n1 && j<n2)
    {
        if(a[i]<b[j])
        {
        aray[k]=a[i];
        k=k+1;
        i=i+1;
        }
        else{
            aray[k]=b[j];
            k=k+1;
            j=j+1;
        }
    }

    
    while(i<n1)
    {
        aray[k]=a[i];
        i=i+1;
        k=k+1;
    }

    while(j<n2)
    {
        aray[k]=b[j];
        j=j+1;
        k=k+1;
    }

    return;
}

void mergesort(int aray[], int start, int end)
{
    if(start<end)
    {
    int mid=(end-start)/2;
    mergesort(aray, start, mid);
    mergesort(aray, mid+1, end);
    merge(aray, start, mid, end);
    }
    else 
    return;
}

int main()
{
    int aray[]={9,3,5,2,6,1,8,7};
    cout<<"hii"<<endl;
    mergesort(aray,0,7);
    for(int z=0;z<8;z=z+1)
    {
        cout<<aray[z]<<" ";
        
    }
    cout<<"helo"<<endl;

    return 0;
}