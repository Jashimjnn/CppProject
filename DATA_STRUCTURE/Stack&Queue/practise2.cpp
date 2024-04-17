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
    stack<int>st;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }
    int m;
    cin>>m;
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
        int x = st.top();
        st.pop();
        int y = q.front();
        q.pop();
        if(x!=y)
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