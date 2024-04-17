#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    int n;
    cin>>n;
    queue<int>q;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        q.push(x);
    }
    queue<int>q1;
    stack<int>st;
    while(!q.empty())
    {
        int x = q.front();
        q.pop();
        st.push(x);
    }
    while(!st.empty())
    {
        int x = st.top();
        st.pop();
        q1.push(x);
    }
     while(!q1.empty())
    {
        cout<<q1.front()<<" ";
        q1.pop();
    }
    cout<<endl;
    return 0;
}