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
void insertTail(Node *&head,Node *&tail,int v)
{
    Node *nd = new Node(v);
    if(head==NULL)
    {
        head=nd;
        tail=nd;
        return;
    }
    tail->next=nd;
    tail=nd;
}
void removeElement(Node *head)
{
    for(Node* i=head;i!=NULL;i=i->next)
    {
        for(Node * j=i;j->next!=NULL;)
        {
            if(i->val==j->next->val)
            {
                j->next=j->next->next;
            }
            else
            {
                j=j->next;
            }
        }
    }
}
int main()
{
    Node* head  = NULL;
    Node* tail  = NULL;
    while(true)
    {
        int x;
        cin>>x;
        if(x==-1)
        {
            break;
        }
        insertTail(head,tail,x);
    }
    removeElement(head);
    for(Node* i=head;i!=NULL;i=i->next)
    {
        cout<<i->val<<" ";
    }
    cout<<endl;
    return 0;
}