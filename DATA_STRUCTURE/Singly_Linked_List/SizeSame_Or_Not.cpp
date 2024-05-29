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
int main()
{
    Node *head1 = NULL;
    while (true)
    {
        ll x;
        cin >> x;
        if (x == -1)
        {
            break;
        }
        insertValue(head1, x);
    }
    int sz1 = SizePrint(head1);
    Node *head2 = NULL;
    while (true)
    {
        ll x;
        cin >> x;
        if (x == -1)
        {
            break;
        }
        insertValue(head2, x);
    }
    int sz2 = SizePrint(head2);
    if(sz1==sz2)
    {
        Y;
    }
    else
    {
        N;
    }
    return 0;
}