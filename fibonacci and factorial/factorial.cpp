//factorial of a number
#include<iostream>
using namespace std;

void fact(int n)
{
    int i,t1=0,t2=1,next;
    for(i=1;i<=n;i=i+1){
        t2=t2*i;
    }
    cout<<t2<<endl;
    return;
}

int main()
{
    int i,j,n;
    cout<<"enter the number";
    cin>>n;

    fact(n);
    return 0;
}

// enter the number5
// 120