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
    tail = tail->next;
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
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int sz1;
    while (true)
    {
        int x;
        cin >> x;
        if (x == -1)
        {
            break;
        }
        insertTail(head, tail, x);
        sz1 = fun(head);
    }
    bool flag = false;
    Node *i;
    Node *j;
    for (i = head, j = tail; i != NULL; i = i->next, j = j->prev)
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