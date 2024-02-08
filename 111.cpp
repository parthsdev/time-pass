// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];

//     }

//     for (int i = 0; i < n; i++)
//     {
//         sum += arr[i];
//     }

//     int l_sum = 0;
//     int c=0;
//     bool flag = false;
//     for (int i = 0; i < n; i++)
//     {

//         if (l_sum == sum - arr[i])
//           {  flag = true; cout<<i<<"  "; break;}

//         l_sum += arr[i];

//         sum -= arr[i];

//     }

//     if (flag)
//     {
//         cout << "y";
//     }
//     else
//     {
//         cout << "n";
//     }

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
#define binarytreenode bt
class bt
{
public:
    int data;
    bt *left;
    bt *right;
    bt(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};
/*const int op = -1;
void seralise(bt *root, vector<int> &v)
{

    if (root == NULL)
    {
        v.push_back(op);
        return;
    }
    v.push_back(root->data);
    seralise(root->left, v);
    seralise(root->right, v);
};
void preorder(bt *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void sum(bt *root,map<int,int>&m,int hd)
{
    if (root==NULL)
    {
        return;
    }
    sum(root->left,m,hd-1);
    m[hd]=m[hd]+root->data;
    sum(root->right,m,hd+1);
}
bt *desiralise(vector<int> &v)
{
    static bt *root;
    static int index = 0;
   int val = v[index++];
   if (val==-1)
   {
       return NULL;
   }
 root->left=desiralise(v);
 root->right=desiralise(v);
 return root;
}

void vetical_traversal(bt *root)
{
    map<int,vector<int,int>>m;
    queue<pair<bt*,int>>q;
    q.push({root,0});
    while (q.size()!=0)
    {
        auto p = q.front();
        bt *curr=p.first;
        int hd=p.second;
        m[hd].push_back(curr->data);
        q.pop();
        if (curr->left!=NULL)
        {
            q.push({root,hd-1});
        }
        if (curr->right!=NULL)
        {
            q.push({root,hd+1});
        }
        
        
    }
    
    
}*/
int num(bt *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return 1 + max(num(root->left), num(root->right));
}
bool childsum(bt *root)
{
    if (root == NULL)
    {
        return true;
    }
    if (root->left == NULL && root->right == NULL)
    {
        return true;
    }
    int sum = 0;
    if (root->left != NULL)
    {
        sum = sum + root->left->data;
    }
    if (root->right != NULL)
    {
        sum = sum + root->right->data;
    }
    return (root->data == sum) && childsum(root->left) && childsum(root->right);
}
bool istree(bt *root, bt *root1)
{
    if (root == NULL || root1 == NULL)
    {
        return true;
    }
    if(root->data==root1->data)
    {
        return istree(root->left,root1->left) && istree(root->left,root1->left);
    }
    else
    {
        return false;
    }
    
}
int main()
{
    bt *root = new bt(20);
    root->left = new bt(8);
    /*  root->right=new bt(12);
   root->left->left=new bt(3);
   root->left->right=new bt(5);*/
    bt *root1 = new bt(20);
    root1->left = new bt(8);
    root->left->left=new bt(4);
    if (istree(root, root1) == true)
    {
        cout << "Y";
    }
    else
    {
        cout << "N";
    }

    /*  map<int,int>m;
    sum(root,m,0);
   for(auto it:m)
   {
       cout<<it.second<<"\n";
   }*/

    //root->right=new bt(30);
    /* vector<int>v;
    seralise(root,v);
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }*/

    cout << num(root);
    if (childsum(root) == true)
    {
        cout << "ya";
    }
    else
    {
        cout << "O";
    }

    /*seralise(root, v);
    bt *ans=desiralise(v);
    preorder(ans);
    return 0;*/
}
