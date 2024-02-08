#include <bits/stdc++.h>
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
node* read()
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
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
node* swap_native(node *head)// SWAPING PAIR WISE
{
    node *temp=head;
    while (temp->next!=NULL && temp!=NULL)
    {
        swap(temp->data , temp->next->data);
        temp=temp->next->next;
    }
    return head;
}
node* swap_improved(node *head)
{
    
}
 int main()
{
  node *head=read();
  print(head);
  cout<<"\n";
  node *head1=swap_native(head);
  print(head);
  

}