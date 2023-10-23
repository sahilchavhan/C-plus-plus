//stack implementation using aray
#include<iostream>
using namespace std;

#define n 100

class stack
{
    int* arr;
    int top;

    public:
    stack()
    {
        arr=new int[n];
        top=-1;
    }

    void push(int k)
    {
    if(top==n-1)
    {
        cout<<"stac overflow"<<endl;
        return;
    }
    top=top+1;
    arr[top]=k;
    }

    void pop()
    {
        if(top==-1)
        {
        cout<<"stac underflow"<<endl;
        return;
        }
        top=top-1;
    }

    void Top()
    {
        if(top==-1)
        {
        cout<<"stac underflow"<<endl;
        return;
        }
        cout<<arr[top];
    }

    bool isempty()
    {
        return top==-1;
    }
};

int main()
{
    stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.pop();
    s.isempty();
    s.Top();
    return 0;
}