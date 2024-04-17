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
    Node * tp = head;
    while(tp->next!=NULL)
    {
        tp=tp->next;
    }
    tp->next=nd;
}

int main()
{
    Node* head = NULL;
    int sz;
    while(true)
    {
        int x;
        cin>>x;
        if(x==-1)
        {
            break;
        }
        insert(head,x);
        //sz = fun(head);
    }
    for(Node* i=head;i->next!=NULL;i=i->next)
    {
        for(Node* j=i->next;j!=NULL;j=j->next)
        {
            if(i->val<j->val)
            {
                swap(i->val,j->val);
            }
        }
    }
    for(Node* i=head;i!=NULL;i=i->next)
    {
        cout<<i->val<<" ";
    }
    cout<<endl;
    return 0;
}