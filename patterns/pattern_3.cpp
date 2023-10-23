#include<iostream>
using namespace std;

int main()
{
    int row,j,col,i,k;
    cin>>row;
    for(i=1;i<=row;i=i+1){
        for(j=row;j>=i;j=j-1){
            cout<<" ";
        }
        
        for(k=1;k<=i;k=k+1)
        {
            cout<<k<<" ";
        }
        cout<<endl;
    }
    return 0;
}
//      1 
//     1 2
//    1 2 3
//   1 2 3 4
//  1 2 3 4 5 