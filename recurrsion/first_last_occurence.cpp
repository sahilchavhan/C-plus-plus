//recursive problems
//finding first and last occurence of an elemnt
#include<iostream>
using namespace std;

int first_occurence(int aray[],int n, int i,int key)
{
    if(n==i)
    return -1;

    if(aray[i]==key)
    return i;

    return first_occurence(aray,n,i+1,key);
}
int last_occurence(int aray[],int n, int i,int key)
{
    if(n==i)
    return -1;

    if(aray[n-1]==key)
    return n-1;

    return last_occurence(aray,n-1,i,key);
}
int main()
{
    int n;
    cout<<"enter the number";
    cin>>n;
    int aray[]={1,2,3,4,4,5,7};
    // n=aray.length();
    cout<<"number is "<<first_occurence(aray,7,0,n)<<endl;
    cout<<"number is "<<last_occurence(aray,7,0,n)<<endl;

    return 0;
}