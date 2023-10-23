//to find intersection of two linked list and to intersect two linked lists
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

// void kappend(node* &head,int l, int k)
// {
//     node* oldhead=head;
//     node* temp=head;
//     node* newlast;
//     node* newhead;
//     int count=1;
//     while(temp->next!=NULL)
//     {
//         count=count+1;
//         temp=temp->next;   
//         if(count==l-k)
//         {
//             newlast=temp;
//         } 
//         if(count==l-k+1)
//         {
//             newhead=temp;
//         }  
//     }
//     temp->next=oldhead;
//     newlast->next=NULL;
//     display(newhead);
// }

void intersect(node* &head1,node* &head2, int k)
{
    node* temp1=head1;
    node* temp2=head2;
    while(temp1->data!=k)
    {
        temp1=temp1->next;
    }
    while(temp2->next!=NULL)
    {
        temp2=temp2->next;
    }
    temp2->next=temp1;
    
}

void intersection(node* &head1,node* &head2)
{
    node* temp1=head1;
    node* temp2=head2;
    int l1=length(head1);
    int l2=length(head2);
    int d;
    
    if(l1>l2)
    {
        d=l1-l2;       
        while(d)
        {
            temp1=temp1->next;
            d=d-1;
        }
    }
    else
    {
        d=l2-l1;
        while(d)
        {
            temp2=temp2->next;
            d=d-1;
        }
    }
    while(temp1->data!=temp2->data)
    {
        temp1=temp1->next;
        temp2=temp2->next;
    }
    int m=temp1->data;
    cout<<endl<<"the point of intersection is "<<m<<endl;
}
int main()
{
    node* head1=NULL;
    insertattail(head1,1);
    insertattail(head1,2);
    insertattail(head1,3);
    insertattail(head1,4);
    insertattail(head1,5);
    insertattail(head1,6);
    insertattail(head1,7);
    insertattail(head1,8);
    display(head1);
    // // remove(head,9);
    // // display(head);
    // int l= length(head);
    // int k=2;
    // kappend(head,l,k);
    node* head2=NULL;
    insertattail(head2,11);
    insertattail(head2,12);
    insertattail(head2,13);
    insertattail(head2,14);
    insertattail(head2,15);
    insertattail(head2,16);
    display(head2);
    intersect(head1,head2,5);
    display(head2);
    intersection(head1,head2);
    int l1=length(head1);
    int l2=length(head2);
    cout<<"point of intersection is"<<l1;
    cout<<"point of intersection is"<<l2;

    // cout<<endl<<"the point of intersection is "<<m;
    return 0;
}