#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
class Node
{
public:
    ll val;
    Node *next;
    Node(ll val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insertTail(Node *&head,Node *&tail,ll v)
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
ll ans(Node *head)
{
    Node *tmp=head;
    if(tmp==NULL)
    {
        return 0;
    }
    ll mx=INT_MIN;
    ll mi=INT_MAX;
    while(tmp!=NULL)
    {
      mx=max(mx,tmp->val);
      mi=min(mi,tmp->val);
      tmp=tmp->next;
    }
    return (mx-mi);
}
int main()
{
    Node *head=NULL;
    Node *tail=NULL;
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
    cout<<ans(head)<<endl;
    return 0;
}