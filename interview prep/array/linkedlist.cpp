#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node *next;
    node(int data)
    {
        this->data=data;
        next=NULL;
    }
};


void print_linked_list(node *head)
{
    if(head==NULL)return;
    node *curr=head;
    while (curr!=NULL)
    {
        cout<<curr->data;
        curr=curr->next;
    }
    

}

node* insert_atbegin(node *head,int data)
{
    node *newnode = new node(data);
    newnode->next=head;
    return  newnode;
}

node* insert_end(node *head,int data)
{
    node *newnode=new node(data);
   while (head->next!=NULL)
   {
     head=head->next; 
   }
   
  head->next=newnode;
  return head;
}

node* insert_sorted(node *head,int x)
{
    if(head==NULL)return new node(x);
    node *temp=head;
    while (temp->next!=NULL && temp->next->data<x)
    {
        temp=temp->next;
    }
    node *a=temp->next;
   node* newnode=new node(x);

   temp->next=newnode;
   newnode->next=a;
}
void middle_linked(node *head)
{
    if(head==NULL)return ;
    node *fast=head;
    node *slow=head;

   while(fast!=NULL && fast->next!=NULL)
   {
     fast=fast->next->next;
     slow=slow->next;
     
   }
    cout<<slow->data;
}
void nthNode(node *head,int n)
{
  node *temp=head;
  node *fast=head;
 for (int i = 0; i < n; i++)
 {
    if(fast==NULL)return;
    fast=fast->next;
 }
 node *second=head;
 while (fast!=NULL)
 {
    fast=fast->next;
    second=second->next;
    
 }
 
}

node* reverse_list(node *head)
{
    if(head==NULL)return NULL;
    node* prev=NULL;
    node *curr=head;
    while (curr!=NULL)
    {
        node* next=curr->next;

        curr->next=prev;
        
        prev=curr;
        curr=next;
    }

    return prev;
    
}

node* remove_duplicates(node *head)
{
    node *curr=head;
    while (curr!=NULL && curr->next!=NULL)
    {
        if(curr->data ==curr->next->data)
        {
            node *temp=curr->next;
            curr->next=curr->next->next;
            delete(temp);
        }
        else
        {
            curr=curr->next;

        }
    }
    
}
node* reverse_k(node *head,int k)
{
   node *prev=NULL;
   node *curr=head;
   int count=0;
  while (curr!=NULL && count<k)
  {
    node *nxt=curr->next;

    curr->next=prev;
  
  prev=curr;
  curr=nxt;
  count++;

  }
  if(nxt!=NULL)
  {
    node* rest_head=reverse_k(nxt,k);
    head->next=rest_head;
  }
   
}
bool isloop(node *head)
{
   node *slow=head;
   node *fast=head;
    while (fast!=NULL &&fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)return true;

    }
     return false;
}
void remove_loop(node *head)
{
    node *slow=head;
    node *fast=head;
    while (fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;

        if(slow==fast)break;
    }
    if(slow!=fast)break;
    slow=head;
    while (slow->next!=fast->next)
    {
        slow=slow->next;
        fast=fast->next;
    }
    fast->next=NULL;
}
node* odd_even(node *head)
{
    node *es=NULL;
    node *en=NULL;
    node *os=NULL;
    node *oe=NULL;

    for (node *curr = head; curr!=NULL; curr=curr->next)
    
    {

        int x=curr->data;
        if(x%2==0)
        {
             if(es==NULL)
        {
            es=curr;
            en=curr;

        }
        else
        {
            en->next=curr;
            en=en->next;
        }



        }
        else 
        {
            if(os==NULL)
            {
                os=curr;
                on=curr;
            }
            else
            {
                on->next=curr;
                on=on->next;
            }
        }
    }

    if(os==NULL || es==NULL)
    {
        return head;
    }

   
    
 node* merge_two_list(node *head1,node *head2)
 {
    if(head1==NULL)return head2;
    if(head2==NULL)return head1;

    node *head=NULL;
    node *tail=NULL;
    if(head1->data<=head2->data)
    {
        head=tail=head1;
        head1=head1->next;
    }
    else
    {
        head=tail=head2;
        head2=head2->next;
    }
    while(head1!=NULL && head2!=NULL)
    {
        if(head1->data<=head2->data)
        {
            head=head1;
            tail=head1;
            head1=head1->next;
        }
    }
 }

}


node* reverse_list(node* head)
{
    if(head==NULL)return head;
    node *prev=NULL;
    node *nxt=NULL;
    node *curr=head;
    while(curr!=NULL)
    {
        nxt=curr->next;
        curr->next=prev;

        prev=curr;
        curr=nxt;
    }

    return prev;
}
bool palindrome_linked_list(node *head)
{
    node *slow=head;
    node *fast=head;
    
    while(fast!=NULL && fast->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
    }


    node *rev=reverse_list(slow->next);


    node *curr=head;


    while (rev!=NULL)
    {
        if(rev->data!=curr->data)
        {
            return false;
        }
         curr=curr->next;
    rev=rev->next;
    }

    return true;
    
    
}
int main()
{
return 0;
}