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
void insertTail(Node *&head,Node *&tail,ll v)
{
     Node *tmp=new Node(v);
     if(head==NULL)
     {
        head=tmp;
        tail=tmp;
        return;
     }
     tail->next=tmp;
     tail=tmp;
}
ll indx(Node *head,ll v)
{
    ll indx=0;
    bool flag=false;
    for(Node *i=head;i!=NULL;i=i->next)
    {
        if(i->val==v)
        {
            flag=true;
            break;
        }
        indx++;
    }
    if(flag==true)
    {
         return indx;
    }
    else
    {
        return -1;
    }
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        Node* head = NULL;
        Node* tail=NULL;
        while(true)
        {
            ll x;
            cin>>x;
            if(x==-1)
            {
                break;
            }
            insertTail(head,tail,x);
        }
        ll v;
        cin>>v;
        cout<<indx(head,v)<<endl;
    }
    return 0;
}