//append last k nodes to start of linked list
#include <iostream>
using namespace std;

class node
{
    public:
    int data;
    node* next;
    node* prev;

    node(int val)
    {
        data=val;
        next=NULL;
        prev=NULL;
    }
};

void insertathead(node* &head,int val)
{
    node* n=new node(val);
    n->next=head;
    if(head!=NULL)
    {
        head->prev=n;
    }
    head=n;
}
void insertattail(node* &head,int val)
{
    if(head==NULL)
    {
        insertathead(head,val);
        return;
    }
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    node* n=new node(val);
    temp->next=n;
    n->prev=temp;

}

void display(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"<=>";
        temp=temp->next;
    }
    cout<<endl;

}

void remove(node* &head, int val)
{
    node* temp=head;
    while(temp->data!=val)
    {
        temp=temp->next;
        if(temp->next==NULL)
        {
            cout<<"element is not present";
        }
    }
    node* todelete=temp;
    temp->prev->next=temp->next;
    temp->next->prev=temp->prev;
    delete(todelete);
}

int length(node* &head)
{
    node* temp=head;
    int count=1;
    while(temp->next!=NULL)
    {
        count=count+1;
        temp=temp->next;      
    }
    return count;
}

void kappend(node* &head,int l, int k)
{
    node* oldhead=head;
    node* temp=head;
    node* newlast;
    node* newhead;
    int count=1;
    while(temp->next!=NULL)
    {
        count=count+1;
        temp=temp->next;   
        if(count==l-k)
        {
            newlast=temp;
        } 
        if(count==l-k+1)
        {
            newhead=temp;
        }  
    }
    temp->next=oldhead;
    newlast->next=NULL;
    display(newhead);
}
int main()
{
    node* head=NULL;
    insertattail(head,1);
    insertattail(head,2);
    insertattail(head,3);
    insertattail(head,4);
    insertattail(head,5);
    insertattail(head,6);
    insertattail(head,7);
    insertattail(head,8);
    display(head);
    // remove(head,9);
    // display(head);
    int l= length(head);
    int k=2;
    kappend(head,l,k);
    return 0;
}