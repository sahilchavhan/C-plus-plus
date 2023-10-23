#include<iostream>
#include<climits>//for using min and max functions we have to import this function 
using namespace std;

int main(){
    int n;
    int i;
    int aray[n];
    cout<<"enter the number of term";
    cin>>n;
    int minno=aray[0];
    int maxno=aray[0];
    for(i=0;i<n;i=i+1)
    {
        cin>>aray[i];
    }
    cout<<"the array is";
    for(i=0;i<n;i=i+1)
    {
        cout<<aray[i]<<" ";
    }
    
    for(i=0;i<n;i=i+1)
    {
        minno=min(minno,aray[i]);
        maxno=max(maxno,aray[i]);
    }
    cout<<"the minimum number in array is"<<minno<<endl;
    cout<<"the maximum number in array is"<<maxno<<endl;

    return 0;
}