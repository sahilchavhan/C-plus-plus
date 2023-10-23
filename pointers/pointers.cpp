//pointers
#include<iostream>
using namespace std;

int main()
{
    int a=10;
    int *ptr;
    ptr=&a;
    cout<<a<<endl;//10
    cout<<ptr<<endl;// address of a 0x61feb8
    cout<<&ptr<<endl;// address of pointer 0x61feb4
    cout<<*ptr<<endl; // 10


    int **bptr;//this is pointer to a pointer
    bptr=&ptr;
    cout<<bptr<<endl; // address of pointer 0x61feb4
    cout<<*bptr<<endl; // address of a 0x61feb8


    ptr=ptr+1;
    cout<<ptr<<endl; // address of incremented pointer 0x61febc
    // in the incremented address we can see that adress is incremented by r
    return 0;
}