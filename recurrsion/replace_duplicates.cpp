//recursive problems
//replace duplicate elements from string
#include<iostream>
using namespace std;

string remove(string s)
{
    if(s.length()==0)
    return " ";

    char temp=s[0];
    string a=s.substr(1);

    if(temp==a[0]){
    return remove(a);
    }
    return temp+remove(a);
}

void remove_1(string s)
{
    if(s.size()==0)
    return;

    char temp=s[0];
    string g=s.substr(1);

    if(temp==g[0])
    {
        remove_1(g);
    }
    else
    {
        cout<<temp;
        remove_1(g);
    }
}
int main()
{
    string s="aaaaaabbbbccccbbbdde";
    string c=remove(s);
    cout<<c;

    string k="qqqwwweer";
    remove_1(k);
    return 0;

}