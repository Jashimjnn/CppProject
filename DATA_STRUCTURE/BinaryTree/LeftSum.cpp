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
Node *input_tree()
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
int sum_of_leftNoder(Node *root, int lft)
{
    int sum;
    if (root == NULL)
    {
        return 0;
    }
    int l = sum_of_leftNoder(root->left, 1);
    int r = sum_of_leftNoder(root->right, 0);

    if (lft != 0)
    {
        return (l + r + (root->val));
    }

    sum = (l + r);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Node *root = input_tree();
        int ans = sum_of_leftNoder(root,0);
        cout<<ans<<endl;
    }
    return 0;
}