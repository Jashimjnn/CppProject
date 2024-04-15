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
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void insertHead(Node *&head,Node *&tail,int v)
{
    Node *nd = new Node(v);
    if(head==NULL)
    {
        head = nd;
        tail = nd;
        return;
    }
    tail->next = nd;
    nd->prev = tail;
    tail = nd;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while(true)
    {
        int x;
        cin>>x;
        if(x==-1)
        {
            break;
        }
        insertHead(head,tail,x);
    }
    bool flag = false;
    for(Node *i=head,*j=tail;i!=NULL;i=i->next,j=j->prev)
    {
        if(i->val!=j->val)
        {
            flag = true;
            break;
        }
    }
    if(flag==true)
    {
        N;
    }
    else
    {
        Y;
    }
    return 0;
}