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
        this->prev=NULL;
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
void reverse(Node *head,Node *tail)
{
    Node * i=head;
    Node *j=tail;
    while(i!=j && i->next!=j)
    {
        swap(i->val,j->val);
        i=i->next;
        j=j->prev;
    }
    // Node even hole;
    //swap(i->val,j->val);
}
int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);
    head->next=a;
    a->prev=head;
    a->next=b;
    b->prev=a;
    b->next=c;
    c->prev=b;
    c->next=d;
    d->prev=c;
    Node *tail=d;
    printNormal(head);
    reverse(head,tail);
    printNormal(head);
    return 0;
}