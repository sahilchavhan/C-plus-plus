//count-inversion : merge sort
#include<iostream>
using namespace std;

long long merge(int aray[],int low,int mid,int high)
{
    int inv=0;
    int n1=mid-low+1;
    int n2=n1;
    int a[n1];
    int b[n2];
    for(int i=0;i<n1;i=i+1)
    {
        a[i]=aray[low+i];
    }
    for(int i=0;i<n2;i=i+1)
    {
        b[i]=aray[mid+1+i];
    }

    int i=0,j=0,k=low;
    while(i<n1 && j<n2)
    {
        if(a[i]<b[j])
        {
            aray[k]=a[i];
            k=k+1;
            i=i+1;
        }
        else if(a[i]>b[j])
        {
            aray[k]=b[j];
            k=k+1;
            j=j+1;
            inv=inv+n1-i;//it is becz in merge sort arays are sorted while merging so if a[i]>b[j] then all remmmaining elements of aray 'a' are also greater than b

        }
    }

    while(i<n1)
    {
        aray[k]=a[i];
        k=k+1;
        i=i+1;   
    }
    while(j<n2)
    {
        aray[k]=b[j];
        k=k+1;
        j=j+1;   
    }
    return inv;

}
long long mergesort(int aray[],int low,int high)
{
    int inv=0;
    while(low<high)
    {
        int mid;
        mid=(low+high)/2;
        inv=inv+mergesort(aray,low,mid);
        inv=inv+mergesort(aray,mid+1,high);
        inv=inv+merge(aray,low,mid,high);
    }

    return inv;
}

int main()
{
    int n;
    cout<<"enter value of n";
    cin>>n;
    int aray[n];
    cout<<"ener the elements";
    for (int i=0;i<n;i=i+1)
    {
        cin>>aray[i];
    }
    cout<<endl;
    cout<<mergesort(aray,0,n-1);
    return 0;
}