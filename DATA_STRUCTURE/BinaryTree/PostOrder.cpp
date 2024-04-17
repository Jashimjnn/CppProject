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
void Post_Order(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    Post_Order(root->left);
    Post_Order(root->right);
    cout << root->val << " ";
}
int main()
{
    Node *root = input_Tree();
    Post_Order(root);
    return 0;
}