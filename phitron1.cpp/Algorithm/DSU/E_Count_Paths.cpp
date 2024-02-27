#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
const int X = 1e5+5;
vector<int>adj[X];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        set<int>st;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            st.insert(x);
        }
        int e=n-1;
        while(e--)
        {
            int a,b;
            cin>>a>>b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        int sz = st.size();
        cout<<n-sz<<endl;
    }
    return 0;
}