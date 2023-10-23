#include<iostream>
using namespace std;

int main()
{
    int i,n,j,reverse=0;
    cout<<"enter the number";
    cout<<endl;
    cin>>n;
    while(n!=0)
    {
        j=n%10;
        reverse=(reverse*10)+j;
        n=n/10;
    }
    cout<<"the reverse number is "<<reverse;
    return 0;
}

// enter the number
// 12345
// the reverse number is 54321