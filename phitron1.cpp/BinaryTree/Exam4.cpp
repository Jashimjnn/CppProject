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
void printLevel(Node  *root,int x)
{
    if(root==NULL)
    {
        return;
    }
    queue<Node*>q;
    int l=0;
    bool flag=false;
    if(root)
    {
        q.push(root);
    }
    while(!q.empty())
    {
        int sz = q.size();
        for(int  i=0;i<sz;i++)
        {
            Node *fr=q.front();
            q.pop();
            if(l==x)
            {
                cout<<fr->val<<" ";
                flag=true;
            }
            if(fr->left)
            {
                q.push(fr->left);
            }
            if(fr->right)
            {
                q.push(fr->right);
            }
        }
        if(l==x)
        {
            break;
        }
        l++;
    }
    if(flag==false)
    {
        cout<<"Invalid"<<endl;
    }
}
int main()
{
    Node *root = input_Binary_tree();
    int x;
    cin>>x;
    printLevel(root,x);
    return 0;
}