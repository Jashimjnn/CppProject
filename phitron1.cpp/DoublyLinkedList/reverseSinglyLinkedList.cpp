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
void printReverse(Node *n)
{
    if(n==NULL)
    {
        return;
    }
    printReverse(n->next);
    cout<<n->val<<" ";
}
void print(Node *head)
{
    Node *tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
void printReverse1(Node *&head,Node *c)
{
    if(c->next==NULL)
    {
        head=c;
        return;
    }
    printReverse1(head,c->next);
    c->next->next=c;
    c->next=NULL;
}
int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);
    head->next=a;
    a->next=b;
    b->next=c;
    c->next=d;
    print(head);
    printReverse(head);
    cout<<endl;
    printReverse1(head,head);
    print(head);
    return 0;
}