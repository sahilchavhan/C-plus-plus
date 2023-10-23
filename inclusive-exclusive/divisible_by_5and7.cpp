//inclusive-exclusive question 2
// numbers divisible by 5 and 7
#include<iostream>
using namespace std;

int calculate(int n)
{
    int c1=n/5;
    int c2=n/7;
    int c3=n/(5*7);
    return (c1+c2)-c3;// this is inclusive-exclusive principle
}

int main()
{
    int tea,cof,both,total,n;
    cout<<"enter the number upto which you want to found";
    cin>>n;
    total=calculate(n);
    cout<<"total number of people are"<<total;

    return 0;
}