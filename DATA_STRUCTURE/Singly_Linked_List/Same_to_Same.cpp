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
ll fun(Node *head)
{
    Node *tp = head;
    ll cnt = 0;
    while (tp != NULL)
    {
        cnt++;
        tp = tp->next;
    }
    return cnt;
}
int main()
{

    Node *head1 = NULL;
    Node *tail1 = NULL;
    ll sz1;
    while (true)
    {
        ll v;
        cin >> v;
        if (v == -1)
        {
            break;
        }
        insertTail(head1, tail1, v);
        sz1 = fun(head1);
    }
    Node *head2 = NULL;
    Node *tail2 = NULL;
    ll sz2;
    while (true)
    {
        ll v;
        cin >> v;
        if (v == -1)
        {
            break;
        }
        insertTail(head2, tail2, v);
        sz2 = fun(head2);
    }
    bool flag = false;
    if (sz1 != sz2)
    {
        cout << "NO" << endl;
        return 0;
    }

    for (Node *i = head1, *j=head2; i != NULL; i = i->next,j=j->next)
    {

            if (i->val != j->val)
            {
                flag = true;
                break;
            }

    }

    if (flag == true)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }

    return 0;
}