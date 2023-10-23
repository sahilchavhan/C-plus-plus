//balanced parenthesis
#include<iostream>
#include<stack>
using namespace std;

void valid(string s)
{
    int n=s.size();
    stack<char> st;
    for(int i=0;i<n;i=i+1)
    {
        if(s[i]=='[' || s[i]=='(' || s[i]=='{')
        {
            st.push(s[i]);
        }
        else if(!st.empty() && s[i]==')')
        {
            if(st.top()=='(')
            {
                st.pop();
            }
            else{
                cout<<"unbalanced parenthesis";
                return;
            }
        }

        else if(!st.empty() && s[i]==']')
        {
            if(st.top()=='[')
            {
                st.pop();
            }
            else{
                cout<<"unbalanced parenthesis";
                return;
            }
        }

        else if(!st.empty() && s[i]=='}')
        {
            if(st.top()=='{')
            {
                st.pop();
            }
            else{
                cout<<"unbalanced parenthesis";
                return;
            }
        }
    }

    if(st.empty())
    {
        cout<<"balanced parnthesis";
    }
    else{
        cout<<"unbalanced parenthesis";
    }

}

int main()
{
    string s="{([{}])";
    valid(s);
    return 0;
}