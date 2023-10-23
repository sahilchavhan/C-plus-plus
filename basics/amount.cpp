#include<iostream>
using namespace std;

int main(){
    int amount=1400;
    int n=0;
    int date;

    for(date=1;(date<=30 && amount!=0);date=date+1){
        if(date%2==0){
            n=n+1;
            amount=amount-200;
            
        }
    }
    cout<<"this amount wil finish in "<<(n*2)<<" days";
    return 0;
}