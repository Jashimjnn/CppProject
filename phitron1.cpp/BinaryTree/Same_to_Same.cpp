#include <iostream>
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
void tail_insrt(Node *&head, Node *&tail, int v)
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
int size_value(Node *head)
{
    Node *newNode = head;
    int cnt_size = 0;
    while (newNode != NULL)
    {
        cnt_size++;
        newNode = newNode->next;
    }
    return cnt_size;
}
int main()
{

    Node *head1 = NULL;
    Node *tail1 = NULL;
    int size1;
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }
        tail_insrt(head1, tail1, val);
        size1 = size_value(head1);
    }
    Node *head2 = NULL;
    Node *tail2 = NULL;
    int size2;
    while (1)
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }
        tail_insrt(head2, tail2, val);
        size2 = size_value(head2);
    }
    bool flag = false;
    if (size1 != size2)
    {
        cout << "NO" << endl;
        return 0;
    }
    Node *j = head2;
    for (Node *i = head1; i != NULL; i = i->next)
    {

        if (i->val != j->val)
        {
            flag = true;
            break;
        }

        j = j->next;
    }

    if (flag)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;

    return 0;
}