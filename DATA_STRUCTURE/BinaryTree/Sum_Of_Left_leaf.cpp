/**
 *    author:  Mohammad Jashim Uddin
 **/
#include <iostream>
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define yy cout << "Yes" << endl;
#define N cout << "NO" << endl;
#define nn cout << "No" << endl;
#define one cout << "1" << endl;
#define onee cout << "-1" << endl;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

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
void Sum_of_left_leaf(Node *root, int &sum, int &flag, vector<int> &v)
{
    if (root == NULL)
    {
        return;
    }
    if (root->left == NULL && root->right == NULL && flag == 1)
    {
        sum += root->val;
        v.push_back(root->val);
    }
    flag = 1;
    Sum_of_left_leaf(root->left, sum, flag, v);
    flag = 0;
    Sum_of_left_leaf(root->right, sum, flag, v);
}
// void pre_order(Node *root)
// {
//     if (root == NULL)
//     {
//         return;
//     }
//     cout << root->val << " ";
//     pre_order(root->left);
//     pre_order(root->right);
// }
int main()
{
    Node *root = input_Binary_tree();
    // pre_order(root);
    int sum = 0, flag = 1;
    vector<int> v;
    Sum_of_left_leaf(root, sum, flag, v);
    cout << sum << endl;
    for (auto e : v)
    {
        cout << e << " ";
    }
    cout << endl;
    return 0;
}