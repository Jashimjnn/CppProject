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
Node *searchBST(Node *root, int val)
{
    if (root == NULL || root->val == val)
    {
        return root;
    }
    if (val < root->val)
    {
        return searchBST(root->left, val);
    }
    return searchBST(root->right, val);
}
void printTree(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->val << " ";
    printTree(root->left);
    printTree(root->right);
}

int main()
{
    Node *root = input_Binary_tree();
    int x;
    cin >> x;
    Node *subtreeRoot = searchBST(root, x);
    if (subtreeRoot)
    {
        printTree(subtreeRoot);
    }
    else
    {
        cout << "Subtree with value " << x << " not found.";
    }
    cout << endl;
    return 0;
}
