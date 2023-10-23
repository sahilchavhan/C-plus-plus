#include<iostream>
using namespace std;

int main()
{
    int row,j,col,i,k,l;
    cin>>row;
    for(i=1;i<=row;i=i+1){
        for(j=row;j>=i;j=j-1){
            cout<<" ";
        }
        
        for(k=i;k>=1;k=k-1)
        {
            cout<<k;
        }

        for(l=2;l<=i;l=l+1)
        {
            cout<<l;
        }
        cout<<endl;
    }
    return 0;
}

//      1
//     212
//    32123
//   4321234
//  543212345