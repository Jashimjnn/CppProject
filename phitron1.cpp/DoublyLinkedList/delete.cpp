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
void deleteAnyPosition(Node *head, int pos)
{
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    Node *dnd = tmp->next;
    tmp->next = tmp->next->next;
    tmp->next->prev = tmp;
    delete dnd;
}
void deleteTail(Node *&tail)
{
    Node *dnd=tail;
    tail=tail->prev;
    delete dnd;
    tail->next=NULL;
}
void deleteHead(Node *&head)
{
    Node * dnd = head;
    head=head->next;
    delete dnd;
    head->prev=NULL;
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
    cin >> pos;
    if(pos==0)
    {
     deleteHead(head);
    }
    else if(pos==sz(head)-1)
    {
      deleteTail(tail);
    }
    else if(pos>=sz(head))
    {
        cout<<"Invalid"<<endl;
    }
    else
    {
        deleteAnyPosition(head, pos);
    }
    
    
    printNrmal(head);
    printReverse(tail);
    return 0;
}