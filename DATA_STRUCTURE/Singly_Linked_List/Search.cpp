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
void insertTail(Node *&head, Node *&tail, ll v)
{
    Node *nd = new Node(v);
    if (head == NULL)
    {
        head = nd;
        tail = nd;
        return;
    }
    tail->next = nd;
    tail = nd;
}
ll fun(Node* head)
{
    ll x;
    cin>>x;
    ll indx=0;
    for(Node* i=head;i!=NULL;i=i->next)
    {
        if(i->val==x)
        {
            return indx;
        }
        indx++;
    }

    return -1;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        Node *head = NULL;
        Node *tail = NULL;
        ll ans;
        while (true)
        {
            ll v;
            cin >> v;
            if (v == -1)
            {
                break;
            }
            insertTail(head, tail, v);
        }
        ans = fun(head);
        cout<<ans<<endl;
    }
    return 0;
}