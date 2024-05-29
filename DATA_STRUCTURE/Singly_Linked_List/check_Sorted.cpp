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
void insertHead(Node *&head,int v)
{
    Node *nd = new Node(v);
    if(head==NULL)
    {
        head = nd;
        return;
    }
    Node *tmp= head;
    while(tmp->next!=NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = nd;
}
int main()
{
    Node *head = NULL;
    while(true)
    {
        int v;
        cin>>v;
        if(v==-1)
        {
            break;
        }
        insertHead(head,v);
    }
    bool flag = true;
    for(Node* i=head;i->next!=NULL;i=i->next)
    {
        if(i->val>i->next->val)
        {
            flag = false;
            break;
        }
    }
    if(flag==true)
    {
        Y;
    }
    else
    {
        N;
    }
    return 0;
}