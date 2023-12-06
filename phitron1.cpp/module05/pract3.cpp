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
void insert_tail(Node *&head,int v)
{
    Node* newNode=new Node(v);
    if(head==NULL)
    {
        head=newNode;
        return;
    }
    Node *tmp=head;
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
// int  reverse(Node* head) 
// { 

//     if (head == NULL) 
//     return; 
 
//    reverse(head->next); 
   
    
// } 
int main()
{
    Node* head = NULL;
    int sz;
    while(true)
    {
        int x;
        cin>>x;
        if(x==-1)
        {
            break;
        }
        insert_tail(head,x);
        sz=fun(head);
    }
    int mid = sz/2;
    Node * tmp =head;
    for(int i=1;i<mid;i++)
    {
     tmp=tmp->next;
    }
    if(mid%2==0)
    {
        tmp=tmp->next;
        cout<<tmp->val<<endl;
    }
    else
    {
        cout<<tmp->val<<" "<<tmp->next->val<<endl;
    }
    //cout<<sz<<endl;
    return 0;
}