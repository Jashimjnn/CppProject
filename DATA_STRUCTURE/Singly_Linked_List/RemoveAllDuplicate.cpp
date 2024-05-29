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
void removeElement(Node *&head)
{
    Node *tmp = new Node(' ');
    tmp->next = head;
    Node *tmp1 = tmp;
    while (tmp1->next && tmp1->next->next)
    {
        if (tmp1->next->val == tmp1->next->next->val)
        {
            ll x = tmp1->next->val;
            while(tmp1->next!=NULL && tmp1->next->val==x)
            {
                tmp1->next = tmp1->next->next;
            }
        }
        else
        {
            tmp1 = tmp1->next;
        }
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
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
    removeElement(head);
    for (Node *i = head; i != NULL; i = i->next)
    {
        cout << i->val << " ";
    }
    cout << endl;
    return 0;
}