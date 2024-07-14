/**
 *    author:  Mohammad Jashim Uddin
 **/
#include <iostream>
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define yy cout << "Yes" << endl;
#define N cout << "NO" << endl;
#define nn cout << "No" << endl;
#define one cout << "1" << endl;
#define onee cout << "-1" << endl;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

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
Node *input_binary_tree()
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
    if (root)
    {
        q.push(root);
    }
    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();
        int l, r;
        cin >> l >> r;
        Node *myleft;
        Node *myright;
        if (l == -1)
        {
            myleft = NULL;
        }
        else
        {
            myleft = new Node(l);
        }
        if (r == -1)
        {
            myright = NULL;
        }
        else
        {
            myright = new Node(r);
        }
        p->left = myleft;
        p->right = myright;
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
// void Post_Order(Node *root)
// {
//     if(root==NULL)
//     {
//         return;
//     }
//     Post_Order(root->left);
//     Post_Order(root->right);
//     cout<<root->val<<" ";
// }
void Level_Order(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    queue<Node *> q;
    if (root)
    {
        q.push(root);
    }
    while (!q.empty())
    {
        Node *fr = q.front();
        q.pop();
        cout << fr->val << " ";
        if (fr->left)
        {
            q.push(fr->left);
        }
        if (fr->right)
        {
            q.push(fr->right);
        }
    }
    cout<<endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Node *root = input_binary_tree();
        // Post_Order(root);
        Level_Order(root);
    }
    return 0;
}