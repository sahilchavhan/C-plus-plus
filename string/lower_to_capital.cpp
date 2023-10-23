//string question 1 lower to capital
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string a="qwertyuiop";
    //for lower to capital we will decrease ascii value by 32
    for(int i=0;i<a.size();i=i+1)
    {
        if(a[i]>='a' && a[i]<='z')
        a[i]=a[i]-32;
    }
    cout<<a<<endl;
    //for capital to lower we will increase ascii value by 32


    //method 2 using algorithm
    string b="asdfghjkl";
    transform(b.begin(),b.end(),b.begin(),::toupper);
    cout<<b<<endl;
    return 0;
}