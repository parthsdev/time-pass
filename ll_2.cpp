#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

void traverse(node *head)
{
    if(head==NULL)
    {
        return;
    }
    node *temp=head;
    while(head!=NULL)
    {
        cout<<head->data<<endl;
        head=head->next;
    }

}
node *insert_atbegin(node *head,int data)
{
    if(head==NULL)
    {
        return new node(data);
    }
    node *begin=new node(data);

    begin->next=head;
    return begin;
}

node *insert_at_end(node *head ,int data)
{
    if(head==NULL)return new node(data);

    node *end=new node(data);
    node *temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=new node(data);

    return head;
}
node* sorted_insert(node *head,int x)
{
    if(head==NULL)
    {
        return NULL;
    }
    node *temp=head;
    while(temp->next!=NULL && temp->next->data<x)
    {
        temp=temp->next;
    }

    node *neww=new node(x);
    node *a=NULL;
   a=temp->next;
   temp->next=neww;
   neww->next=a;

   return head;
   
}

void print_middle(node *head)
{
    if(head==NULL)return;
    node *slow=head;
    node *fast=head;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    cout<<slow->data;
}
void nthnode(node *head,int n)
{
    if(head==NULL)return;
    node *slow=head;
    node *fast=head;
    for (int i = 0; i < n; i++)
    {
        if(fast==NULL)return -1;
        fast=fast->next;
    }

    while(fast!=NULL )
    {
        slow=slow->next;
        fast=fast->next;
    }
    return slow->data;

}
node* reverse(node *head)
{
    node *nxt;
    node *prev=NULL;
    node *curr=head;
    while(curr!=NULL)
    {
        nxt=curr->next;
        curr->next=prev;

        prev=curr;
        curr=nxt;
    }
}
void remove_dupliciates(node *head)
{
    if(head==NULL)return;
    node *curr=head;
    while(curr!=NULL && curr->next!=NULL)
    {
        if(curr->data==curr->next->data)
        {
            node *temp=curr->next;
            curr->next=curr->next->next;
            delete(node);
        }
        else
        {
            curr=curr->next;
        }
    }
}

bool isloop(node *head)
{
    node *fast=head;
    node *slow=head;

    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)return true;
    }

   slow=head;
   while(fast->next!=)
}
node* segrate(node *head)
{
    if(head==NULL)return NULL;
    node *es=NULL;
    node *en=NULL;
    node *os=NULL;
    node *on=NULL;

   node *temp=head;
   while(temp!=NULL)
   {
      int x = temp->data;
      if(x%2==0)
      {
        if(es==NULL)
        {
            es=temp;
            en=temp;

        }
        else
        {
            en->next=temp;
            en=en->next;
        }
      }

      else
      {
        if(os==NULL)
        {
            es=temp;
            en=temp;
        }
        else
        {
            on->next=temp;
            on=on->next;
        }
      }

      temp=temp->next;

   }
   if(os==NULL || es==NULL)
   {
    return head;
   }
   en->next=os;
   on->next=null;
   return es;
}

int getcount(node *head)
{
    int count=0;
    while(head!=NULL)
    {
        count++;
        head=head->next;
    }
    return count;
}
int intesection(node *head1,node *head2,int d)
{
    for (int i = 0; i < d; i++)
    {
        if(head1==NULL)return -1;
        head1=head1->next;
        
    }
    while(head1!=NULL && head2!=NULL)
    {
        if(head1==head2)return ;

        head1=head1->next;
        head2=head2->next;
    }
}
int _getintersection(node *head1,node *head2)
{
    int a=getcount(head1);
    int b =getcount(head2);
    int d=0;
    if(a>b)
    { 
        d= a-b;
       intersection(head1,head2,d);
        
    }
    else
    {
        d=b-a;
        intersection(head2,head1,d);

    }

}
node* sorted_merge(node *head1,node *head2)
{
    node *head=NULL;
    node *tail=NULL;
    if(head1->data <=head2->data)
    {
       head=head2;
       tail=head2;
       head2=head2->next;
    }
    else 
    {
        head=head1;
        tail=head1;
        head1=head1->next;

    }

    while(head1!=NULL && head2!=NULL)
    {
        if(head1->data <= head2->data )
        {
            tail->next=head1;
            tail=tail->next;
            head1=head1->next;
        }
        else 
        {
            tail->next=head2;
            tail=tail->next;
            head2=head2->next;
        }
    }

   if(head1==NULL)
   {
    tail->next=head2;
   }


}