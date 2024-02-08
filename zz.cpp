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
node *insert(node *head, int pos, int data)
{
    int count = 0;
    node *temp = head;
    for (int i = 1; i < pos - 1; i++)
    {
        temp = temp->next;
    }
    node *newnode = new node(data);

    node *a = temp->next;
    temp->next = newnode;
    newnode->next = a;
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
node *delte(node *head, int pos)
{
    node *temp = head;
    for (int i = 1; i < pos - 1; i++)
    {
        temp = temp->next;
    }
    node *a = temp->next;
    node *nxt = a->next;
    temp->next = nxt;
    delete a;
    return head;
}
node *reverse(node *head)
{
    node *prev = NULL;
    node *nxt = NULL;
    node *curr = head;
    while (curr != NULL)
    {
        nxt = curr->next;
        curr->next = prev;

        prev = curr;
        curr = nxt;
    }

    return prev;
}
node *kthreverse(node *head, int k)
{
    node *prev = NULL;
    node *nxt = NULL;
    node *curr = head;
    int count = 0;
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
        node *resthead = kthreverse(nxt, k);
        head->next = resthead;
    }
    return prev;
}
node *segrate(node *head)
{
    node *temp = head;
    node *es = NULL, *en = NULL, *os = NULL, *oe = NULL;
    while (temp != NULL)
    {
        int x = temp->data;
        if (x % 2 == 0)
        {
            if (es == NULL)
            {
                es = temp;
                en = es;
                temp = temp->next;
            }
            else
            {
                en->next = temp;
                en = en->next;
                temp = temp->next;
            }
        }
        else
        {
            if (os == NULL)
            {
                os = temp;
                oe = os;
                temp = temp->next;
            }
            else
            {
                oe->next = temp;
                oe = oe->next;
                temp = temp->next;
            }
        }
    }
    en->next = os;
    oe->next = NULL;

    return es;
}

node *dul(node *head)
{
    node *temp = head;
    node *temp1 = head->next;
    while (temp1 != NULL)
    {
        if (temp->data == temp1->data)
            temp1 = temp1->next;

        else
        {
            temp->next = temp1;
            temp = temp->next;
            temp1 = temp1->next;
        }
    }
    if (temp1 == NULL)
    {
        temp->next = temp1;
    }
    return head;
}
int getlength(node *head)
{
    int count = 0;
    node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }

}
int _getintersetion(int d,node *head1,node *head2)
{
      for (int i = 0; i < d; i++)
      {
          if(head1==NULL)return -1;
          head1=head1->next;

      }
      while (head1!=NULL && head2!=NULL)
      {
          
      }
      
}
void get(node *head,node *head1)
{
    int a=getlength(head);
    int b=getlength(head1);
    if(a>b)
    {
        int d=a-b;
       int c=_getintersetion(d,head,head1);


    }
    else
    {
      int d=b-a;
      int d=_getintersetion(d,head1,head);
    }
    

}

int main()
{
    node *ans = read();
    //print(ans);
    /*cout << "\n";
    node *ans1 = insert(ans, 2, 4);
    print(ans1);
    cout<<endl;
    node* al=delte(ans,2);
    print(al);*/
    /*  node *ans1=reverse(ans);
    print(ans1);*/
    /* node *ans1 = dul(ans);
    print(ans);*/
    node *ans1 = segrate(ans);
    print(ans1);
}