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
void insert_tail(Node *&head, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}
int fun(Node *head)
{
    int cnt = 0;
    while (head->next != NULL)
    {
        Node *tmp = head->next;
        while (tmp != NULL)
        {
            if (head->val == tmp->val)
            {
                cnt++;
                break;
            }
            tmp = tmp->next;
        }
        head = head->next;
    }
    return cnt;
}
int main()
{
    Node *head = NULL;
    int flag;
    while (true)
    {
        int x;
        cin >> x;
        if (x == -1)
        {
            break;
        }
        insert_tail(head, x);
        flag = fun(head);
    }
    //cout<<flag<<endl;
    if (flag != 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}