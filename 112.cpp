#include<bits/stdc++.h>
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
    // node(5);
    //(5|null)
};
node *take_input()
{
    int data;
    cin >> data;
    node *head = NULL;
    node *tail = NULL;
    //cout<<"enter the elements of linked list "<<"\n";

    //cout<<"ENTER -1 FOR TERMINATION OF LINKED LIST"<<"\n";
    while (data != -1)
    {
        node *newnode = new node(data); // MAALLLOC AVOID.
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
        }
        else
        {
            // node *temp=head;
            tail->next = newnode;
            tail = newnode;
        }
        cin >> data;
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
void nth_node(node *head,int n)
{
  if (head==NULL)
  {
      return ;
  }
  node *slow=head;
  node *fast=head;

  for (int i = 0; i < n; i++)
  {
      if (fast==NULL)
      {
          return ;
      }
      fast=fast->next;
      
  }
  
  while (fast!=NULL && fast->next!=NULL)
  {
      slow=slow->next;
      fast=fast->next->next;
       
  }
  cout<<slow->data;
  
}