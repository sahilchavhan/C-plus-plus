//fibonacci series
//in fibonacci series every third element is the sum of its previous two elements
#include<iostream>
using namespace std;

void fib(int n)
{
    int i,t1=0,t2=1,next;
    for(i=1;i<=n;i=i+1){
        cout<<t1<<endl;
        next=t1+t2;
        t1=t2;
        t2=next;
    }
    return;
}

int main()
{
    int i,j,n;
    cout<<"enter the number";
    cin>>n;

    fib(n);
    return 0;
}
// enter the number 10
// 0
// 1
// 1
// 2
// 3
// 5
// 8
// 13
// 21
// 34