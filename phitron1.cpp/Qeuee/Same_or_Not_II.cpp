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
    Node *head=NULL;
    Node *tail =NULL;
    int sz=0;
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
    void push(int data)
    {
        sz++;
        Node *nd = new Node(data);
        if(head==NULL)
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
        if(head==NULL)
        {
            return;
        }
        sz--;
        Node *tmp = head;
        head = head->next;
        delete tmp;
        if(head==NULL)
        {
            tail=NULL;
        }
    }
    int top()
    {
        return head->val;
    }
};
class myQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    void push(int v)
    {
        sz++;
        Node *nd = new Node(v);
        if (head == NULL)
        {
            head = nd;
            tail = nd;
            return;
        }
        tail->next = nd;
        tail = tail->next;
    }
    void pop()
    {
        sz--;
        Node *dnd = head;
        head = head->next;
        delete dnd;
        if (head == NULL)
        {
            tail = NULL;
        }
    }
    int front()
    {
        return head->val;
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
    int n,m;
    cin>>n>>m;
    myStack st;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }
    myQueue q;
    for(int i=0;i<m;i++)
    {
        int x;
        cin>>x;
        q.push(x);
    }
    if(n!=m)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    bool flag = false;
    while(!st.empty())
    {
        int st1 = st.top();
        st.pop();
        int q1 = q.front();
        q.pop();
        if(st1!=q1)
        {
            flag = true;
            break;
        }
    }
    if(flag==false)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}