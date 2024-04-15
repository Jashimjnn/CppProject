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
    Node *tmp = head;
    while(tmp->next!=NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = nd;
}
int fun(Node *head)
{
    Node *tmp = head;
    int cnt=0;
    while(tmp!=NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}
int main()
{
    Node *head = NULL;
    int sz;
    while(true)
    {
        int v;
        cin>>v;
        if(v==-1)
        {
            break;
        }
        insertHead(head,v);
        sz = fun(head);
    }
    cout<<sz<<endl;
    return 0;
}