#include<iostream>
using namespace std;

int main()
{
    int row,j,col,i,k;
    cin>>row;
    for(i=1;i<=row;i=i+1){
        for(j=1;j<=i;j=j+1){
            if((i%2!=0)&&(j%2==0))
            {cout<<"0";}
            else if((i%2==0)&&(j%2!=0))
            {cout<<"0";}
            else if((i%2==0)&&(j%2==0))
            {cout<<"1";}
            else if((i%2!=0)&&(j%2!=0))
            {cout<<"1";}
        }
        cout<<endl;
    }
    return 0;
}

// 1
// 01
// 101
// 0101
// 10101