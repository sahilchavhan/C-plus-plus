//infix to postfix
#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;

int prec(char a)
{
    if(a=='^')
    {
        return 3;
    }
    else if(a=='/' || a=='*')
    {
        return 2;
    }
    else if(a=='+' || a=='-')
    {
        return 1;
    }
    else
    return -1;
}

string infixtopostfix(string s)
{
    stack<char> st;
    string res;
    for(int i=0;i<=s.length()-1;i=i+1)
    {
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') )
        {
            res+=s[i];
        }
        else if (s[i]=='(')
        {
            st.push(s[i]);
        }
        else if(s[i]==')')
        {
            while (!st.empty() && st.top()!='(')
            {
                res+=st.top();
                st.pop();
            }
            if(!st.empty())
            {
                st.pop();
            }
        }
        else
        {
            while((!st.empty()) && (prec(st.top())>prec(s[i])))
            {
                res+=st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while(!st.empty())
    {
        res+=st.top();
        st.pop();
    }
    return res;
}


string infixtoprefix(string s)
{
    reverse(s.begin(),s.end());
    stack<char> st;
    string res;
    for(int i=0;i<=s.length()-1;i=i+1)
    {
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') )
        {
            res+=s[i];
        }
        else if (s[i]=='(')
        {
            st.push(s[i]);
        }
        else if(s[i]==')')
        {
            while (!st.empty() && st.top()!='(')
            {
                res+=st.top();
                st.pop();
            }
            if(!st.empty())
            {
                st.pop();
            }
        }
        else
        {
            while((!st.empty()) && (prec(st.top())>prec(s[i])))
            {
                res+=st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while(!st.empty())
    {
        res+=st.top();
        st.pop();
    }
    reverse(res.begin(),res.end());
    return res;
}
int main()
{
    cout<<infixtopostfix("(a-b/c)*(a/k-l)")<<endl;
    cout<<infixtoprefix("(a-b/c)*(a/k-l)")<<endl;

    return 0;
}