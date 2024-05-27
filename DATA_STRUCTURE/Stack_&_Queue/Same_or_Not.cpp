#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    int n,m;
    cin>>n>>m;
    stack<int>st;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }
    queue<int>q;
    for(int i=0;i<m;i++)
    {
        int x;
        cin>>x;
        q.push(x);
    }
    if(n!=m)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    bool flag = false;
    while(!st.empty())
    {
        int st1 = st.top();
        st.pop();
        int q1 = q.front();
        q.pop();
        if(st1!=q1)
        {
            flag = true;
            break;
        }
    }
    if(flag==false)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}