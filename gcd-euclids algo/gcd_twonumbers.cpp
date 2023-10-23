//GCD of two numbers- EUCLIDS ALGORITHM
#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    int rem;
    while (a%b!=0)
    {
        rem=a%b;
        a=b;
        b=rem;
    }
    return rem;
}
int main()
{
    int a,b;
    cout<<"enter the numbers";
    cin>>a>>b;
    cout<<gcd(a,b)<<endl;
    return 0;
}