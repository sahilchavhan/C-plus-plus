//postfix expression value
#include<iostream>
#include<stack>
#include<math.h>
using namespace std;

void prefix(string s)
{
    stack<int> st;
    for(int i=0;i<s.length();i=i+1)
    {
        if(s[i]>='0' && s[i]<='9')
        {
            st.push(s[i]-'0');
        }
        else{
            int elem2=st.top();
            st.pop();
            int elem1=st.top();
            st.pop();

            switch (s[i])
            {
                case '+':st.push(elem1+elem2);break;
                case '-':st.push(elem1-elem2);break;
                case '*':st.push(elem1*elem2);break;
                case '/':st.push(elem1/elem2);break;
                default: break;
            }
        }
    }
    cout<<st.top()<<endl;
}
int main()
{
    prefix("46+2/5*7+");
    return 0;
}
