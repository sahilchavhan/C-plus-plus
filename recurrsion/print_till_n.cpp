//recursive problems
//print numbers till n
#include<iostream>
using namespace std;

void sorted_inc(int n)
{
    if(n==1)
    {cout<<"1"<<endl;
    return;
    }
    sorted_inc(n-1);
    cout<<n<<endl;
}
void sorted_dec(int n)
{
    if(n==1)
    {cout<<"1"<<endl;
    return;
    }
    cout<<n<<endl;
    sorted_dec(n-1);
}
int main()
{
    int n;
    cout<<"enter the number";
    cin>>n;
    sorted_inc(n);
    sorted_dec(n);
    return 0;
}