// #include<bits/stdc++.h>
// using namespace std;
// class node
// {
//     public:
//     int data;
//     node *next;
//     node(int data)
//     {
//         this->data=data;
//         next=NULL;
//     }
// };
// void print(node *head)
// {
//     node *temp=head;
//     while (temp!=NULL)
//     {
//        cout<<temp->data<<" ";
//        temp=temp->next;
//     }
    
// }

// /*node* input(node *&head,int val)
// { 
//     node *newnode=new node;
//     newnode->data=val;
//     newnode->next=head;
//     head=newnode;
// }*/

// node* input() 
// {
//     cout<<"enter -1 for termiantion";
//     int data;
//     cin>>data;
//     node *head=NULL;
//     node *tail=NULL;
//     while (data!=-1)
    
//     {
//         node *newnode=new node(data);
//         if (head==NULL)
//         {
//             head=newnode;
//             tail=newnode;
            
//         }
//         else
//         {
//             tail->next=newnode;
//             tail=tail->next;
//         }
//         cin>>data;
//     }
//     return head;
// }
// node *append(node *head,int value)
// {
//     node *newnode=new node(value);
//     node *temp=head;
//    newnode->next=head;
//    return newnode;
// }
// int main()
// {
//     node *ans=input();
//     print(ans);

//     cout<<endl;
//     node *head=append(ans,5);
//     print(head);
// return 0;
// }


