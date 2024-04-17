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
int count_leaf(Node *root)
{
    int cnt;
    if (root == NULL)
    {
        return 0;
    }
    if (root->left == NULL && root->right == NULL)
    {
        cnt = 1;
    }
    else
    {
        int l = count_leaf(root->left);
        int r = count_leaf(root->right);
        cnt = (l + r);
    }
    return cnt;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Node *root = input_tree();
        int ans = count_leaf(root);
        cout << ans << endl;
    }
    return 0;
}