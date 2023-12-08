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
void insertTail(Node *&head, Node *&tail, ll v)
{
    Node *nd = new Node(v);
    if (head == NULL)
    {
        head = nd;
        tail = nd;
        return;
    }
    tail->next = nd;
    tail = nd;
}
 void removeElement(Node* head)
{
    for(Node* i = head; i!=NULL; i=i->next){
        for(Node* j = i; j->next!=NULL; ){
            if(i->val==j->next->val)
            {
                j->next=j->next->next;
            }
            else
            {
                j=j->next;
            }
        }
    }
//    Node* i = head;
//     while(i!=NULL)
//     {
//         Node* j = i;
//         while(j->next!=NULL)
//         {
//             if(i->val==j->next->val)
//             {
//                 j->next=j->next->next;
//             }
//             else
//             {
//                 j=j->next;
//             }
//         }
//         i=i->next;
//     }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while (true)
    {
        ll v;
        cin >> v;
        if (v == -1)
        {
            break;
        }
        insertTail(head, tail, v);
    }
    removeElement(head);
    for (Node *i = head; i != NULL; i = i->next)
    {
        cout << i->val << " ";
    }
    cout << endl;
    return 0;
}