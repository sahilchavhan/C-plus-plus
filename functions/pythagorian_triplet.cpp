#include<iostream>
//#include<bits/stdc++.h>
using namespace std;

bool check(int x,int y, int z){
    int num;
    num=max(x,max(y,z));
    if(num==x){
        if(x*x==(y*y+z*z))
        return true;
        else
        return false;
    }

    else if(num==y){
        if(y*y==(x*x+z*z))
        return true;
        else
        return false;
    }
    else{
        if(z*z==(x*x+y*y))
        return true;
        else
        return false;
    }

}

int main()
{
    int x,y,z;
    cout<<"enter the numbers";
    cin>>x>>y>>z;
    cout<<endl;
    if (check(x,y,z))
    {
        cout<<"the numbers are pythagorian triplet";
    }
    else
     cout<<"the numbers are not pythagorian triplet";
    return 0;
}