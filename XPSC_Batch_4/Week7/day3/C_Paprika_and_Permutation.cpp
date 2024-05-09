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
        cin >> n;
        set<ll> st;
        vector<ll> v;
        for (int i = 1; i <= n; i++)
        {
            st.insert(i);
        }
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            if (st.find(x) != st.end())
            {
                st.erase(x);
            }
            else
            {
                v.push_back(x);
            }
        }
        sort(v.begin(), v.end());
        int cnt = 0;
        bool flag = true;
        for (int x : st)
        {
            if (x * 2 >= v[cnt++])
            {
                flag = false;
            }
        }
        if(flag==true)
        {
            cout<<v.size()<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
    return 0;
}