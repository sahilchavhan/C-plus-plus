//linked list

#include<iostream>
using namespace std;

class node
{
    public:
    node* next;
    int data;

    node(int val)
    {
        data=val;
        next=NULL;
    }
};

void insertAtHead(node* &head,int val)
{
    node* n=new node(val);
    n->next=head;
    head=n;
}

void insertAtTail(node* &head, int val)
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
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

bool search(node* head, int key)
{
    node* temp=head;
    while(temp!=NULL)
    {
        if(temp->data==key)
        return true;

        temp=temp->next;
    }
    return false;
}

void remove(node* &head,int val)
{
    if(head==NULL)
    {
        return;
    }

    if(head->next==NULL)
    {
        removeHead(val);
        return;
    }
    node* temp=head;
    while(temp->next->data!=NULL)
    {
        temp=temp->next;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
}

void removeHead(node* &head)
{
    node* todelete=head;
    head=head->next;
    delete todelete;
}

node* reverse(node* &head)
{
    node* previousptr=NULL;
    node* currentptr=head;
    node* nextptr;
    while(currentptr!=NULL)
    {
        nextptr=currentptr->next;
        currentptr->next=previousptr;

        previousptr=currentptr;
        currentptr=nextptr;
    }
    return previousptr;
}

node* reverse_k(node* &head, int k)
{
    node* previousptr=NULL;
    node* currentptr=head;
    node* nextptr;
    int count=0;
    while(currentptr!=NULL && count<k)
    {
        nextptr=currentptr->next;
        currentptr->next=previousptr;

        previousptr=currentptr;
        currentptr=nextptr;

        count++;
    }
    if(nextptr->next!=NULL){
    head->next=reverse_k(nextptr,k);
    }
    return previousptr;
}
int main()
{
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    display(head);
    insertAtHead(head,4);
    display(head);
    //search(head,5);
    remove(head,2);
    removeHead(head);
    node* head_1=reverse(head);
    display(head_1); 
    node* head_2=reverse_k(head,2);
    display(head_2);

    return 0;
}