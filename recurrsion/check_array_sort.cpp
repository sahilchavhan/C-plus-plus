//recursive problems
//check wether aray is sorted or not
#include<iostream>
using namespace std;

bool sorted(int aray[],int n)
{
    if(n==1)
    return true;
    
    return ((aray[0]<aray[1])&&(sorted(aray+1,n-1)));
}

int main()
{
     int n;
    // cout<<"enter the number";
    // cin>>n;
    int aray[]={1,2,3,4,5,6,7};
    // n=aray.length();
    cout<<"aray is "<<sorted(aray,7)<<endl;
    return 0;
}