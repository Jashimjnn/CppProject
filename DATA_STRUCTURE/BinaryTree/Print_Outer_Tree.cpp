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
vector<int> v;
vector<int> v1;
void Left_Side(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    if (root->left)
    {
        Left_Side(root->left);
    }

    else
    {
        Left_Side(root->right);
    }
    v.push_back(root->val);
}
void right_Side(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    if (root->right)
    {
        right_Side(root->right);
    }
    else
    {
        right_Side(root->left);
    }
    v1.push_back(root->val);
}
int main()
{
    Node *root = input_Binary_tree();
    if (root == NULL)
    {
        return 0;
    }
    if (root->left)
    {
        Left_Side(root->left);
    }
    for (auto x : v)
    {
        cout << x << " ";
    }
    cout << root->val << " ";
    if (root->right)
    {
        right_Side(root->right);
    }
    for (int i = v1.size() - 1; i >= 0; i--)
    {
        cout << v1[i] << " ";
    }
    return 0;
}
