//recursive problems
// product of n natural numbers
#include<iostream>
using namespace std;

int product(int n)
{
    if(n==1)
    return 1;
    else 
    return n*product(n-1);
}

int main()
{
    int n;
    cout<<"enter the number";
    cin>>n;
    cout<<"product is "<<product(n)<<endl;

    return 0;
}