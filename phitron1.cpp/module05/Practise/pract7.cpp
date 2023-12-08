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
void insert(Node *&head,int v)
{
    Node* nd = new Node(v);
    if(head==NULL)
    {
        head=nd;
        return;
    }
    Node* tp = head;
    while(tp->next!=NULL)
    {
        tp=tp->next;
    }
    tp->next=nd;
}
void printReverse(Node *head)
{
    if(head==NULL)
    {
        return;
    }
    printReverse(head->next);
    cout<<head->val<<" ";
}
int main()
{
    Node* head = NULL;
    while(true)
    {
        int x;
        cin>>x;
        if(x==-1)
        {
            break;
        }
        insert(head,x);
    }
    printReverse(head);
    return 0;
}