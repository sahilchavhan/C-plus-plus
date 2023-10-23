//queue implementaton using aray
//first in first out approach
//twon pointers front and back

#include<iostream>
using namespace std;

#define n 20

class queue
{
    int* aray;
    int front;
    int back;
    public:
    queue()
    {
        aray=new int[n];
        front=-1;
        back=-1;
    }

    void push(int x)
    {
        if(back==n-1)
        {
            cout<<"queue overflow";
            return;
        }
        back=back+1;
        aray[back]=x;

        if(front==-1)
        {
            front=front+1;
        }
    }

    void pop()
    {
        if(front==-1 || front>back)
        {
            cout<<"queue underflow";
            return;
        }
        front=front+1;
    }

    void peek()
    {
        if(front==-1 || front>back)
        {
            cout<<"queue underflow";
            return;
        }
        cout<<aray[front];
    }

    bool isempty()
    {
        if(front>back)
        {
            return true;
        }
        else
        return false;
    }
};
int main()
{
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.peek();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.peek();
    cout<<q.isempty();
    return 0;
}