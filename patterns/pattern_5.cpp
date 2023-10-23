#include<iostream>
using namespace std;

int main()
{
    int row;
    cin>>row;
    for(int i=1;i<=row;i=i+1){
        for(int j=row;j>=i;j=j-1){
            cout<<" ";
        }
        
        for(int k=1;k<=(2*i-1);k=k+1)
        {
            cout<<"*";
        }

        
        cout<<endl;
    }
    
    return 0;
}

//     *
//    ***
//   *****
//  *******
//  *******
//   *****
//    ***
//     *