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
    Node *prev;
    Node *next;

    Node(string val)
    {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};

class BrowserHistory
{
public:
    Node *curr;
    BrowserHistory(string homepage)
    {
        this->curr = new Node(homepage);
    }

    void visit(string url)
    {
        Node *newNode = new Node(url);
        curr->next = newNode;
        newNode->prev = curr;
        curr = newNode;
        if (curr != NULL)
        {
            cout << curr->val << endl;
        }
        else
        {
            cout << "Not Available" << endl;
        }
    }

    void back(int steps)
    {
        while (curr->prev != NULL && steps > 0)
        {
            curr = curr->prev;
            steps--;
        }
        if (curr->prev != NULL)
        {
            cout << curr->val << endl;
        }
        else
        {
            cout << "Not Available" << endl;
        }
    }

    void forward(int steps)
    {
        while (curr->next != NULL && steps > 0)
        {
            curr = curr->next;
             steps--;
        }
        if (curr->next != NULL)
        {
            cout << curr->val << endl;
        }
        else
        {
            cout << "Not Available" << endl;
        }
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
    tail = tail->next;
    tail = nd;
}
int main()
{

    BrowserHistory history("homepage");

    while (true)
    {
        string str;
        cin >> str;
        if (str == "end")
        {
            break;
        }
        history.visit(str);
    }
    int q;
    cin >> q;
    cin.ignore();
    while (q--)
    {
        string str1;
        cin >> str1;
        cin.ignore();
        if (str1 == "visit")
        {
            string tmp;
            cin >> tmp;
            history.visit(tmp);
        }
        else if (str1 == "next")
        {
            history.back(1);
        }
        else if (str1 == "prev")
        {
            history.forward(1);
        }
    }
    // for(Node *i=homepage;i!=NULL;i=i->next)
    // {
    //     cout<<i->val<<" ";
    // }
}