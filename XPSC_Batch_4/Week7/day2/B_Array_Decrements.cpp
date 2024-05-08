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
        vector<ll> v(n), v1(n);
        for (auto &x:v)
        {
            cin >> x;
        }
        for (auto &x:v1)
        {
            cin >> x;
        }
        ll mx = 0;
        set<ll> st;
        bool flag1 = false;
        for (ll i = 0; i < n; i++)
        {
            if (v1[i] == 0)
            {
                mx = max(mx, v[i]);
            }
            else if (v1[i] > v[i])
            {
                flag1 = true;
                break;
            }
            else
            {
                st.insert(v[i] - v1[i]);
            }
        }
        if (flag1 == true)
        {
            N;
        }
        else
        {
            if (st.size() == 0)
            {
                Y;
                continue;
            }
            else if (st.size() == 1)
            {
                bool flag = false;
                for (auto x : st)
                {
                    if (x >= mx)
                    {
                        flag = true;
                        break;
                    }
                }
                if (flag == true)
                {
                    Y;
                }
                else
                {
                    N;
                }
            }
            else
            {
                N;
            }
        }
    }
    return 0;
}