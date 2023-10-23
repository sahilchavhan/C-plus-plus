#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int sum(int n){
    float sum;
    sum=(n*(n+1))/2;
    return sum;
}

int32_t main()
{
    int n;
    cout<<"enter the number";
    cin>>n;
    cout<<sum(n)<<endl;
    return 0;
}