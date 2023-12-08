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
void insert_tail(Node *&head, Node *&tail, ll val)
{
    Node *nd = new Node(val);
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
    Node* tp = head;
    if(tp==NULL)
    {
        return 0;
    }
    ll mx = INT_MIN;
    ll mi = INT_MAX;
    while(tp!=NULL)
    {
        mx = max(mx,tp->val);
        mi = min(mi,tp->val);
        tp=tp->next;
    }

    return (mx-mi);
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    ll ans;
    while (true)
    {
        ll x;
        cin >> x;
        if (x == -1)
        {
            break;
        }
        insert_tail(head, tail, x);
    }
    ans = fun(head);
    cout<<ans<<endl;
    return 0;
}