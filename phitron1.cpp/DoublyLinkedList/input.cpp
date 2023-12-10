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
void printNormal(Node *head)
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
    Node* head = NULL;
    Node* tail = NULL;
    while(true)
    {
        int v;
        cin>>v;
        if(v==-1)
        {
            break;
        }
        insertTail(head,tail,v);
    }
    printNormal(head);
    printReverse(tail);
    return 0;
}