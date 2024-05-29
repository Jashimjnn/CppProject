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
void printList(Node *head)
{
    Node *tmp = head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
int fun(Node *head)
{
    Node *tmp = head;
    int cnt=0;
    while(tmp!=NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}
void insertHead(Node *&head,int v)
{
    Node *nd = new Node(v);
    nd->next = head;
    head = nd;
}
void insertTail(Node *&head,int v)
{
    Node *nd = new Node(v);
    if(head==NULL)
    {
        head = nd;
        return;
    }
    Node *tmp = head;
    while(tmp->next!=NULL)
    {
        tmp=tmp->next;
    }
    tmp->next = nd;
}
void insertAnyPosition(Node *&head,int ps,int v)
{
    Node *nd = new Node(v);
    Node *tmp = head;
    for(int i=0;i<=ps-1;i++)
    {
        tmp = tmp->next;
    }
    nd->next = tmp->next;
    tmp->next = nd;
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    printList(head);
    int sz = fun(head);
    cout<<sz<<endl;
    int ps;
    cin>>ps;
    int v;
    cin>>v;
    if(ps==0)
    {
        insertHead(head,v);
        printList(head);
    }
    else if(ps==sz)
    {
        insertTail(head,v);
        printList(head);
    }
    else if(ps>sz)
    {
        cout<<"Invalid"<<endl;
    }
    else
    {
        insertAnyPosition(head,ps,v);
        printList(head);
    }
    return 0;
}