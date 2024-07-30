#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
vector<int> v;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *input_Binary_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
    {
        root = NULL;
    }
    else
    {
        root = new Node(val);
    }
    queue<Node *> q;
    if (root != NULL)
    {
        q.push(root);
    }
    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *my_Left;
        Node *my_Right;
        if (l == -1)
        {
            my_Left = NULL;
        }
        else
        {
            my_Left = new Node(l);
        }
        if (r == -1)
        {
            my_Right = NULL;
        }
        else
        {
            my_Right = new Node(r);
        }

        p->left = my_Left;
        p->right = my_Right;

        if (p->left)
        {
            q.push(p->left);
        }
        if (p->right)
        {
            q.push(p->right);
        }
    }
    return root;
}
int All_Nodes_Sum(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int l = All_Nodes_Sum(root->left);
    int r = All_Nodes_Sum(root->right);

    return (root->val + l + r);
}
int LeafNodes_Sum1(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    if (root->left == NULL && root->right == NULL)
    {
        return root->val;
    }
    int l = LeafNodes_Sum1(root->left);
    int r = LeafNodes_Sum1(root->right);

    return (l + r);
}
// void LeafNodes_Sum(Node *root, vector<int> &v)
// {
//     if (root->left == NULL && root->right == NULL)
//     {
//         v.push_back(root->val);
//     }
//     if (root->left)
//     {
//         LeafNodes_Sum(root->left, v);
//     }
//     if (root->right)
//     {
//         LeafNodes_Sum(root->right, v);
//     }
// }
int main()
{
    Node *root = input_Binary_tree();
    int ans = All_Nodes_Sum(root);
    int ans1 = LeafNodes_Sum1(root);
    // LeafNodes_Sum(root, v);
    // int ans1 = 0;
    // for (auto x : v)
    // {
    //     ans1 += x;
    // }
    // for(auto x:v)
    // {
    //     cout<<x<<" ";
    // }
    // cout<<endl;
    // cout<<ans<<endl;
    // cout<<ans2<<endl;
    // cout<<ans1<<endl;
    cout << ans - ans1 << endl;
    return 0;
}