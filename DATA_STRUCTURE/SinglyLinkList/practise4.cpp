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
void insertValue(Node *&head,int v)
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
        tmp = tmp->next;
    }
    tmp->next = nd;
}
int fun(Node *head)
{
    Node *tmp= head;
    int cnt=0;
    while(tmp!=NULL)
    {
        tmp = tmp->next;
        cnt++;
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
        tmp = tmp->next;
    }
    tmp->next = nd;
}
void insertAnyPosition(Node *&head,int ps,int v)
{
    Node *nd = new Node(v);
    Node *tmp = head;
    for(int i=0;i<ps-1;i++)
    {
      tmp = tmp->next;
    }
    nd->next = tmp->next;
    tmp->next = nd;
}
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
int main()
{
    Node *head = NULL;
    while(true)
    {
        int v;
        cin>>v;
        if(v==-1)
        {
            break;
        }
        insertValue(head,v);
    }
    int q;
    cin>>q;
    while(q--)
    {
        int ps,x;
        cin>>ps>>x;
        int sz = fun(head);
        if(ps==0)
        {
            insertHead(head,x);
            printList(head);
        }
        else if(ps==sz)
        {
            insertTail(head,x);
            printList(head);
        }
        else if(ps<sz && ps>0)
        {
            insertAnyPosition(head,ps,x);
            printList(head);
        }
        else
        {
            cout<<"Invalid"<<endl;
        }
    }
    return 0;
}