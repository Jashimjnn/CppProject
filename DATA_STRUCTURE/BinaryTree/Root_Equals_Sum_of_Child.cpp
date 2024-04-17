#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
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
bool isLeaf(Node *root)
{
    return root->left == NULL && root->right == NULL;
}
bool checkTree(Node *root)
{
    if (root == NULL)
    {
        return false;
    }
    if (isLeaf(root))
    {
        return true;
    }
    int v = root->val;
    int x = root->left->val;
    int y = root->right->val;
    if (v == (x + y))
    {
        return true;
    }
    return false;
}
int main()
{
    Node *root = input_Tree();
    bool flag = checkTree(root);
    if (flag)
    {
        Y;
    }
    else
    {
        N;
    }
    return 0;
}