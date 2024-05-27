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
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
class myStack
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    ll sz = 0;
    void push(ll val)
    {
        sz++;
        Node *nd = new Node(val);
        if (head == NULL)
        {
            head = nd;
            tail = nd;
            return;
        }
        nd->next = head;
        head = nd;
    }
    void pop()
    {
        sz--;
        if(head==NULL)
        {
            return;
        }
        Node* dnd = head;
        head = head->next;
        delete dnd;
    }
    ll top()
    {
        if(head==NULL)
        {
            return 0;
        }
        return head->val;
    }
    ll size()
    {
        return sz;
    }
    bool empty()
    {
        if(sz==0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    myStack st;
    ll n;
    cin>>n;
    while(n--)
    {
        ll x;
        cin>>x;
        st.push(x);
    }
    cout<<st.size()<<endl;
    while(!st.empty())
    {
        ll x = st.top();
        st.pop();
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}