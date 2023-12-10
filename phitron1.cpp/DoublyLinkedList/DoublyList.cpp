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
    Node* prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev=NULL;
    }
};
void printNrmal(Node *head)
{
  for(Node* i=head;i!=NULL;i=i->next)
    {
        cout<<i->val<<" ";
    }
    cout<<endl;
}
void printReverse(Node* tail)
{
   for(Node* i=tail;i!=NULL;i=i->prev)
    {
        cout<<i->val<<" ";
    }
    cout<<endl;
}
int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* tail = b;
    head->next = a;
    a->prev=head;
    a->next = b;
    b->prev = a;
    printNrmal(head);
    printReverse(tail);
    return 0;
}