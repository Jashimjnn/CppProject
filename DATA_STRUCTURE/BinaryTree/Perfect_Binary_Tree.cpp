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
int count_Nodes(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int l=count_Nodes(root->left);
    int r=count_Nodes(root->right);
    return (l+r+1); 
}
int max_Hight(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int l = max_Hight(root->left);
    int r = max_Hight(root->right);
    return max(l, r) + 1;
}
int main()
{
    Node *root = input_Binary_tree();
    int ans = count_Nodes(root);
    int x = max_Hight(root);
    int y = pow(2,x);
    if(ans==(y-1))
    {
     cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}