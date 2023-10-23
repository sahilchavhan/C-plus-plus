//to check whether a number is prime or not
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the number\n";
    cin>>n;
    int i,d=0;
    for(i=1;i<n;i=i+1){
        if(n%i==0){
            d=d+1;
        }
    }
    if(d>1){
        cout<<"it is not a prime number\n";
    }
    else{
        cout<<"it is a prime number\n";
    }
    return 0;
}