#include<iostream>
using namespace std;

int fact(int n)
{
    int i,t1=0,t2=1,next;
    for(i=1;i<=n;i=i+1){
        t2=t2*i;
    }
    //cout<<t2<<endl;
    return t2;
}

int main()
{
    int i,j,n,r;
    cout<<"in nCr"<<endl<<"enter the n";
    cin>>n;

    cout<<"enter the r";
    cin>>r; 

    j=(fact(n))/(fact(n-r)*fact(r));
    cout<<"the value of nCr ="<<j;
    return 0;
}