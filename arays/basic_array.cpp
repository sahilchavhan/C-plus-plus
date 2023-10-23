#include<iostream>
using namespace std;

int main(){
    int aray[5]={10,20,30,40,50};
    cout<<"hello everyone";
    int i;
    for(i=0;i<5;i=i+1)
    {
    cout<<aray[i]<<" ";
    }

    int k=sizeof(aray)/sizeof(aray[0]);
    cout<<k<<endl;
    int l=sizeof(aray);
    cout<<l<<endl;
    return 0;
    
    for(int j: aray)
    {
        cout<<aray[j]<<endl;
    }
}