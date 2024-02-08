#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node *previos;
    node(int data)
    {
        this->data = data;
        next = NULL;
        previos = NULL;
    }
};

node *reverse_doubly(node *head)
{
    node *curr = head;
    if (curr == NULL || curr->next == NULL)
    {
        return head;
    }

    while (curr->next != NULL)
    {
        curr = curr->next;
    }

    head = curr;
    /* head->next=head->prev;
     curr->prev=NULL;*/
    node *temp;
    while (curr != NULL)
    {
        temp = curr->next;
        curr->next = curr->previos;
        curr->previos = temp;
        curr = curr->next;
    }
    /* curr->prev=curr->next;
    curr->next=NULL;*/
    return head;
}
node *delete_first_node(node *head)
{

    if (head == NULL)
    {
        return NULL;
    }
    if (head->next == NULL)
    {
        return head;
    }
    else
    {
        node *temp = head;
        head = head->next;
        head->previos = NULL;
        delete temp;
        return head;
    }
}
node *delete_last_node(node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    if (head->next == NULL)
    {
        return head;
    }
    else
    {
        node *temp=head;
        while (temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->previos->next=NULL;
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
int main()
{

    node *head = new node(3);
    node *temp1 = new node(2);
    node *temp2 = new node(1);
    head->next = temp1;
    temp1->previos = head;
    temp1->next = temp2;
    temp2->previos = temp1;
    node *ans = reverse_doubly(head);
    print(ans);
    cout << "AFTER DELTE FIRST NODE"
         << "\n";
    node *qwe = delete_first_node(ans);
    print(qwe);

    cout<<"\n";
  node *first=  delete_first_node(qwe);
  print(first);

    return 0;
}