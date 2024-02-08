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

int getCount(node* head) 
{ 
    node* curr = head; 
    int count = 0; 
    while (curr != NULL) { 
        count++; 
        curr = curr->next; 
    } 
    return count; 
} 

int _getIntersection(int d, node* head1, node* head2) 
{ 
    node* current1 = head1; 
    node* current2 = head2; 
  
    for (int i = 0; i < d; i++) { 
        if (current1 == NULL) { 
            return -1; 
        } 
        current1 = current1->next; 
    } 
  
    while (current1 != NULL && current2 != NULL) { 
        if (current1 == current2) 
            return current1->data; 
  
        current1 = current1->next; 
        current2 = current2->next; 
    } 
  
    return -1; 
}

int getIntersection(node* head1, node* head2) 
{ 
    int c1 = getCount(head1); 
    int c2 = getCount(head2); 
    int d; 
  
    if (c1 > c2) { 
        d = c1 - c2; 
        return _getIntersection(d, head1, head2); 
    } 
    else { 
        d = c2 - c1; 
        return _getIntersection(d, head2, head1); 
    }
} 

int main()
{
    node *head1=take_input();
    node *head2=take_input();
    cout<<getIntersection(head1,head2);
}