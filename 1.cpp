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
node *input()
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
            tail = tail->next;
        }
        cin >> data;
    }
    return head;
}
void print(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}
node *insert_athead(node *head, int data)
{
    node *newnode = new node(data);
    newnode->next = head;
    return newnode;
}
node *insert(node *head, int pos, int data)
{
    node *temp = head;
    if (pos == 1)
    {
        node *newnode = new node(data);
        newnode->next = head;
        return newnode;
    }
    else
    {

        int count = 0;
        for (int i = 1; i < pos - 1; i++)
        {
            temp = temp->next;
        }

        node *a = temp->next;
        node *newnode = new node(data);
        temp->next = newnode;
        newnode->next = a;
        return head;
    }
}
void print_circular(node *head)
{
    if (head == NULL)
        return;
    node *p = head;
    do
    {
        cout << p->data << " ";
        p = p->next;
    } while (p != head);
}
node *insert(node *head)
{
    int data = 1;
    node *newnode = new node(1);
    newnode->next = head;
    return newnode;
}
void delete_head(node *head)
{
    node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    node *a = head->next;
    temp->next = a;
    cout << temp->data << " ";
}
node *remove_duplicate(node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    node *temp = head;
    node *temp1 = head->next;
    while (temp1 != NULL)
    {
        if (temp->data == temp1->data)
        {
            temp1 = temp1->next;
        }
        else
        {
            temp->next = temp1;
            temp = temp->next;
        }
    }
    temp->next = temp1;

    return head;
}

node *reverse(node *head, int k)
{
    node *prev = NULL;
    node *nxt;
    node *curr = head;
    int count = 0;
    while (curr != NULL && count < k)
    {
        nxt = curr->next;
        curr->next = prev;

        prev = curr;
        curr = nxt;
        count++;
    }
    if (nxt != NULL)
    {
        node *rest_head = reverse(nxt, k);
        head->next = rest_head;
    }
    return prev;
}
node *segrate(node *head)
{
    node *temp=head;
   node *es=NULL,*en=NULL,*os=NULL,*oe=NULL;
  while (temp!=NULL)
  {
      int x=temp->data;
      if (x%2==0)
      {
          if (es==NULL)
          {
             es=temp;
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
}
int main()
{
    node *head = input();
    print(head);
    cout << endl;
    // /*node *ans=insert_athead(head,1);
    // print(ans);*/
    // cout << endl;
    // node *a = insert(head, 6, 47);
    // print(a);

    /*  node *head = new node(10);
    head->next = new node(5);
    head->next->next = new node(20);
    head->next->next->next = new node(15);
    head->next->next->next->next = head;*/

    /* node *ans=remove_duplicate(head);
    print(ans);*/
    node *ans = segrate(head);
    print(ans);
    
}