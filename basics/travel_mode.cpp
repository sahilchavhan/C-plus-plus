#include <iostream>
using namespace std;

int main(){
    int amount;
    
    while(amount!=0){
    cout<<"enter the amount";
    cin>>amount;
    if(amount>5000){
        if(amount>10000){
            cout<<"you can go with buisness class flight\n";
        }
        else{
            cout<<"you can go with econmic class flight\n";
        }
    }
    else if(amount>2000 && amount<5000){
        cout<<"you can go with train\n";

    }
    else if(amount<2000){
        cout<<"you can go with bus\n";
    }
    else{
        cout<<"you should go wiyh bike\n";
    }
    }
    return 0;
}