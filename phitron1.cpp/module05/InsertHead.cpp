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
void insertHead(Node *&head,int po,int val)
{
    Node* newNode =new Node(val);
    newNode->next=head;
    head=newNode;
}
void printlist(Node* head)
{
    Node* tmp =head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
int size(Node* head)
{
    Node* tmp =head;
    int cnt=0;
    while(tmp!=NULL)
    {
        cnt++;
        tmp=tmp->next;
    }
    return cnt;
}
void insert(Node* head,int po,int v)
{
    Node* newNode=new Node(v);
    Node* tmp=head;
    for(int i=1;i<=po-1;i++)
    {
        tmp=tmp->next;
    }
    newNode->next=tmp->next;
    tmp->next=newNode;
    //cout<<tmp->val<<endl;
}
void insertTail(Node* &head,Node* &tail,int v)
{
    Node* newNode = new Node(v);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
}
int main()
{
    Node* head = new Node(10);
    Node* a= new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);
    head->next=a;
    a->next=b;
    b->next=c;
    c->next=d;
    Node* tail = d;
    printlist(head);
    cout<<"Tail : "<<tail->val<<endl;
    int sz = size(head);
    int pos;
    cin>>pos;
    int v;
    cin>>v;
    
    if(pos>sz)
    {
        cout<<"Invalid"<<endl;
    }
    else if(pos==0)
    {
        insertHead(head,pos,v);
    }
    else if(pos==sz)
    {
        insertTail(head,tail,v);
    }
    else
    {
        insert(head,pos,v);
    }
    printlist(head);
    cout<<"Tail : "<<tail->val<<endl;
    return 0;
}