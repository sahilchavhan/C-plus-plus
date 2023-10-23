//recursive problems
//move all x to right 
#include<iostream>
#include<string>
using namespace std;

string movex(string s)
{
    if(s.length()==0)
    return "";

    char temp=s[0];
    string a=s.substr(1);

    if(temp=='x'){
    return movex(a)+temp;
    }
    return temp+movex(a);
}

void movex_1(string s)
{
    if(s.size()==0)
    return;

    if(s[0]=='x')
    {
        string a=s.substr(1);
        movex_1(a);
        cout<<s[0];
    }

    else
    {
        string a=s.substr(1);
        cout<<s[0];
        movex_1(a);
    }
}
int main()
{
    string s="aaxaaabxbbxccbbbdde";
    string c=movex(s);
    cout<<c<<endl;

    string d="axsdxhdgfxxsfe";
    movex_1(d);
    return 0;
}