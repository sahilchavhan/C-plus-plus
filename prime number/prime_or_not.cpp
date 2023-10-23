//prime number or not
#include<iostream>
using namespace std;

int main()
{
    int i,n,j=0;
    cout<<"enter the number";
    cin>>n;
    for(i=1;i<=n;i=i+1)
    {
        if(n%i==0)
        {
            j=j+1;
        }
    }
    if(j>=2)
    cout<<n<<"is not a prime number";
    else
    cout<<n<<"is a prime number";
    return 0;
}

// enter the number 58
// 58 is not a prime number