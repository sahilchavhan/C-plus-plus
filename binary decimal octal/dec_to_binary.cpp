//decimal to binary
#include<iostream>
using namespace std;

int main()
{
    int n,bin=0,d,k=1;
    cout<<"enter the number";
    cin>>n;
    while (n>0)
    {
        d=n%10;
        bin=bin+(d*k);
        n=n/10;
        k=k*2;
    }
    cout<<"the binary number is "<<bin<<endl;
    
    return 0;
}