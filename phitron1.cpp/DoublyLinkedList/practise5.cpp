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
void printNormal(Node *head)
{
    for (Node *i = head; i != NULL; i = i->next)
    {
        cout << i->val << " ";
    }
    cout << endl;
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
        //sz1 = fun(head);
    }
    for(Node *i=head;i->next;i=i->next)
    {
        for(Node *j=i->next;j!=NULL;j=j->next)
        {
            if(i->val>j->val)
            {
                swap(i->val,j->val);
            }
        }
    }
    printNormal(head);
    return 0;
}