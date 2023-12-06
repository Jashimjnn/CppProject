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
// void insert_at_tail(Node *&head, int v)
// {
//     Node *newNode = new Node(v);
//     if (head == NULL)
//     {
//         head = newNode;
//         //cout << "Inserted at head" << endl;
//         return;
//     }
//     Node *tmp = head;
//     while (tmp->next != NULL)
//     {

//         tmp = tmp->next;
//     }
//     tmp->next = newNode;
//    // cout << "Insert at tail" << endl;
// }
// int fun(Node* head)
// {
//     int cnt=0;
//     Node* tmp = head;
//     while(tmp!=NULL)
//     {
//         cnt++;
//         tmp=tmp->next;
//     }
//     return cnt;
// }
// int main()
// {
//     Node* head = NULL;
//     int size;
//     while(true)
//     {
//         int x;
//         cin>>x;
//         if(x==-1)
//         {
//             break;
//         }
//         insert_at_tail(head,x);
//         size = fun(head);
//         //cout<<size<<endl;
//     }
//     //int size = fun(head);
//     cout<<size<<endl;
//     return 0;
// }
void insert_tail(Node *&head,int v)
{
    Node* newNode = new Node(v);
    if(head==NULL)
    {
        head = newNode;
        return;
    }
    Node* tmp = head;
    while(tmp->next!=NULL)
    {
      tmp=tmp->next;
    }
    tmp->next=newNode;
}
int fun(Node* head)
{
    int cnt=0;
    Node* tmp = head;
    while(tmp!=NULL)
    {
        cnt++;
        tmp=tmp->next;
    }
    return cnt;
}
int main()
{
    Node* head = NULL;
    int size;
    while(true)
    {
        int x;
        cin>>x;
        if(x==-1)
        {
            break;
        }
        insert_tail(head,x);
        size = fun(head);
    }
    cout<<size<<endl;
}