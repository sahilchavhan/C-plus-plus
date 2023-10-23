#include<iostream>
using namespace std;

int main()
{
    int row,j,col,i,k;
    cin>>row;
    for(i=1;i<=row;i=i+1){
        for(j=1;j<=row+1-i;j=j+1){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}

// 1 2 3 4 5 6
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1