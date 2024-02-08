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

    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
node *reverse1(node *head)
{
    node *curr = head;
    //   node *next1=head->next;
    node *next1;
    node *previos = NULL;
    while (next1 != NULL)
    {
        next1 = curr->next;
        curr->next = previos;

        previos = curr;
        curr = next1;
        //  next1=curr->next;
    }
    return previos;
}
int length(node *head)
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

node *middle(node *head)
{
    if (head == NULL)
    {
        return 0;
    }
    node *slow = head;
    node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    print(slow->next);
    return reverse1(slow->next);
}
void palindrome(node *head)
{

    node *check = head;
    node *check1 = middle(head);
    bool flag = true;
    while (check != check1 && check1 != NULL)
    {
        if (check->data == check1->data)
        {
            check = check->next;
            check1 = check1->next;
        }
        else
        {
            flag = false;
            break;
        }
    }
    if (flag)
    {
        cout << "Yes";
    }
    else
    {
        cout << "NO";
    }
}
int main()
{
    node *head = input();
    print(head);
    cout << endl;

    //  cout<<length(head);
    // cout<<endl;
   palindrome(head);

    return 0;
}