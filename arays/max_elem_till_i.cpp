//maximum element of an aray till i
#include<iostream>
using namespace std;

int main()
{
    int i,n,mx=INT_MIN;
    cout<<"eneter the number of terms";
    cin>>n;
    int aray[n];
    for(i=0;i<n;i=i+1)
    {
        cin>>aray[i];
    }
    for(i=0;i<n;i=i+1)
    {
        mx=max(mx,aray[i]);
    cout<<"the maximum element is"<<mx;
    }
    return 0;
}