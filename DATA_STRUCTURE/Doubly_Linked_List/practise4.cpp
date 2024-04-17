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
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void insertHead(Node *&head,Node *&tail, int v)
{
    Node *nd = new Node(v);
    if(head==NULL)
    {
        head = nd;
        tail = nd;
        return;
    }
    nd->next = head;
    head->prev = nd;
    head = nd;
}
int fun(Node *head)
{
    Node *tmp = head;
    int cnt = 0;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}
void insertTail(Node *&head, Node *&tail, int v)
{
    Node *nd = new Node(v);
    if (head == NULL)
    {
        head = nd;
        tail = nd;
        return;
    }
    tail->next = nd;
    nd->prev = tail;
    tail = nd;
}
void insertAnyPosition(Node *&head, int ps, int v)
{
    Node *nd = new Node(v);
    Node *tmp = head;
    for (int i = 1; i <= ps - 1; i++)
    {
        tmp = tmp->next;
    }
    nd->next = tmp->next;
    tmp->next = nd;
    nd->next->prev = nd;
    nd->prev = tmp;
}
void printNormal(Node *&head)
{
    for (Node *i = head; i != NULL; i = i->next)
    {
        cout << i->val << " ";
    }
    cout << endl;
}
void printReverse(Node *&tail)
{
    for (Node *i = tail; i != NULL; i = i->prev)
    {
        cout << i->val << " ";
    }
    cout << endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int q;
    cin >> q;
    while (q--)
    {
        int x, v;
        cin >> x >> v;
        int sz = fun(head);
        if (x == 0)
        {
            insertHead(head,tail, v);
            printNormal(head);
            printReverse(tail);
        }
        else if (x == sz)
        {
            insertTail(head, tail, v);
            printNormal(head);
            printReverse(tail);
        }
        else if (x < sz && x > 0)
        {
            insertAnyPosition(head, x, v);
            printNormal(head);
            printReverse(tail);
        }
        else
        {
            cout << "Invalid" << endl;
        }
    }
    return 0;
}