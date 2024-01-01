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
void Tail_insrt(Node *&head, Node *&tail, int val)
{
    Node *newdnode = new Node(val);
    if (head == NULL)
    {
        head = newdnode;
        tail = newdnode;
        return;
    }
    tail->next = newdnode;
    tail = newdnode;
}
int difference_value(Node* head)
{
    int max_value = INT_MIN;
    int min_value = INT_MAX;
    Node* newNode = head;
    if(newNode==NULL)
    {
        return 0;
    }
    while(newNode!=NULL)
    {
        max_value = max(max_value,newNode->val);
        min_value = min(min_value,newNode->val);
        newNode=newNode->next;
    }

    return (max_value-min_value);
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int diff;
    while (1)
    {
        int v;
        cin >> v;
        if (v == -1)
        {
            break;
        }
        Tail_insrt(head, tail, v);
    }
    diff = difference_value(head);
    cout<<diff<<endl;
    return 0;
}