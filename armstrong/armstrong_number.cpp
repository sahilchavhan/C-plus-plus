//to check whether a number is armstrong or not
#include<iostream>
using namespace std;

int main()
{
    int i=0,n,j,original;
    cout<<"enter the number";
    cout<<endl;
    cin>>n;
    original=n;
    while(n>0)
    {
        j=n%10;
        n=n/10;
        i=i+(j*j*j);
    }
    if(i==original)
    cout<<"the given number is armstrong";
    else
    cout<<"the given number is not a armstrong number";
    return 0;
}