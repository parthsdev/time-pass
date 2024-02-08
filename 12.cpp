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
node* input_output()
{
    int data;
    cin>>data;
    node *head=NULL;
    node *tail=NULL;
    while (data!=-1)
    {
        node *newnode=new node(data);
        if (head==NULL)
        {
            head=newnode;
            tail=newnode;
        }
        
        else
        {
        tail->next=newnode;
         tail=newnode;
        }
        cin>>data;
    }
    return head;
}
void print(node *head)
{
    node *temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;

    }
    
}

node* delete_n(node *head,int i)
{
    node *temp=head;
    int count=0;
    while (count<i-1)
    {
        temp=temp->next;
        count++;
    }
    node *a=temp->next;
    node *b=a->next;
    temp->next=b;
    delete a;
   

   return head;


}


node* insert_n(node*head,int data,int p)
{
    node *temp=head;
    int count=0;
    node *newnode=new node(data);
    while (count<p-1)
    {
        temp=temp->next;
        count++;
    }
    node *b=temp;
    node *a=temp->next;
    temp->next=newnode;
    newnode->next=a;
   // b->next=temp;
  //  newnode->next=a;
    return head;
}


node* checkdupli(node *head)
{
    if (head==NULL)
    {
        return NULL;
    }
    node *temp=head;
    node *temp1=head->next;
    while (temp1!=NULL)
    {
        if (temp->data== temp1->data)
        {
            temp1=temp1->next;
        }
        else if (temp->data!=temp1->data)
        {
            temp->next=temp1;
            temp=temp1;
            temp1=temp1->next;
        }
        
    }
     temp->next=temp1;
    return head;
    
} 
node* checkdupli(node *head)
{
    if (head==NULL)
    {
        return NULL;
    }
    node *temp=head;
    node *temp1=head->next;
    while (temp1!=NULL)
    {
        if (temp->data== temp1->data)
        {
            temp1=temp1->next;
        }
        else if (temp->data!=temp1->data)
        {
            temp->next=temp1;
            temp=temp1;
            temp1=temp1->next;
        }
        
    }
     temp->next=temp1;
    return head;
    
} 


node* check(node *head)
{
    node *temp=head;
    node *temp1=head->next;
    while (temp1!=NULL)
    {
        if (temp->data!=temp1->data)
        {
            temp->next=temp1;
            temp=temp1;
            temp1=temp1->next;
        }
       else if (temp->data==temp1->data)
       {
           temp1=temp1->next;
       }
       
        
    }
    
}
node* revese_linked_list(node *head)
{
    node *previuos=NULL;
    node *nextptr;
    node *current=head;
    while (current!=NULL)
    {
        nextptr=current->next;
        current->next=previuos;


        previuos=current;
        current=nextptr;

    }
    return previuos;
    
}

// RETURN NTH NODE FROM END.
/*1.BY FINDING lengtH.
2. BY THIS APPROACH.*/

int ans(node *head,int n)
{
   if (head==NULL)
   {
       return NULL;
   }
   node *fast=head;
   for (int i = 0; i < n; i++)
   {
       if (fast==NULL)
       {
           return 0;
       }
       fast=fast->next;
   }
   node *slow=head;
   while (fast!=NULL)
   {
       fast=fast->next;
       slow=slow->next;
   }
   return slow->data;

}
bool ispalindrome(node *head)
{
    
}
int main()
{
    cout<<"Enter The elements of linked list and enter -1 for temination"<<"\n";
   node *head=input_output();
   print(head);
   cout<<endl;
/*  node *temp= delete_n(head,3);
  print(temp);*/
 //  node *ans=insert_n(head,99,2);
  // print(ans);
 //  node *newhead=checkdupli(head);
 //  print(newhead);

   node *ans=revese_linked_list(head);
   print(ans);
};