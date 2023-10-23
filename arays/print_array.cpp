#include<iostream>
using namespace std;

int main(){
    int n;
    int i;
    int aray[n];
    cout<<"enter the number of term";
    cin>>n;
    for(i=0;i<n;i=i+1)
    {
        cin>>aray[i];
    }
    cout<<"the array is";
    for(i=0;i<n;i=i+1)
    {
        cout<<aray[i]<<" ";
    }
    return 0;
}