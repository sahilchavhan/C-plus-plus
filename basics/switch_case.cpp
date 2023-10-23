//switc case program
#include<iostream>
using namespace std;
int main()
{
    int ch;
    float a,b;
    cout<<"enter the value of a";
    cin>>a;
    cout<<"enter the value of b";
    cin>>b;
    cout<<"enter the choice";
    cin>>ch;
    switch(ch){
        case 1: cout<<"the sum is";
                cout<<a+b;break; 
        case 2: cout<<"the difference is";
                cout<<a-b;break; 
        case 3: cout<<"the product is";
                cout<<a*b;break; 
        default: cout<<"please enter valid option";
    }
    return 0;
}