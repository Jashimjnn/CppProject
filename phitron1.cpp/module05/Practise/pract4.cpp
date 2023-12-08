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
void insert(Node *&head,int v)
{
    Node* nd = new Node(v);
    if(head==NULL)
    {
        head=nd;
        return;
    }
    Node* tp = head;
    while(tp->next!=NULL)
    {
        tp=tp->next;
    }
    tp->next=nd;
}
void printList(Node *head)
{
    Node*  tp = head;
    while(tp!=NULL)
    {
        cout<<tp->val<<" ";
        tp=tp->next;
    }
    cout<<endl;
}
void insertTail(Node *head,int po,int v)
{
    Node* nd = new Node(v);
    Node* tp=head;
    for(int i=1;i<=po-1;i++)
    {
        tp=tp->next;
        if(tp==NULL)
        {
            cout<<"Invalid"<<endl;
            return;
        }
    }
    nd->next=tp->next;
    tp->next=nd;
    printList(head);
}
void insertHead(Node *&head,int  v)
{
    Node* nd = new Node(v);
    //Node* tp = head;
    nd->next=head;
    head=nd;
    printList(head);
}
int main()
{
    Node* head = NULL;
    while(true)
    {
        int x;
        cin>>x;
        if(x==-1)
        {
            break;
        }
        insert(head,x);
    }
    int qr;
    cin>>qr;
    for(int i=1;i<=qr;i++)
    {
        int po,v;
        cin>>po>>v;
        if(po==0)
        {
            insertHead(head,v);
        }
        else
        {
            insertTail(head,po,v);
        }
    }
    return 0;
}