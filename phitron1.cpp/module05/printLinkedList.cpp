#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
// class Node
// {
// public:
//     int val;
//     Node *next;
//     Node(int val)
//     {
//         this->val = val;
//         this->next = NULL;
//     }
// };
// int main()
// {
//     Node* head = new Node(10);
//     Node* a = new Node(20);
//     Node* b = new Node(30);
//     Node* c = new Node(40);
//     Node* d = new Node(50);

//     head->next=a;
//     a->next=b;
//     b->next=c;
//     c->next=d;
//     // cout<<head->val<<endl;
//     // cout<<head->next->val<<endl;
//     // cout<<head->next->next->val<<endl;
//     // cout<<head->next->next->next->val<<endl;
//     // cout<<head->next->next->next->next->val<<endl;
//     // while(head!=NULL)
//     // {
//     //     cout<<head->val<<endl;
//     //     head = head->next;
//     // }
//     Node* tmp =head;
//     while(tmp!=NULL)
//     {
//         cout<<tmp->val<<endl;
//         tmp = tmp->next;
//     }
//     return 0;
// }
class Node 
{
    public:
     int val;
     Node* next;
     Node(int  val)
     {
        this->val=val;
        this->next=NULL;
     }
};
int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);
    head->next=a;
    a->next=b;
    b->next=c;
    c->next=d;
    Node* tmp =head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}