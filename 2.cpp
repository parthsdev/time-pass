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
    node *temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<"\n";
        temp=temp->next;

    }
    
}
/*node *input_output()
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
            tail = newnode;
        }

        cin >> data;
    }
}*/
node *input_output()
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
            tail = newnode;
        }

        cin >> data;
    }
    return head;
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
            final_tail = final_tail->next;
            head1 = head1->next;
        }
        else
        {
            final_tail->next = head2;
            final_tail = final_tail->next;
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

int main()
{

    node *head1=input_output();
  //  print(head1);
    node *head2=input_output();
  //  print(head2);

    node *ans=merge_a(head1,head2);
    print(ans);

}
