//decimal to octal
#include<iostream>
using namespace std;

int main()
{
    int n,oct=0,d,k=1;
    cout<<"enter the number";
    cin>>n;
    while (n>0)
    {
        d=n%10;
        oct=oct+(d*k);
        n=n/10;
        k=k*8;
    }
    cout<<"the octal number is "<<oct<<endl;
    
    return 0;
}