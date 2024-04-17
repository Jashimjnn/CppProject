#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
vector<int> v1;
vector<int> v2;
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
void fun(Node *&r, vector<int> &v)
{
    if (r->left == NULL && r->right == NULL)
    {
        v.push_back(r->val);
    }
    if (r->left)
    {
        fun(r->left, v);
    }
    if (r->right)
    {
        fun(r->right, v);
    }
}
int main()
{
    Node *root1 = input_Binary_tree();
    Node *root2 = input_Binary_tree();
    fun(root1, v1);
    fun(root2, v2);
    if (v1 == v2)
    {
        Y;
    }
    else
    {
        N;
    }
    return 0;
}