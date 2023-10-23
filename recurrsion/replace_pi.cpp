//recursive problems
//replace pi with 3.14 in string
#include<iostream>
using namespace std;

void replaced(string s)
{
    if(s.length()==0)
    return;

    if(s[0]=='p' && s[1]=='i')
    {
        cout<<"3.14";
        replaced(s.substr(2));
    }

    cout<<s[0];
    replaced(s.substr(1));
}
int main()
{
    string s="bacpirewdpihsj";
    replaced(s);
    // cout<<s.replace('a','z');
    return 0;
}