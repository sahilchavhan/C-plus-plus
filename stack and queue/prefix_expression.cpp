//prefix expression value
#include<iostream>
#include<stack>
#include<math.h>
using namespace std;

void prefix(string s)
{
    stack<int> st;
    for(int i=s.length()-1;i>=0;i=i-1)
    {
        if(s[i]>='0' && s[i]<='9')
        {
            st.push(s[i]-'0');
        }
        else{
            int elem1=st.top();
            st.pop();
            int elem2=st.top();
            st.pop();

            switch (s[i])
            {
                case '+':st.push(elem1+elem2);break;
                case '-':st.push(elem1-elem2);break;
                case '*':st.push(elem1*elem2);break;
                case '/':st.push(elem1/elem2);break;
            }
        }
    }
    cout<<st.top()<<endl;
}
int main()
{
    prefix("-+7*45+20");
    return 0;
}
