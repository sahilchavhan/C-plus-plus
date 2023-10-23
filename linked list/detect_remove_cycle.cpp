//detection and removal of cycle in linked list using floyd's algorithm
//we are making two pointers slow and fast slow is moving by one and fast is moving by two 
#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node* next;

    node(int val)
    {
        data=val;
        next=NULL;
    }
};

void insertAtTail(node* &head,int val)
{
    node* n=new node(val);
    if(head==NULL)
    {
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
}

void display(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
}

void makeloop(node* &head, int val)
{
    node* temp=head;
    node* snode;
    while(temp->next!=NULL)
    {
        if(temp->data==val)
        {
            snode=temp;
        }
        temp=temp->next;
    }
    node* newnode=temp;
    newnode->next=snode;

}

void detectcycle(node* &head)
{
    node* temp=head;
    node* slow=temp;
    node* fast=temp;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(fast==slow)
        {
            cout<<endl<<"looop is present";
            return;
        }
    }
    cout<<"loop is not present";

}

void removecycle(node* &head)
{
    node* slow=head;
    node* fast=head;
    do
    {
        slow=slow->next;
        fast=fast->next->next;
    }while(fast!=slow);
    fast=head;
    while (fast->next!=slow->next)
    {
        slow=slow->next;
        fast=fast->next;
    }
    slow->next=NULL;
}
int main()
{
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);
    insertAtTail(head,7);
    insertAtTail(head,8);
    makeloop(head,4);
    // display(head);
    detectcycle(head);
    removecycle(head);
    detectcycle(head);
    return 0;
}
