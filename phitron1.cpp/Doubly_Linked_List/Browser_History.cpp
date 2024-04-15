#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
class Node
{
public:
    string val;
    Node *next;
    Node *prev;
    Node(string val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void insertTail(Node *&head, Node *&tail, string v)
{
    Node *nd = new Node(v);
    if (head == NULL)
    {
        head = nd;
        tail = nd;
        return;
    }
    tail->next = nd;
    nd->prev = tail;
    tail = nd;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while (true)
    {
        string str;
        cin >> str;
        if (str == "end")
        {
            break;
        }
        insertTail(head, tail, str);
    }
    int q;
    cin >> q;
    Node *tmp = head;
    while (q--)
    {
        string str1;
        cin >> str1;
        if (str1 == "visit")
        {
            string str2;
            cin >> str2;

            Node *tmp1 = head;
            while (tmp1 != NULL)
            {
                if (tmp1->val == str2)
                {
                    cout << tmp1->val << endl;
                    tmp = tmp1;
                    break;
                }
                else
                {
                    tmp1 = tmp1->next;
                }
            }

            if (tmp1 == NULL)
            {
                cout << "Not Available" << endl;
            }
        }
        else if (str1 == "next")
        {
            if (tmp->next != NULL)
            {
                tmp = tmp->next;
                cout << tmp->val << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (str1 == "prev")
        {
            if (tmp->prev != NULL)
            {
                tmp = tmp->prev;
                cout << tmp->val << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
    }
    return 0;
}