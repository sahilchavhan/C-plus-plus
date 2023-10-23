//recursive problems
// sum of n natural numbers
#include<iostream>
using namespace std;

int sum(int n)
{
    if(n==1)
    return 1;
    else 
    return n+sum(n-1);
}

int main()
{
    int n;
    cout<<"enter the number";
    cin>>n;
    cout<<"sum is "<<sum(n)<<endl;

    return 0;
}