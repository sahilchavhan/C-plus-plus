//to MERGE TWO SORTED LINKED LISTS
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
void merge(node* &head1,node* &head2, node* &head3)
{
    node* temp1=head1;
    node* temp2=head2;
    node* temp3=head3;
    while(temp1->next!=NULL && temp2->next!=NULL){
    if((temp1->data)<(temp2->data))
    {
        temp3->next=temp1;
        temp1=temp1->next;
    }
    else
    {
        temp3->next=temp2;
        temp2=temp2->next;
    }
    }
    while(temp1->next!=NULL){
        temp3->next=temp1;
        temp1=temp1->next;
    }
    while(temp2->next!=NULL){
        temp3->next=temp2;
        temp2=temp2->next;
    }
    
}
int main()
{
    node* head1=NULL;
    insertattail(head1,1);
    insertattail(head1,4);
    insertattail(head1,5);
    insertattail(head1,7);
    display(head1);

    node* head2=NULL;
    insertattail(head2,2);
    insertattail(head2,3);
    insertattail(head2,6);
    display(head2);
    
    node* head3=NULL;
    merge(head1,head2,head3);
    display(head3);
    return 0;
}