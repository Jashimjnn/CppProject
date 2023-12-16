#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
class myStack
{
  public:
     list<int>l;
     void push(int v)
     {
        l.push_back(v);
     }
     void pop()
     {
        l.pop_back();
     }
     int top()
     {
        return l.back();
     }
     int size()
     {
        return l.size();
     }
     bool empty()
     {
        if(l.size()==0)
        {
            return true;
        }
        else
        {
            return false;
        }
     }
};
int main()
{
    myStack st;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }
    while(!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;
}