//largest rectangle in histogram
//brute force approach
#include<iostream>
#include<stack>
#include<climits>
#include<vector>
using namespace std;

int get_max_area(vector<int> a)
{
    int n=a.size(),ans=0,i=0;
    stack<int> st;
    a.push_back(0);
    while(i<n){
        while(!st.empty() and a[st.top()]>a[i]){
            int t=st.top();
            int h=a[t];
            st.pop();
            if(st.empty()){
                ans=max(ans, h*i);
            }
            else{
                int len=i-st.top()-1;
                ans=max(ans,h*len);
            }
        }
        st.push(i);
        i++;
    }
    return ans;
}

int main()
{
    int minh,ans=0,len;
    int aray[5]={2,6,1,3,5};
    for(int i=0;i<5;i=i+1)
    {
        minh=aray[i];
        for(int j=i+1;j<5;j=j+1)
        {
            minh=min(minh,aray[j]);
            len=j-i+1;
            ans=max(ans,minh*len);
        }
    } 
    cout<<ans<<endl;

    vector<int> a={2,1,5,6,2,3};
    cout<<get_max_area(a);
    return 0;
}