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

void inorder_traversal(bt *root)
{
    if (root == NULL)
        return;

    inorder_traversal(root->left);
    cout << root->data;
    inorder_traversal(root->right);
    cout << "hello";
}

void preorder_traversal(bt *root)
{
    if (root == NULL)
        return;
    cout << root->data;
    preorder_traversal(root->left);
    preorder_traversal(root->right);
}
void preorder_traversal(bt *root)
{
    if (root == NULL)
        return;
    preorder_traversal(root->left);

    preorder_traversal(root->right);

    cout << root->data;
}

int height_of_tree(bt *root)
{
    if (root == NULL)
        return 0;

    return 1 + max(height_of_tree(root->left), height_of_tree(root->right));
}
void print_node_kth_distance(bt *root, int k)
{
    if (root == NULL)
        return;
    if (k == 0)
    {
        cout << root->data;
    }
    else
    {
        print_node_kth_distance(root->left, k - 1);
        print_node_kth_distance(root->right, k - 1);
    }
}
void level_order_traversal(bt *root)
{
    if (root == NULL)
        return;
    queue<bt *> q;
    int count = 0;
    q.push(root);
    while (!q.empty())
    {
        count = q.size();
        for (int i = 0; i < count; i++)
        {
            bt *curr = q.front();
            q.pop();
            cout << curr->data;

            if (curr->left != NULL)
            {
                q.push(curr->left);
            }

            if (curr->right != NULL)
            {
                q.push(curr->right);
            }
        }
        cout << endl;
    }
}

int max_of_binary(bt *root)
{
    if (root == NULL)
        return INT_MIN;

    return max(root->data, max_of_binary(root->left), max_of_binary(root->right));
}

void left_view_of_tree(bt *root)
{
    queue<bt *> q;
    q.push(root);
    int count = 0;

    while (!q.empty())
    {
        count = q.size();

        for (int i = 0; i < count; i++)
        {

            auto p = q.front();
            q.pop();

            if (i == 0)
            {
                cout << p->data;
            }

            if (p->left != NULL)
            {
                q.push({p->left});
            }

            if (p->right != NULL)
            {
                q.push({p->right);
            }
            }
        }
    }

    bool children_child_propert(bt * root)
    {
        if (root == NULL)
            return false;
        if (root->left == NULL && root->right == NULL)
            return true;
        int sum = 0;
        if (root->left != NULL)
        {
            sum = sum + root->left->data;
        }

        if (root->right != NULL)
        {
            sum = sum + root->right->data;
        }

        return (sum->data == root) && children_child_propert(root->left) && children_child_propert(root->right);
    }

    bool balanced_tree(bt * root)
    {
        if (root == NULL)
            return true;
        int lh = height_of_tree(root->left);
        int rh = height_of_tree(root->right);

        return abs(lh - rh <= 1) && balanced_tree(root->left) && balanced_tree(root->right);
    }
    int preindex = 0;
    bt *contruct_binary_tree_from_inorder_preorder(bt * root, int is, int in, vector<int> &inorder, vector<int> &preorder)
    {

        if (is > in)
            return NULL;
        bt *root = new bt(preorder[preindex++]);

        int inindex;

        for (int i = is; i <= in; i++)
        {
            if (inorder[i] == root->data)
            {
                inindex = i;
                break;
            }
        }
        root->left = contruct_binary_tree_from_inorder_preorder(is, inindex - 1, inorder, preorder);
        root->right = contruct_binary_tree_from_inorder_preorder(inindex + 1, in, inorder, preorder);
    }

    void spiral_traversal(bt * root)
    {
        stack<int> st;
        queue<bt *> q;
        q.push(root);
        int count = 0;
        bool reverse = false;
        while (!q.empty())
        {
            count = q.size();
            for (int i = 0; i < count; i++)
            {
                bt *curr = q.front();
                q.pop();
                if (reverse)
                {
                    cout << curr->data;
                }

                else
                {
                    st.push(curr->data);
                }

                if (curr->left != NULL)
                {
                    q.push(curr->left);
                }
                if (curr->right != NULL)
                {
                    q.push(curr->right);
                }
            }
            if (!reverse)
            {
                while (!st.empty)
                {
                    cout << st.top();
                    st.pop();
                }
            }

            reverse = !reverse;
        }
    }

    int daimeter(bt * root)
    {
        if (root == NULL)
            return 0;

        int d1 = 1 + height_of_tree(root->left) + height_of_tree(root->right);

        int d2 = daimeter(root->left);

        int d3 = daimeter(root->right);

        return max{d1, d3, d2};
    }

    bool search(bt * root, int element)
    {
        if (root == NULL)
            return false;
        if (root->data == element)
        {
            return true;
        }

        else if (root->data < element)
        {
            return search(root->right, x);
        }

        else
        {
            return search(root->left, x);
        }

        return false;
    }
    bool search_iterative(bt * root)
    {
        if (root == NULL)
            return true;
        while (root != NULL)
        {
            if (root->data == x)
            {
                return true;
            }
            else if (root->data < element)
            {
                root = root->right;
            }
            else
            {
                root = root->left;
            }
        }
        return false;
    }

    bool insert_inbst(bt * root, int x)
    {
        if (root == NULL)
        {
            return new node(x);
        }
        else if (root->data < x)
        {
        }
    }
    bt *floor(bt * root, int element)
    {
        bt *res = NULL;
        while (root != NULL)
        {
            if (root->data == element)
            {
                return root;
            }
            else if (root->data > x)
            {
                root = root->left;
            }
            else
            {
                res = root;
                root = root->right;
            }
        }
    }

    bt *ceil(bt * root, int element)
    {
        if (root == NULL)
            return root;

        bt *res = NULL;

        while (root != NULL)
        {
            if (root->data == element)
            {
                return root;
            }

            else if (root->key > x)
            {
                root = root->left;
            }
        }
    }
    int count = 0;
    void kth_smallest(bt * root, int k)
    {
        if (root == NULL)
            return;
        kth_smallest(root->left, k);
        k++;
        if (count == k)
        {
            cout << root->data;
        }
        kth_smallest(root->right, k);
    }
    bool isbst(bt * root, int min, int max)
    {
        if (root == NULL)
            return true;

    return (root->data > min) && (root->data)<=max) && isbst(root->left,min,root->data) && isbst(root->right,root->data,max);
    }

    void vertical_traversal(bt *root)
    {
        if(root==NULL)return;
        map<int,vector<int>>ump;
        queue<pair<int,bt*>>q;
        q.push({0,root});

        while (!q.empty())
        {
            auto p = q.front();q.pop();
            int hd = p.first;
            bt *curr=p.second;
            ump[hd].push_back(curr->data);
            if(curr->left!=NULL)
            {
                q.push({hd-1,curr->left});
            }

            if(curr->right!=NULL)
            {
                q.push({hd+1,curr->right});
            }
        }

        for(auto it:ump)
        {
            for(auto x:it.second)
            {
                cout<<x<<" ";
            }
        }
        

    }

    void top_view(bt* root)
    {
        if(root==NULL)return;

        queue<pair<bt*,int>>q;
        map<int,int>mp;
        q.push({root,0});
        while (!q.empty())
        {
            auto p = q.front();q.pop();
               bt *curr=p.first;
                int hd=p.second;

                

        }
        
    }
    int main()
    {
    return 0;
    }