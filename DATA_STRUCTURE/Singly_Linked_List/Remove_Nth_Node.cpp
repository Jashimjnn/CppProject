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
void inserValue(Node *&head, int v)
{
    Node *nd = new Node(v);
    if (head == NULL)
    {
        head = nd;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = nd;
}
int size(Node *&head)
{
    Node *tmp = head;
    int cnt = 0;
    while (tmp != NULL)
    {
        tmp = tmp->next;
        cnt++;
    }
    return cnt;
}
int main()
{
    Node *head = NULL;
    while (true)
    {
        int x;
        cin >> x;
        if (x == -1)
        {
            break;
        }
        inserValue(head, x);
    }
    int sz = size(head);
    int n;
    cin>>n;
    if(sz==n)
    {
        head = head->next;
    }
    else
    {
        int cnt=0;
        Node *tmp = head;
        while(cnt<sz-n-1)
        {
            tmp=tmp->next;
            cnt++;
        }
        tmp->next = tmp->next->next;
    }
    for(Node *i=head;i!=NULL;i=i->next)
    {
        cout<<i->val<<" ";
    }
    cout<<endl;
    return 0;
}