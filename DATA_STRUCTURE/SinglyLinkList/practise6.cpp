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
    Node* tp = head;
    int cnt=0;
    while(tp!=NULL)
    {
      cnt++;
      tp=tp->next;
    }
    return cnt;
}
int main()
{
    Node* head1 = NULL;
    Node* head2 = NULL;
    int sz,sz1;
    while(true)
    {
        int x;
        cin>>x;
        if(x==-1)
        {
            break;
        }
        insert(head1,x);
        sz = fun(head1);
    }
    while(true)
    {
        int x;
        cin>>x;
        if(x==-1)
        {
            break;
        }
        insert(head2,x);
        sz1 = fun(head2);
    }
    if(sz==sz1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}