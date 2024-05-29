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
void insertValue(Node *&head,int v)
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
int size(Node *&head)
{
    Node *tmp = head;
    int cnt=0;
    while(tmp!=NULL)
    {
        tmp=tmp->next;
        cnt++;
    }
    return cnt;
}
int main()
{
    Node *head = NULL;
    while(true)
    {
        int x;
        cin>>x;
        if(x==-1)
        {
            break;
        }
        insertValue(head,x);
    }
    int sz = size(head);
    int md = sz/2;
    Node *tmp = head;
    for(int i=0;i<md-1;i++)
    {
        tmp = tmp->next;
    }
    if(md%2==0)
    {
        tmp=tmp->next;
        cout<<tmp->val<<endl;
    }
    else
    {
        cout<<tmp->val<<" "<<tmp->next->val<<endl;
    }
    return 0;
}