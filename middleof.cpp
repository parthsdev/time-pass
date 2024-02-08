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
void middle(node *head)
{
    node *slow = head;
    node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    cout << slow->data << "\n";
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
node *read()
{
    int data;
    cin >> data;
    node *head = NULL;
    node *tail = NULL;
    while (data != -1)
    {
        node *newnode = new node(data);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
        }
        cin >> data;
    }
    return head;
}
/*void nthnode(node *head,int n)
{
    node *temp=head;
    node *slow=head;
    node *fast=head;
    for (int i = 0; i < n; i++)
    {
        if (temp==NULL)
        {
            return ;
        }
        
        temp=temp->next;
    }
     fast=temp;
    while (fast!=NULL)
    {
        slow=slow->next;
        fast=fast->next;
    }
    cout<<slow->data;
}*/
/*node* remove_duppli(node *head)
{
  node *temp=head;
  node *temp1=head->next;
  while (temp1!=NULL)
  {
      if (temp->data==temp1->data)
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
  
}*/
  
  /*node* checkdupli(node *head)
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
    
} */
/*node* segrate(node *head)
{
    node *temp=head;
    node *os=NULL;
    node *oe=NULL;
    node *es=NULL;
    node *en=NULL;
    while (temp!=NULL)
    {
        int x=temp->data;
        if (x%2==0)
        {
        if (es==NULL)
        {
            es->next=temp;
            en=es;
            temp=temp->next;
        }
        else
        {
            en->next=temp;
            en=en->next;
            temp=temp->next;
        }
        
        }
        
        else
        {
            if (os==NULL)
            {
                os=temp;
                oe=os;
                temp=temp->next;

            }
            else
            {
                oe->next=temp;
                oe=oe->next;
                temp=temp->next;
            }
            
        }
        
    }
      en->next=os;
        oe->next=NULL;

        
        return es;
}*/
node *segrate(node *head)
{
    node *temp = head;
    node *es = NULL;
    node *en = NULL;
    node *os = NULL;
    node *oe = NULL;
    while (temp != NULL)
    {
        int x = temp->data;
        if (x % 2 == 0)
        {
            if (es == NULL)
            {
                es = temp;
                en = temp;
                temp=temp->next;
            }
            else
            {
                en->next = temp;
                en = en->next;
                temp=temp->next;
            }
        }
        else
        {
            if (os == NULL) 
            {
                os = temp;
                oe = temp;
                temp=temp->next;
            }
            else
            {
                oe->next = temp;
                oe = oe->next;
                temp=temp->next;
            }
        }
    }
    //if (os == NULL || es == NULL)
   // {
        en->next = os;
        oe->next = NULL;
        return es;
    //}
}
node *merge_a(node *head1, node *head2)
{
    node *final_head = NULL;
    node *final_tail = NULL;
    if (head1->data <= head2->data)
    {
        final_head = head1;
        final_tail = head1;
        head1 = head1->next;
    }
    else if (head1->data > head2->data)
    {
        final_head = head2;
        final_tail = head2;
        head2 = head2->next;
    }
    while (head1 != NULL || head2 != NULL)
    {
        if (head1->data <= head2->data)
        {
            final_tail->next = head1;
          //  final_tail=head1;
            final_tail = final_tail->next;
            head1 = head1->next;
        }
        else
        {
            final_tail->next = head2;
            final_tail = final_tail->next;
        //  final_tail=head2;
            head2 = head2->next;
        }
    }
    if (head1 == NULL)
    {
        final_tail->next = head2;
    }
    if (head2 == NULL)
    {
        final_tail->next = head1;
    }
    return final_head ;
}
/*node* merge(node *head1, node *head2)
{
  node *newhead=NULL;
  node *newtail=NULL;
 if (head1->data<=head2->data)
 {
     newhead=head1;
     newtail=head1;
     head1=head1->next;
 }
else if (head1->data>=head2->data)
 {
     newhead=head2;
     newtail=head2;
     head2=head2->next;
 }
  while (head1!=NULL && head2!=NULL)
  {
      if (head1->data<=head2->data)
      {
         newtail->next=head1;
         newtail=newtail->next;
         head1=head1->next;
      }
      else if (head1->data>=head2->data)
      {
          
      }
      
  }
  
}*/
int main()
{
  //  node *head = read();
   // print(head);
   // cout << endl;
   // middle(head);
   //nthnode(head,2);
 //  node *ans=checkdupli(head);
  // print(head);
 // node *ans=segrate(head);
  //print(ans);
  node *head1=read();
  print(head1);
  cout<<endl;
  node *head2=read();
  print(head2);
  cout<<endl;

  node *ans=merge_a(head1,head2);
  print(ans);
    return 0;
}