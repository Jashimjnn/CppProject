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
    tail->next=nd;
    nd->prev=tail;
    tail=tail->next;
}
void reverseElement(Node *head,Node *tail)
{
    Node *i = head;
    Node *j = tail;
    while(i!=j && i->next!=j)
    {
        swap(i->val,j->val);
        i=i->next;
        j=j->prev;
    }
    swap(i->val,j->val);
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
    }
    reverseElement(head,tail);
    for(Node *i=head;i!=NULL;i=i->next)
    {
        cout<<i->val<<" ";
    }
    cout<<endl;
    return 0;
}