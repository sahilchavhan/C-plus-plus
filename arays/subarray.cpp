//subarray 
#include<iostream>
using namespace std;

int main()
{
    int i,j,n,sum=0;
    cout<<"enter the number of terms";
    cin>>n;
    int aray[n];
    for(i=0;i<n;i=i+1)
    {
        cin>>aray[i];
    }
    for(i=0;i<n;i=i+1)
    {
        for(j=0;j<=i;j=j+1)
        {
            // sum=sum+aray[j];
            // cout<<"sum is"<<sum<<endl;
            for(int k=j;k<=i;k=k+1)
            {
            cout<<aray[k]<<" ";

            }
        cout<<endl;
        }
    }
    return 0;
}