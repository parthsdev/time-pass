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
node* read()
{
    int data;
    cin>>data;
   node *head=NULL;
   node *tail=NULL;
   while (data!=-1)
   {
       node *newnode=new node(data);
       if (head==NULL)
       {
           head=newnode;
           tail=newnode;
       }
       else
       {
           tail->next=newnode;
           tail=newnode;

       }
       cin>>data;
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

node* reverse(node* head)
    {
        node* current = head;
        node *prev = NULL, *next = NULL;
 
        while (current != NULL) {
            next = current->next;
 
            current->next = prev;
 
            prev = current;

            current = next;
        }
       return prev;
    }


int main()
{
    cout<<"Enter the elements of linked list and enter -1 for termiantion of linked list"<<endl;

    node *head=read();
    cout<<endl;
    print(head);
    cout<<"\n";
    cout<<"Reversed linked list is as follows"<<endl;
    node *ans=reverse(head);
    print(ans);
}