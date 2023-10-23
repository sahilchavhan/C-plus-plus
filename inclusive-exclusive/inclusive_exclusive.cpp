//inclusive-exclusive question
#include<iostream>
using namespace std;

int calculate(int tea,int cof,int both)
{
    return (tea+cof)-both;
}

int main()
{
    int tea,cof,both,total;
    cout<<"enter the number of people who are taking tea, coffee, both";
    cin>>tea>>cof>>both;
    total=calculate(tea,cof,both);
    cout<<"total number of people are"<<total;

    return 0;
}