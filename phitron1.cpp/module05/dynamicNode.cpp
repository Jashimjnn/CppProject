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
//     head->next=a;
//     cout<<head->val<<endl;
//     cout<<a->val<<endl;
//     cout<<head->next->val<<endl;
//     cout<<(*(*head).next).val<<endl;
//     return 0;
// }
class Node 
{
    public:
     int val;
     Node* next;
     Node(int val)
     {
        this->val=val;
        this->next=NULL;
     }
};
int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    head->next=a;
    cout<<head->val<<endl;
    cout<<a->val<<endl;
    cout<<head->next->val<<endl;
    cout<<(*(*head).next).val<<endl;
}