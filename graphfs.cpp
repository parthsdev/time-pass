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
        left = right = NULL;
    }
};

void vertical_traversal(bt *root, map<int, vector<int>> &mp)
{
    if (root == NULL)
        return;
    // map<int, vector<int>> mp;

    queue<pair<bt *, int>> q;
    q.push({root, 0});
    while (q.size() != 0)
    {
        auto p = q.front();
        q.pop();
        bt *data_of_root = p.first;
        int horizontal_distance = p.second;
        mp[horizontal_distance].push_back(data_of_root->data);
        if (data_of_root->left != NULL)
        {
            q.push({data_of_root->left, horizontal_distance - 1});
        }
        if (data_of_root->right != NULL)
        {
            q.push({data_of_root->right, horizontal_distance + 1});
        }
    }
}
void print_vertical_traversal(bt *root)
{
    map<int, vector<int>> mp;
    vertical_traversal(root, mp);
    for (auto x : mp)
    {
      cout<<" For Horizontal Distance"<< " "<<x.first<<"->" <<"  ";
     
        for (auto it : x.second)
        {
            cout << it << " ";
        }
        cout << endl;
    }
}
int main()
{
    bt *root = new bt(1);
    root->left = new bt(2);
    root->right = new bt(3);
    root->right->left = new bt(5);
    root->right->left->left = new bt(7);
    root->right->left->right = new bt(8);
    root->right->right = new bt(6);
    print_vertical_traversal(root);
    return 0;
}
