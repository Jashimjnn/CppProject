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
void insertHead(Node *&head, Node *&tail, int v)
{
    Node *nd = new Node(v);
    if (head == NULL)
    {
        head = nd;
        tail = nd;
        return;
    }
    nd->next = head;
    head->prev = nd;
    head = nd;
}
void insertTail(Node *&head, Node *&tail, int v)
{
    Node *nd = new Node(v);
    if (tail == NULL)
    {
        head = nd;
        tail = nd;
        return;
    }
    tail->next = nd;
    nd->prev = tail;
    tail = nd;
}
int fun(Node *head)
{
    int cnt = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}
void printNormal(Node *&head)
{
    cout<<"L -> ";
    for (Node *i = head; i != NULL; i = i->next)
    {
        cout << i->val << " ";
    }
    cout << endl;
}
void printreverse(Node *&tail)
{
    cout<<"R -> ";
    for (Node *i = tail; i != NULL; i = i->prev)
    {
        cout<< i->val << " ";
    }
    cout << endl;
}
void insertAnyPosition(Node *head, int pos, int v)
{
    Node *nd = new Node(v);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    nd->next = tmp->next;
    tmp->next = nd;
    nd->next->prev = nd;
    nd->prev = tmp;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int sz1;
    int t;
    cin >> t;
    while (t--)
    {
        int x, v;
        cin >> x >> v;
        if (x > fun(head))
        {
            cout << "Invalid" << endl;
            continue;
        }
        else
        {
            if (x == 0)
            {
                insertHead(head, tail, v);
            }
            else if (x == fun(head))
            {
                insertTail(head, tail, v);
            }
            else
            {
                insertAnyPosition(head, x, v);
            }
        }
        printNormal(head);
        printreverse(tail);
    }
    return 0;
}