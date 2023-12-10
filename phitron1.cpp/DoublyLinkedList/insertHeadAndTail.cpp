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
void printNrmal(Node *head)
{
    for (Node *i = head; i != NULL; i = i->next)
    {
        cout << i->val << " ";
    }
    cout << endl;
}
void printReverse(Node *tail)
{
    for (Node *i = tail; i != NULL; i = i->prev)
    {
        cout << i->val << " ";
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
    // cout<<tmp->val<<endl;
}
int sz(Node *head)
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
void insertHead(Node* &head,Node *&tail,int v)
{
    Node* nd = new Node(v);
    if(head==NULL)
    {
        head=nd;
        return;
    }
    nd->next=head;
    head->prev=nd;
    head=nd;
}
void insertTail(Node *&head,Node *&tail,int v)
{
    Node *nd=new Node(v);
    if(tail==NULL)
    {
        head=nd;
        tail=nd;
        return;
    }
    tail->next=nd;
    nd->prev=tail;
    tail=tail->next;
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);

    Node *tail = c;
    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;
    printNrmal(head);
    printReverse(tail);

    
    cout << sz(head) << endl;
    int pos, v;
    cin >> pos >> v;
    if (pos > sz(head))
    {
        cout << "Invalid" << endl;
    }
    else if (pos == 0)
    {
        insertHead(head, tail, v);
    }
    else if (pos == sz(head))
    {
        insertTail(head, tail, v);
    }
    else
    {
        insertAnyPosition(head, pos, v);
    }
    printNrmal(head);
    printReverse(tail);
    return 0;
}