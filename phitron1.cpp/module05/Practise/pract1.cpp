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
int fun(Node* head)
{
    int cnt=0;
    Node* tp = head;
    while(tp!=NULL)
    {
        cnt++;
        tp=tp->next;
    }
    return cnt;
}
int main()
{
    Node* head = NULL;
    int sz;
    while(true)
    {
        int x;
        cin>>x;
        if(x==-1)
        {
            break;
        }
        insert(head,x);
        sz = fun(head);
    }
    cout<<sz<<endl;
    return 0;
}