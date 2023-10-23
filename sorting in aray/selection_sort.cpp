//selection sort
//in selection sort we are actully compairing all the elements of array with the first element of array and if it is less then we are swapping it withthe first element
//order is O(n2)
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
    for(i=0;i<n;i=i+1)
    {
        for(j=i+1;j<=n;j=j+1)
        {
            if(aray[i]>aray[j])
            {
                pos=aray[i];
                aray[i]=aray[j];
                aray[j]=pos;
            }
        }
    }

    for(i=0;i<n;i=i+1)
    {
        cout<<aray[i]<<" ";
    }


    return 0;
}

