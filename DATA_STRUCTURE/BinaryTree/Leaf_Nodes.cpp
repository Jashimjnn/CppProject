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
    cin>>val;
    Node *root;
    if(val==-1)
    {
        root = NULL;
    }
    else
    {
        root = new Node(val);
    }
    queue<Node*>q;
    if(root!=NULL)
    {
        q.push(root);
    }
    while(!q.empty())
    {
        Node *pr = q.front();
        q.pop();
        int l,r;
        cin>>l>>r;
        Node *myleft;
        Node *myright;
        if(l==-1)
        {
            myleft = NULL;
        }
        else
        {
            myleft = new Node(l);
        }
        if(r==-1)
        {
            myright = NULL;
        }
        else
        {
            myright = new Node(r);
        }
        pr->left = myleft;
        pr->right = myright;
        if(pr->left)
        {
            q.push(pr->left);
        }
        if(pr->right)
        {
            q.push(pr->right);
        }
    }
    return root;
}
void Leaf_Node(Node *root,vector<ll>&v)
{
    if(root->left==NULL && root->right==NULL)
    {
        v.push_back(root->val);
    }
    if(root->left)
    {
        Leaf_Node(root->left,v);
    }
    if(root->right)
    {
        Leaf_Node(root->right,v);
    }
}
int main()
{
    Node *root = input_Tree();
    Leaf_Node(root,v);
    sort(v.rbegin(),v.rend());
    for(auto x:v)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}