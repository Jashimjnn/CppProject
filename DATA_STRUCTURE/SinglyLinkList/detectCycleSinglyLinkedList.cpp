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
    // Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        // this->prev=NULL;
    }
};
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    head->next = a;
    // a->prev=head;
    a->next = b;
    // b->prev=a;
    b->next = c;
    // c->prev=b;
    c->next = d;
    // d->prev=c;
    d->next = head;
    Node *slow = head;
    Node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (fast == slow)
        {
            cout << "Cycle Detected" << endl;
            break;
        }
    }
    return 0;
}