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
void insert_at_tail(Node *&head, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        cout<<"Inserted at head"<<endl;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        
        tmp = tmp->next;
    }
    tmp->next = newNode;
    cout<<"Insert at tail"<<endl;
}
void print_linked_list(Node *head)
{
    cout<<endl;
    cout << "Your linked list : ";
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout<<endl<<endl;
}
void insert_at_position(Node* head ,int pos,int v)
{
    Node *newNode = new Node(v);
    Node *tmp=head;
    for(int i=1;i<=pos-1;i++)
    {
        tmp=tmp->next;
    }
    newNode->next=tmp->next;
    tmp->next=newNode;
}
void insert_at_head(Node* &head,int v)
{
    Node *newNode=new Node(v);
    newNode->next=head;
    head = newNode;
    cout<<endl<<"inserted at head"<<endl;
}
void delete_from_position(Node* head,int pos)
{
    Node* tmp=head;
    for(int i=1;i<=pos-1;i++)
    {
        tmp=tmp->next;
    }
    Node* deleteNode = tmp->next;
    tmp->next=tmp->next->next;
    delete deleteNode;
    cout<<"Deleted position"<<endl;
}
void delete_head(Node* &head)
{
    Node* deleteNode=head;
    head=head->next;
    delete deleteNode;
    cout<<endl<<"Deleted head"<<endl;
}
int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "option 1: Insert at Tail" << endl;
        cout << "option 2: Print Linked list" << endl;
        cout << "option 3: Insert any position" << endl;
        cout << "option 4: Insert at head" << endl;
        cout << "option 5: Delete from position" << endl;
        cout << "option 6: Deleted head" << endl;
        cout << "option 7: Terminated" << endl;
        int op;
        cin >> op;
        if (op == 1)
        {
            cout << "Please Enter Value : ";
            int val;
            cin >> val;
            insert_at_tail(head, val);
        }
        else if(op==2)
        {
            print_linked_list(head);
        }
        else if(op==3)
        {
          int pos,v;
          cout<<"Enter position : ";
          cin>>pos;
          
          cout<<"Enter Value : ";
          cin>>v;
          if(pos==0)
          {
            insert_at_head(head,v);
            //cout<<"You can't insert at head";
          }
          else
          {
            insert_at_position(head,pos,v);
          }
        }
        else if(op==4)
        {
            int v;
            cout<<"Enter value : ";
            cin>>v;
            insert_at_head(head,v);
        }
        else if(op==5)
        {
            int pos;
            cout<<"Enter position: ";
            cin>>pos;
            if(pos==0)
            {
                delete_head(head);
            }
            else
            {
                delete_from_position(head,pos);
            }
        }
        else if(op==6)
        {
          delete_head(head);
        }
        else if(op==7)
        {
            break;
        }
    }
    print_linked_list(head);
    return 0;
}