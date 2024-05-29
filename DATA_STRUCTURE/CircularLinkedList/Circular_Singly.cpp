#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int sz = 0;
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
class Circulr
{
private:
    Node *last;

public:
    Circulr()
    {
        last = NULL;
    }
    void insertHead(int v)
    {
        Node *nd = new Node(v);
        if (last == NULL)
        {
            last = nd;
            last->next = last;
        }
        else
        {
            nd->next = last->next;
            last->next = nd;
        }
    }
    void insertTail(int v)
    {
        Node *nd = new Node(v);
        if (last == NULL)
        {
            last = nd;
            last->next = last;
        }
        else
        {
            nd->next = last->next;
            last->next = nd;
            last = nd;
        }
    }
    void insertAnyPosition(int v, int ps)
    {
        Node *nd = new Node(v);
        Node *head = last->next;
        Node *tmp = head;
        for (int i = 0; i < ps - 1; i++)
        {
            tmp = tmp->next;
        }
        nd->next = tmp->next;
        tmp->next = nd;
        if (tmp == last)
        {
            last = nd;
        }
    }
    void deleteHead()
    {
        Node *head = last->next;
        if (last->next == last)
        {
            delete last;
            last = NULL;
        }
        else
        {
            last->next = head->next;
            delete head;
        }
    }
    void deleteTail()
    {
        if (last->next == last)
        {
            delete last;
            last = NULL;
        }
        Node *head = last->next;
        Node *tmp = head;
        while (tmp->next != last)
        {
            tmp = tmp->next;
        }
        tmp->next = head;
        delete last;
        last = tmp;
    }
    void deleteAnyPosition(int ps)
    {
        Node *head = last->next;
        Node *tmp = head;
        for (int i = 0; i < ps - 1; i++)
        {
            tmp = tmp->next;
        }
        Node *dnd = tmp->next;
        tmp->next = dnd->next;
        if (dnd == last)
        {
            last = tmp;
        }
        delete dnd;
    }
    void printNode()
    {
        if (last == NULL)
        {
            return;
        }
        Node *head = last->next;
        Node *tmp = head;
        do
        {
            cout << tmp->val << " ";
            tmp = tmp->next;
            sz++;
        } while (tmp != head);
        cout << endl;
    }
};
int main()
{
    Circulr node;
    node.insertHead(10);
    node.insertHead(20);
    node.insertHead(30);
    node.insertHead(40);
    node.insertHead(50);
    node.printNode();
    int x, pos;
    cin >> x >> pos;
    if (pos == 0)
    {
        node.insertHead(x);
    }
    else if (pos == sz)
    {
        node.insertTail(x);
    }
    else if (pos > 0 && pos < sz)
    {
        node.insertAnyPosition(x, pos);
    }
    else if (pos > sz)
    {
        node.deleteHead();
        node.deleteTail();
        node.deleteAnyPosition(2);
    }
    node.printNode();
    return 0;
}