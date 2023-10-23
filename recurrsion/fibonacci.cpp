//recursive problems
// fibonacci series
#include<iostream>
using namespace std;

void fibonaci(int n)
{
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
    else 
    return fibonaci(n-1)+fibonaci(n-2)
}

int main()
{
    int n;
    cout<<"enter the number";
    cin>>n;
    cout<<fibonaci(n)<<endl;
    return 0;
}