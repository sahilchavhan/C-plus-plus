//recursive problems
//print substrings of a given string
#include<iostream>
using namespace std;


void substring(string s, string ans)
{
   if(s.length()==0)
   {
    cout<<ans<<endl;
    return;
   }

   char temp=s[0];
   string a=s.substr(1);

   substring(a,ans);
   substring(a,ans+temp);
}
int main()
{
    string s="ABCD";
    substring((s),"");
    
    return 0;
}