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
void printNormal(Node *&head)
{
    for(Node *i=head;i!=NULL;i=i->next)
    {
        cout<<i->val<<" ";
    }
    cout<<endl;
}
void printReverse(Node *&tail)
{
    for(Node *i=tail;i!=NULL;i=i->prev)
    {
        cout<<i->val<<" ";
    }
    cout<<endl;
}
int fun(Node *head)
{
    int cnt=0;
    Node *tmp = head;
    while(tmp!=NULL)
    {
        cnt++;
        tmp=tmp->next;
    }
    return cnt;
}
void insertHead(Node *&head,int v)
{
    Node *nd = new Node(v);
    nd->next = head;
    head->prev = nd;
    head = nd;
}
void insertAnyPosition(Node *&head,int ps,int v)
{
    Node *nd = new Node(v);
    Node *tmp = head;
    for(int i=1;i<=ps-1;i++)
    {
        tmp = tmp->next;
    }
    nd->next = tmp->next;
    tmp->next = nd;
    nd->next->prev = nd;
    nd->prev = tmp;
}
void insertTail(Node *&head,Node *&tail,int v)
{
    Node *nd = new Node(v);
    if(tail==NULL)
    {
        head = nd;
        tail = nd;
        return;
    }
    tail->next=nd;
    nd->prev = tail;
    tail = nd;
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *tail = d;
    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;
    c->next = d;
    d->prev = c;
    printNormal(head);
    printReverse(tail);
    int sz = fun(head);
    int ps;
    cin>>ps;
    if(ps==0)
    {
        int x;
        cin>>x;
        insertHead(head,x);
        printNormal(head);
    }
    else if(ps>0 && ps<sz)
    {
        int x;
        cin>>x;
        insertAnyPosition(head,ps,x);
        printNormal(head);
    }
    else if(ps==sz)
    {
        int x;
        cin>>x;
        insertTail(head,tail,x);
        printNormal(head);
    }
    else
    {
        cout<<"INVALID"<<endl;
    }
    return 0;
}