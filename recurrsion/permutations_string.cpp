//recursive problems
//all possible permutations of a string
#include<iostream>
using namespace std;


void permutation(string s, string ans)
{
   if(s.length()==0)
   {
    cout<<ans<<endl;
    return;
   }

    for(int i=0;i<s.size();i=i+1)
    {
        char temp=s[i];
        string a=s.substr(0,i)+s.substr(i+1);
        permutation(a,ans+temp);
    }
}
int main()
{
    string s="ABCD";
    permutation((s),"");
    
    return 0;
}