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
node* revese_ll(node *head)
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
void palindrome(node *head)
{
   node *slow = head;
   node *fast = head;
   node *temp = head;
   while (fast != NULL && fast->next != NULL)
   {
      slow = slow->next;
      fast = fast->next->next;
   }

   node *ans = revese_ll(slow->next);
   bool flag = true;
   while (ans != NULL)
   {
      if (ans->data != temp->data)
      {
         flag = false;
         break;
      }
      ans=ans->next;
      temp=temp->next;
   }
   if (flag)
   {
      cout << "linked list is palindrome"
           << "\n";
   }
   else
   {
      cout << "linked list is not palindrome"
           << "\n";
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

int main()
{
   node *head = input();
   print(head);
   cout << endl;
 node *ans=revese_ll(head);
 print(ans);
   palindrome(head);
   return 0;
}