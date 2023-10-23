//print all prime numbers between n1 and n2
#include<iostream>
using namespace std;

bool isprime(int i)
{
    int j,count=0;
    for(j=2;j<=i;j=j+1)
    {
        if(i%j==0) 
        {count=count+1;}
    }
    if(count>1)
    {return true;}
    else
    {return false;}    
}

int main()
{
    int a,b,i,j;
    cout<<"enter the numbers";
    cin>>a>>b;
    for(i=a;i<=b;i=i+1)
    {
        if(isprime(i)==0)
        cout<<i<<endl;
    }
    return 0;
}

// enter the numbers 10 30
// 
// 11
// 13
// 17
// 19
// 23
// 29