#include<iostream>
using namespace std;

int main()
{
    int i,j,n,m;
    int a[m];
    cout<<"enter the number of terms";
    cin>>n;
    int aray[n];
    for(i=0;i<n;i=i+1)
    {
        cin>>aray[i];
    }

    for(i=0;i<n;i=i+1)
    {
        if((aray[i]>aray[i+1])&&(for(j=0;j<i;j=j+1){aray[j]<aray[i]}))
        cout<<i<<"is a record breaking day"<<endl;
    }
    return 0;
}