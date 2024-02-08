// FAST&& SLOW APPPROAH TO FIND MIDDLE EMENT

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
node *read()
{
    int data;
    cin >> data;
    node *head = NULL;
    node *tail = NULL;
    node *temp = head;
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

void middle_efficent_approch(node *head)
{
    if (head == NULL)
    {
        return;
    }
    
    node *fast = head;
    node *slow = head;
    while (fast != NULL || fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    cout << slow->data << "\n";
}

node *revese_ll(node *head)
{
    node *curr = head;
    //   node *next1=head->next;
    node *next1;
    node *previos = NULL;
    while (curr != NULL)
    {
        next1 = curr->next;
        curr->next = previos;

        previos = curr;
        curr = next1;
        //  next1=curr->next;
    }
    return previos;
}
node *remove_duppli(node *head)
{
    node *temp = head;
    node *temp1 = head->next;
    while (temp1 != NULL)
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
    temp->next=temp1;
    return head;


    
  /*  if (head==NULL)
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
    return head;*/
}
    

int main()
{
    cout << "Enter the elements of linked list and enter -1 for end of linked list"
         << "\n";
    node *head = read();
    print(head);
    cout << endl;
    // middle_efficent_approch(head);

    cout << endl;
 //   node *ans = revese_ll(head);
   // print(ans);
   node *ans=remove_duppli(head);
   print(ans);
}