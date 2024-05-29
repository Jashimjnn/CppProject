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
void insertValue(Node *&head, int v)
{
    Node *nd = new Node(v);
    if (head == NULL)
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
int SizePrint(Node *&head)
{
    int cnt=0;
    Node *tmp = head;
    while(tmp!=NULL)
    {
        tmp=tmp->next;
        cnt++;
    }
    return cnt;
}
void ReversePrint(Node *&head)
{
    if(head==NULL)
    {
        return;
    }
    Node *tmp = head;
    ReversePrint(tmp->next);
    cout<<tmp->val<<" ";
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while (true)
    {
        ll x;
        cin >> x;
        if (x == -1)
        {
            break;
        }
        insertValue(head, x);
    }
    ReversePrint(head);
    return 0;
}