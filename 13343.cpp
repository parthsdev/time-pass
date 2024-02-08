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
node* input()
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
            tail=tail->next;
        }
        
    cin>>data;
    }
    return head;
}
void print(node *head)
{
    while (head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    
}
node* duplicate(node *head)
{
    if (head==NULL)
    {
        return NULL;
    }
    node *newhead=head;
    node *newtail=head->next;
    while (newtail!=NULL)
    {
        if (newhead->data==newtail->data)
        {
           newtail=newtail->next;
        }
        else
        {
            newhead->next=newtail;
            newhead=newtail;
            newtail=newtail->next;

        }
        
    }
    if (newtail==NULL)
    {
        newhead->next=NULL;
    }
    
    return head;
}
node* reverss(node *head)
{
  node *pre=NULL;
  node *curr=head;
  node *nxtpt;
  while (curr!=NULL)
  {
      nxtpt=curr->next;
      curr->next=pre;


      pre=curr;
      curr=nxtpt;
    
  }
  return pre;

}
int main()
{
    node *head=input();
    print(head);
   cout<<"\n";
   node *ans=reverss(head);
   print(ans);
return 0;
}