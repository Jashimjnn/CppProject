#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
class Node
{
public:
    ll val;
    Node *next;
    Node(ll val)
    {
        this->val = val;
        this->next = NULL;
    }
};
class myQueue
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
        tail->next = nd;
        tail = nd;
    }
    void pop()
    {
        sz--;
        if(head==NULL)
        {
            return;
        }
        Node *dnd = head;
        head = head->next;
        delete dnd;
    }
    ll front()
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
    myQueue q;
    ll n;
    cin>>n;
    while(n--)
    {
        ll x;
        cin>>x;
        q.push(x);
    }
    cout<<q.size()<<endl;
    while(!q.empty())
    {
        ll x = q.front();
        q.pop();
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}