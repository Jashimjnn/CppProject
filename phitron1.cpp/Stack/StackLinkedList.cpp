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
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
class myStack
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz=0;
    // list<int>l;
    void push(int v)
    {
        sz++;
        Node *nd =new Node(v);
        if(head==NULL)
        {
            head = nd;
            tail = nd;
            return;
        }
        tail->next = nd;
        nd->prev = tail;
        tail = nd;
    }
    void pop()
    {
        sz--;
        Node *dnd = tail;
        tail=tail->prev;
        if(tail==NULL)
        {
            head = NULL;
        }
        else
        {
            tail->next=NULL;
        }
        delete  dnd;
    }
    int top()
    {
        return tail->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if (sz == 0)
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
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }
    return 0;
}