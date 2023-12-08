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
void printLinkedList(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void deleteHead(Node *&head)
{
    Node *dnd = head;
    head = head->next;
    delete dnd;
}
void insertHead(Node *&head, int v)
{
    Node *nd = new Node(v);
    nd->next = head;
    head = nd;
}
void deleteAnyPosition(Node *head, int pos)
{

    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
}
ll sz(Node *head)
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
    Node *head = NULL;
    Node* tail = NULL;
    ll t;
    cin >> t;
    for (int i=0;i<t;i++)
    {

        int x, v;
        cin >> x;
        if (x == 0)
        {
            cin >> v;
            insertHead(head, v);
        }
        else if (x == 1)
        {
            cin >> v;
            insertTail(head,v);
        }
        else if (x == 2)
        {
            cin >> v;
            if (sz(head) <= v)
            {
                printLinkedList(head);
                continue;
                
            }
            else if (v == 0)
            {
                
                deleteHead(head);
                
            }
            else
            {
                deleteAnyPosition(head, v);

            }

        }
         printLinkedList(head);
    }

    return 0;
}