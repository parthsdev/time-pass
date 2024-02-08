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
// FLOYD CYCLE DETECTIO N
/*void detect(node *head)
{
    int count=0;
    node *slow = head;
    node *temp = head;
    node *fast = head;
    bool flag = false;
    while (temp != NULL && temp->next != NULL)
    {
        count++;
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            flag = true;
            break;
        }
    }
    if (flag == false)
    {
        cout << "LOOP NOT EXIST"
             << "\n";
    }
    else
    {
        cout << "LOOP EXIXST"
             << "\n";
    }
    cout<<count;
}*/

void print(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
void detect_and_removeloop(node *head)
{
    int count=0;
    node *slow = head;
    node *temp = head;
    node *fast = head;
    bool flag = false;
    while (temp != NULL && temp->next != NULL)
    {
        count++;
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            flag = true;
            break;
        }
    }
    if (flag==true)
    {
        slow=head;
        while (slow->next!=fast->next)
        {
            slow=slow->next;
            fast=fast->next;
            if (slow==fast)
            {
                break;
            }
            
        }
        fast->next=NULL;
    }
    
   /* if (flag == false)
    {
        cout << "LOOP NOT EXIST"
             << "\n";
    }
    else
    {
        cout << "LOOP EXIXST"
             << "\n";
    }
    cout<<count;*/
}
int main()
{
    	node *head=new node(15);
	head->next=new node(10);
	head->next->next=new node(12);
	head->next->next->next=new node(20);
	head->next->next->next->next=head->next;
    detect_and_removeloop(head);
    print(head);


   
    
    return 0;
}