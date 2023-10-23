//string question 2 sorting the numbers
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string a="425769";
    
    for(int i=0;i<a.size();i=i+1)
    {
        for(int j=0;j<a.size();j=j+1)
        {
            if(a[j]<a[j+1])
            {
                int temp;
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    cout<<a<<endl;
    

    //method 2 using algorithm
    string b="351835929";
    sort(b.begin(),b.end(),greater<int>());
    cout<<b<<endl;
    return 0;
}