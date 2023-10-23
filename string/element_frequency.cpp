// element having maximum frequency in a string
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s="harishchanhra";
    int freq[26];
    for(int i=0;i<26;i=i+1)
    {
        freq[i]=0;
    }
    for(int i=0;i<s.size();i=i+1)
    {
        freq[s[i]-'a']=freq[s[i]-'a']+1;
    }
    int mx=INT_MIN;
    char ans='a';
    for(int i=0;i<26;i=i+1)
    {
        if(freq[i]>mx)
        {
        mx=max(mx,freq[i]);
        ans=i+'a';
        }
    }
    cout<<ans<<" is having "<<"maximum frequency "<<mx<<endl;
    return 0;
}