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
   Node* next;
//  Node(int val)
//  {
//     this->val=val;
//     this->next=NULL;
//  }
};
int main()
{
    Node a,b;
    a.val=10;
    b.val=20;
    a.next=&b;
    b.next=NULL;
    cout<<a.val<<endl;
    cout<<b.val<<endl;
    cout<<a.next->val<<endl;
    cout<<(*a.next).val<<endl;
    return 0;
}