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
ll fun(Node *head)
{
    ll cnt=0;
    Node *tmp=head;
    while(tmp!=NULL)
    {
        cnt++;
        tmp=tmp->next;
    }
    return cnt;
}
int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;
    ll sz1,sz2;
    while (true)
    {
        ll x;
        cin >> x;
        if (x == -1)
        {
            break;
        }
        insertTail(head1, tail1, x);
        sz1=fun(head1);
    }
    Node *head2 = NULL;
    Node *tail2 = NULL;
    while (true)
    {
        ll x;
        cin >> x;
        if (x == -1)
        {
            break;
        }
        insertTail(head2, tail2, x);
        sz2=fun(head2);
    }
    if(sz1!=sz2)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    bool flag = false;
    for(Node *i=head1,*j=head2;i!=NULL;i=i->next,j=j->next)
    {
        if(i->val!=j->val)
        {
            flag=true;
            break;
        }
    }
    if(flag==true)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
    return 0;
}