#include <bits/stdc++.h>
using namespace std;
#define bt binarytreenode
class bt
{
public:
    int data;
    bt *left;
    bt *right;
    bt(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};


int min(bt *root)
{
    int maxo=INT_MIN;
    while (root!=NULL)
    {
        maxo=max(maxo,root->data);
        root=root->right;
    }
    
    return maxo;
}




int main()
{
    	bt *root = new bt(10);  
    root->left = new bt(8);  
    root->right = new bt(20);  
    root->left->left = new bt(4);
    root->left->right = new bt(9);
    root->right->left = new bt(10);
    root->right->right = new bt(30);  
    root->right->right->left = new bt(25);
    cout<<min(root);
}