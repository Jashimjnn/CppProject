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
void insertValue(Node *&head, int v)
{
    Node *nd = new Node(v);
    if (head == NULL)
    {
        head = nd;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = nd;
}
void insertHead(Node *&head, int v)
{
    Node *nd = new Node(v);
    if (head == NULL)
    {
        head = nd;
        return;
    }
    nd->next = head;
    head = nd;
}
void insertTail(Node *&head, int v)
{
    Node *nd = new Node(v);
    if (head == NULL)
    {
        head = nd;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = nd;
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
}
int size(Node *&head)
{
    Node *tmp = head;
    int cnt = 0;
    while (tmp != NULL)
    {
        tmp = tmp->next;
        cnt++;
    }
    return cnt;
}
void PrintList(Node *&head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while (true)
    {
        int x;
        cin >> x;
        if (x == -1)
        {
            break;
        }
        insertValue(head, x);
    }
    int q;
    cin >> q;
    while (q--)
    {
        int x, y;
        cin >> x >> y;
        if (x == 0)
        {

            insertHead(head, y);
            PrintList(head);
        }
        else if (x == size(head))
        {

            insertTail(head, y);
            PrintList(head);
        }
        else if (x > 0 && x < size(head))
        {

            insertAnyPosition(head, x, y);
            PrintList(head);
        }
        else
        {
            cout << "Invalid" << endl;
        }
    }
    return 0;
}