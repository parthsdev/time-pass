#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val,
        next = NULL;
    }
};
void print(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}
node *insert_atstart(node *head, int val)
{
    node *newhead = new node(val);

    if (head == NULL)
    {
        return newhead;
    }

    newhead->next = head;
    return newhead;
}
node *insert_at_end(node *head, int val)
{
    node *tail = new node(val);
    if (head == NULL)
    {
        return tail;
    }

    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = tail;
    return head;
}

node *deltenode(node *head)
{
    node *temp = head;
    node *nhead = temp->next;
    delete (temp);
    return nhead;
}
node *insertatgivenpos(node *head, int pos, int val)
{
    node *temp = new node(val);
    node *curr = head;

    int count = 1;
    while (count < pos - 1 && curr != NULL)
    {
        count++;
        curr = curr->next;
    }
    node *newnode = new node(val);
    node *c = temp->next;

    curr->next = newnode;
    newnode->next = c;
    return head;
}
node *sorted_insert(node *head, int val)
{
    node *newnode = new node(val);
    if (head == NULL)
    {
        return newnode;
    }
    if (val < head->data)
    {
        newnode->next = head;
        return newnode;
    }
    node *curr = head;
    while (curr->next != NULL && curr->next->data < val)
    {
        curr = curr->next;
    }
    node *nexxt = curr->next;
    curr->next = newnode;
    newnode->next = nexxt;

    return head;
}
void printmiddle(node *head)
{
    node *slow = NULL;
    node *fast = NULL;
    slow = head;
    fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    cout << slow->data << endl;
}
void print_nth_node_fromlast(node *head, int n)
{
    node *slow = head;
    node *fast = head;
    for (int i = 0; i < n; i++)
    {
        if (fast == NULL)
            return;
        fast = fast->next;
    }
    while (fast != NULL)
    {
        slow = slow->next;
        fast = fast->next;
    }
    cout << slow->data << endl;
}
/*node *reverse(node *head)
{
    if(head==NULL)return;
    node *prev=NULL;
    node *curr=head;
    node *nxt=NULL;
    while(curr!=NULL)
    {
        nxt=curr->next;
        curr->next=prev;


        prev=curr;
        curr=nxt;

    }
    return prev;
}*/

node *duplicate(node *head)
{
    if (head == NULL)
        return head;
    node *ptr1 = head;
    node *ptr2 = head->next;
    while (ptr2 != NULL)
    {
        if (ptr1->data == ptr2->data)
        {
            ptr2 = ptr2->next;
        }
        else
        {
            ptr1->next = ptr2;
            ptr1 = ptr2;
            ptr2 = ptr2->next;
        }
    }
    return head;
}
node *reverseink(node *head, int k)
{
    int count = 0;
    node *curr = head;
    node *prev = NULL;
    node *nxt = NULL;
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
        node *rest_head = reverseink(nxt, k);
        head->next = rest_head;
    }
    return prev;
}
bool loop(node *head)
{
    if (head == NULL)
        return false;

    node *fast = head;
    node *slow = head;
    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
        if (fast == slow)
            return true;
    }
    return false;
}
void removeloop(node *head)
{
    // if(head==NULL)return false;

    node *fast = head;
    node *slow = head;
    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
        if (fast == slow)
            break;
    }
    if (slow != fast)
        return;
    slow = head;
    while (slow->next != fast->next)
    {
        slow = slow->next;
        fast = fast->next;
    }
    fast->next = NULL;
}
node *odd_even(node *head)
{
    node *curr = head;
    node *es = NULL;
    node *en = NULL;
    node *os = NULL;
    node *on = NULL;
    while (curr != NULL)
    {
        int x = curr->data;
        if (x % 2 == 0)
        {
            if (es == NULL)
            {
                es = curr;
                en = curr;
            }
            else
            {
                en->next = curr;
                en = en->next;
            }
        }
        else
        {
            if (os == NULL)
            {
                os = curr;
                on = curr;
            }
            else
            {
                on->next = curr;
                on = on->next;
            }
        }
        curr = curr->next;
    }
    if (os == NULL || en == NULL)
        return head;
    en->next = os;
    on->next = NULL;
    return os;
}

node *sorted_merge(node *a, node *b)
{
    if (a == NULL)
        return b;
    if (b == NULL)
        return a;
    node *head = NULL;
    node *tail = NULL;
    if (a->data > b->data)
    {
        head = b;
        tail = b;
        b = b->next;
    }
    else
    {
        head = a;
        tail = a;
        a = a->next;
    }

    while(a!=NULL && b!=NULL)
    {
        if(a->data <=b->data)
        {
          tail->next=a;
          tail=a;
          a=a->next;
        }
        else
        {
            tail->next=b;
            tail=b;
            b=b->next;
        }
    }
    if(a==NULL)
}
bool palindrome(node *head)
{
    
}
int main()
{
    node *head = new node(10);
    node *node1 = new node(11);
    node *node2 = new node(12);
    node *node3 = new node(13);

    head->next = node1;
    node1->next = node2;
    node2->next = node3;
    // print(head);

    /*node *nhead=insert_atstart(head,100);
    print(nhead);

    cout<<endl;
    node *nn=insert_at_end(head,1100);
    print(nn);*/

    /*node *nnd = insertatgivenpos(head, 2, 400);
    print(nnd);*/
    node *ans = duplicate(head);
    print(ans);

    return 0;
}