#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin>>n;
        vector<ll>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        sort(v.rbegin(),v.rend());
        multiset<ll> st;
        for (int i = 0; i < n; i++)
        {
            if (!st.size())
            {
                st.insert(v[i]);
            }
            else
            {
                ll x = *(--st.end());
                if (x >= v[i])
                {
                    st.erase(--st.end());
                    st.insert((x ^ v[i]));
                }
                else
                {
                    st.insert(v[i]);
                }
            }
        }
        cout << st.size() << endl;
    }
    return 0;
}