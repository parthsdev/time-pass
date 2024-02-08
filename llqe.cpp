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
void print(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
node *input()
{
    node *head = NULL;
    node *tail = NULL;
    int data;
    cin >> data;
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
node *reverse_ll(node *head)
{
    node *curr = head;
    node *nxt;
    node *prev = NULL;
    while (curr != NULL)
    {
        nxt = curr->next;

        curr->next = prev;

        prev = curr;
        curr = nxt;
    }
    return prev;
}
node *right(node *head)
{
    head = reverse_ll(head);
    node *curr = head;
    int ma = head->data;
    node *prev = head;
    head = head->next;
    while (head != NULL)
    {
        if (head->data >= ma)
        {
            ma = head->data;
            prev->next = head;
            prev = head;
            head = head->next;
        }
        else
        {
            head = head->next;
        }
    };
    head = reverse_ll(head);
    return prev;
}

node *delete_dullp(node *head)
{
    if (head == NULL)
    {
        return head;
    }
    node *temp = head;
    node *temp1 = head->next;
    while (temp1 != NULL)
    {
        if (temp->data == temp1->data)
        {
            temp1 = temp1->next;
        }
        else if (temp->data != temp1->data)
        {
            temp->next = temp1;
            temp = temp1;
            temp1 = temp1->next;
        }
       
    }
    temp->next = temp1;
    return head;
}
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
int main()
{
    node *head = input();

    //  node *ans = reverse_ll(head);

    /*  node *qwe = right(ans);
    print(qwe);
*/
    node *ans1 = delete_dullp(head);
    print(ans1);
}
