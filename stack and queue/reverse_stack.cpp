//reverse a stack
#include<iostream>
#include<stack>
using namespace std;

void reverse(string s)
{
    stack<string> st;
    for(int i=0;i<s.size();i=i+1)
    {
        string word="";
        while((s[i]!=' ') && i<s.size())
        {
            word=word+s[i];
            i=i+1;
        }
        st.push(word);
    }

    while(!(st.empty()))
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
}

int main()
{
    string s="hey what are you doing?";
    reverse(s);
    return 0;
}