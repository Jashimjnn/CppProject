#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll q;
    cin >> q;
    set<pair<ll,ll>> st;
    map<ll, ll> mp;
    while (q--)
    {
        ll x, y;
        cin >> x;
        if (x == 1)
        {
            cin >> y;
            mp[y]++;
            st.erase({mp[y] - 1, y});
            st.insert({mp[y], y});
        }
        else if (x == 2)
        {
            if (!st.empty())
            {
                auto va = st.rbegin();
                cout << va->second << "\n";
                mp.erase(va->second);
                st.erase(*va);
            }
            else
            {
                cout << "empty\n";
            }
        }
    }
    return 0;
}