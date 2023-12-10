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
void insertHead(Node* &head,int v)
{
    Node* nd = new Node(v);
    nd->next=head;
    head=nd;
}
void insertTail(Node *&head,int v)
{
    Node* nd = new Node(v);
    if(head==NULL)
    {
        head=nd;
        return;
    }
    Node* tmp=head;
    while(tmp->next!=NULL)
    {
        tmp=tmp->next;
    }
    tmp->next=nd;
}
void deleteHead(Node* &head)
{
    Node* nd = head;
    head=head->next;
    delete nd;
}
ll sz(Node *head)
{
    ll cnt=0;
    Node* tmp=head;
    while(tmp!=NULL)
    {
       cnt++;
       tmp=tmp->next;
    }
    return cnt;
}
void printLinkedList(Node* head)
{
    Node* tmp = head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
void deleteAnyPosition(Node* head,int v)
{
    Node* tmp=head;
    for(int i=1;i<=v-1;i++)
    {
        tmp=tmp->next;
    }
    Node* nd=tmp->next;
    tmp->next=tmp->next->next;
    delete nd;
}
int main()
{
    Node* head=NULL;
    ll t;
    cin>>t;
    while(t--)
    {
        ll x;
        cin>>x;
        if(x==0)
        {
            ll v;
            cin>>v;
            insertHead(head,v);
        }
        else if(x==1)
        {
            ll v;
            cin>>v;
            insertTail(head,v);
        }
        else if(x==2)
        {
            ll v;
            cin>>v;
            if(v==0)
            {
                deleteHead(head);
            }
            else if(sz(head)<=v)
            {
                printLinkedList(head);
                continue;
            }
            else
            {
                deleteAnyPosition(head,v);
            }
        }
        printLinkedList(head);
    }
    return 0;
}