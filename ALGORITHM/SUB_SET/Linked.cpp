/**
 *    author:  Mohammad Jashim Uddin
**/
#include <iostream>
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define yy cout << "Yes" << endl;
#define N cout << "NO" << endl;
#define nn cout << "No" << endl;
#define one cout << "1" << endl;
#define onee cout << "-1" << endl;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
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
void insert_Tail(Node *&head,Node *&tail,int v)
{
    Node *nd = new Node(v);
    if(head==NULL)
    {
        head = nd;
        tail = nd;
        return;
    }
    tail->next = nd;
    tail = nd;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while(true)
    {
        int x;
        cin>>x;
        if(x==-1)
        {
            break;
        }
        insert_Tail(head,tail,x);
    }
    Node *tmp1 = head;
    int cnt=0;
    while(tmp1!=NULL)
    {
        cnt++;
        tmp1=tmp1->next;
    }
    int l,r;
    cin>>l>>r;
    vector<int>v,v1,v2;
    Node *tmp = head;
    int y = cnt-r;
    int x = r-l+1;
    l--;
    while(l--)
    {
        v.push_back(tmp->val);
        tmp = tmp->next;
    }
    while(x--)
    {
        v1.push_back(tmp->val);
        tmp = tmp->next;
    }
    while(y--)
    {
        v2.push_back(tmp->val);
        tmp = tmp->next;
    }
    reverse(v1.begin(),v1.end());
    Node *head1 = NULL;
    Node *tail1 = NULL;
    for(auto e:v)
    {
        insert_Tail(head1,tail1,e);
    }
    for(auto e:v1)
    {
        insert_Tail(head1,tail1,e);
    }
    for(auto e:v2)
    {
        insert_Tail(head1,tail1,e);
    }
    Node *tmp2 = head1;
    while(tmp2!=NULL)
    {
        cout<<tmp2->val<<" ";
        tmp2= tmp2->next;
    }
    return 0;
}