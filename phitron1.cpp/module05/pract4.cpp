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
void insert_tail(Node *&head, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}
void printList(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void insertPosition(Node *head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
        if (tmp == NULL)
        {
            cout << "Invalid" << endl;
            return;
        }
    }
 
    newNode->next = tmp->next;
    tmp->next = newNode;
 
    printList(head);
}
void insertPosition(Node *&head, int v)
{
    Node *newNode = new Node(v);
    newNode->next = head;
    head = newNode;
    printList(head);
}
 
int main()
{
    Node *head = NULL;
    int sz;
    while (true)
    {
        int x;
        cin >> x;
        if (x == -1)
        {
            break;
        }
        insert_tail(head, x);
        // sz=fun(head);
    }
    int qr;
    cin >> qr;
    for (int i = 1; i <= qr; i++)
    {
        int po, val;
        cin >> po >> val;
        if (po == 0)
        {
            insertPosition(head, val);
        }
        else
        {
            insertPosition(head, po, val);
        }
    }
 
    return 0;
}