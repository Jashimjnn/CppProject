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
int Search_value(Node* head)
{
    int v;
    cin>>v;
    int index_value=0;
    for(Node* i=head;i!=NULL;i=i->next)
    {
        if(i->val==v)
        {
            return index_value;
        }
        index_value++;
    }

    return -1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Node *head = NULL;
        Node *tail = NULL;
        int search;
        while (true)
        {
            int v;
            cin >> v;
            if (v == -1)
            {
                break;
            }
            tail_insrt(head, tail, v);
        }
        search = Search_value(head);
        cout<<search<<endl;
    }
    return 0;
}