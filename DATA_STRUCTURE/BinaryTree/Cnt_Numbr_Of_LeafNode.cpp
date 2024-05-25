#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
vector<ll>v;
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
Node *input_Tree()
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
        Node *pr = q.front();
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
        pr->left = myleft;
        pr->right = myright;
        if (pr->left)
        {
            q.push(pr->left);
        }
        if (pr->right)
        {
            q.push(pr->right);
        }
    }
    return root;
}
int count_Leaf_Node(Node *root)
{
    int cnt=0;
    if(root==NULL)
    {
        return 0;
    }
    if(root->left==NULL && root->right==NULL)
    {
        cnt=1;
    }
    else
    {
        int l = count_Leaf_Node(root->left);
        int r = count_Leaf_Node(root->right);
        cnt = l+r;
    }
    return cnt;
}
// void count_Leaf_Node(Node *root)
// {
//     if(root==NULL)
//     {
//         return;
//     }
//     if(root->left==NULL && root->right==NULL)
//     {
//         v.push_back(root->val);
//     }
//     if(root->left)
//     {
//         count_Leaf_Node(root->left);
//     }
//     if(root->right)
//     {
//         count_Leaf_Node(root->right);
//     }
// }
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Node *root = input_Tree();
        int cnt = count_Leaf_Node(root);
        // count_Leaf_Node(root);
        // cout<<v.size()<<endl;
        // v.clear();
        cout<<cnt<<endl;
    }
    return 0;
}