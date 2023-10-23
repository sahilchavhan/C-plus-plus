//recursive problems
//reverse a aray
//reverse a string
#include<iostream>
using namespace std;

void reverse(int aray[],int n)
{
    if(n==1)
    {
        cout<<aray[0];
        return;

    }

    cout<<aray[n-1];
    reverse(aray,n-1);
}

void reverse_string(string s,int n)
{
    if(n==1)
    {
        cout<<s[0];
        return;

    }

    cout<<s[n-1];
    reverse_string(s,n-1);
}

void reverse_string_2(string s)
{
    if(s.size()==1)
    {
        cout<<s[0];
        return;

    }

    cout<<s[s.size()-1];
    reverse_string_2(s.substr(0,s.size()-1));
}
int main()
{
    int aray[]={1,2,3,4,5};
    reverse(aray,5);

    string s="sahil";
    
    reverse_string_2("prithviraj");
    reverse_string(s,s.size());
    return 0;
}