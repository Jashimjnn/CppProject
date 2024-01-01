#include <bits/stdc++.h>
using namespace std;
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
void tail_insrt(Node *&head, Node *&tail,int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
 void duplicate_remove(Node* head)
{
   for (Node* i = head; i != NULL; i = i->next) {
    for (Node* j = i; j->next != NULL; ) {
        if (i->val == j->next->val) {
            j->next = j->next->next;
        } else {
            j = j->next;
        }
    }
}

}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while (1)
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }
        tail_insrt(head,tail, val);
    }
    duplicate_remove(head);
    Node *i = head;
    while ( i != NULL)
    {
        cout << i->val << " ";
        i = i->next;
    }
    return 0;
}