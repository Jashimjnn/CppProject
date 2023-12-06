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
void insert(Node *&head, int val)
{
    Node *newNd = new Node(val);
    if (head == NULL)
    {
        head = newNd;
        return;
    }
    else
    {
        Node *tp = head;
        while (tp->next != NULL)
        {
            tp = tp->next;
        }
        tp->next = newNd;
    }
}

bool funn(Node *head)
{
    Node* tmp =head;
    while(tmp!=NULL && tmp->next!=NULL)
    {
        if(tmp->val>tmp->next->val)
        {
            return false;
        }
        tmp=tmp->next;
    }
    return true;
    
}
int main()
{
    Node *head = NULL;
    int sz, cnt;
    bool flag = false;
    int x;
    while (true)
    {
        cin >> x;
        if (x == -1)
        {
            break;
        }
        insert(head, x);
        flag = funn(head);
    }
    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}