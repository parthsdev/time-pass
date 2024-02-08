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
int number_of_nodes(node *head)
{
    if (head == NULL)
    {
        return 0;
    }
    node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    return count;
}
int _getintersection(int d, node *head1, node *head2)
{
    if (head1 == NULL || head2 == NULL)
    {
        return 0;
    }
    node *temp1 = head1;
    node *temp2 = head2;
    for (int i = 0; i < d; i++)
    {
        if (temp1 == NULL)
        {
            return -1;
        }
        temp1 = temp1->next;
    }
    while (temp1 != NULL && temp2 != NULL)
    {
        if (temp1->data == temp2->data)
        {
            return temp1->data;
            break;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    return -1;
}

int get_intersection(node *head1, node *head2)
{
    if (head1 == NULL || head2 == NULL)
    {
        return 0;
    }
    int length1 = number_of_nodes(head1);
    int length2 = number_of_nodes(head2);

    int d;
    if (length1 > length2)
    {
        int d = length1 - length2;
        return _getintersection(d, head1, head2);
    }
    else
    {
        int d = length2 - length1;
        return _getintersection(d, head2, head1);
    }
}

node *merge(node *head1, node *head2)
{
    if (head1 == NULL || head2 == NULL)
    {
        return NULL;
    }

    node *newhead;
    node *newtail;
    if (head1->data < head2->data)
    {
        newhead = head1;
        newtail = head1;
        head1 = head1->next;
    }
    else
    {
        newtail = head2;
        newtail = head2;
        head2 = head2->next;
    }

    while (head1 != NULL && head2 != NULL)
    {
        if (head1->data > head2->data)
        {
            newtail->next = head2;
            head2 = head2->next;
            newtail = newtail->next;
        }
        else if (head1->data < head2->data)
        {
            newtail->next = head1;
            head1 = head1->next;
            newtail = newtail->next;
        }
    }
    if (head2 == NULL)
    {
        newtail->next = head1;
        return newhead;
    }
    else
    {
        newtail->next = head2;
        return newhead;
    }
}
node* check(node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    node *temp1 = head;
    node *temp2 = head->next;
    while (temp2 != NULL)
    {
        if (temp1->data == temp2->data)
        {
            temp2 = temp2->next;
        }
        else if (temp1->data != temp2->data)
        {
            temp1->next = temp2;
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
    }
    if (temp2==NULL)
    {
        temp1->next=temp2;
    }
    return head;
}

node* segrate(node *head)
{
    
}
int main()
{
    node *head1 = input();
    print(head1);
    cout << endl;

  /*  node *head2 = input();
    print(head2);
    cout << endl;*/

    //cout << get_intersection(head1, head2);
  /*  node *ans = merge(head1, head2);
    print(ans);*/
    node *ans=check(head1);
    print(ans);
    return 0;
}