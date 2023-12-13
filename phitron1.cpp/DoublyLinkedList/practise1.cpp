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
void insertTail(Node *&head,Node *&tail,int v)
{
    Node *nd = new Node(v);
    if(tail==NULL)
    {
      head=nd;
      tail=nd;
      return;
    }
    tail->next=nd;
    nd->prev=tail;
    tail=tail->next;
}
int fun(Node *head)
{
    int cnt=0;
    Node *tmp=head;
    while(tmp!=NULL)
    {
        cnt++;
        tmp=tmp->next;
    }
    return cnt;
}
int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;
    int sz1;
    while(true)
    {
        int x;
        cin>>x;
        if(x==-1)
        {
            break;
        }
        insertTail(head1,tail1,x);
        sz1=fun(head1);
    }
    Node *head2 = NULL;
    Node *tail2 = NULL;
    int sz2;
    while(true)
    {
        int x;
        cin>>x;
        if(x==-1)
        {
            break;
        }
        insertTail(head2,tail2,x);
        sz2= fun(head2);
    }
    if(sz1!=sz2)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    bool flag=false;
    for(Node *i=head1,*j=head2;i!=NULL;i=i->next,j=j->next)
    {
         if(i->val!=j->val)
         {
            flag=true;
         }
    }
    if(flag==true)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
    return 0;
}