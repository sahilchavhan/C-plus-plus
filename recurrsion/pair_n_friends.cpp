//recursive problem
// pairing of n friends
#include<iostream>
using namespace std;

int pairing(int n)
{
    if(n==0 || n==1 || n==2)
    {
        return n;
    }
    else
    {
        return pairing(n-1)+pairing(n-2)*(n-1);
    }
}

int main()
{
    cout<<pairing(4)<<endl;

    return 0;
}