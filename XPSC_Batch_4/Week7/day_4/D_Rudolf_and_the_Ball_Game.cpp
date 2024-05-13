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
        ll n, m, x;
        cin >> n >> m >> x;
        set<ll> st[2];
        ll indx = 0;
        st[indx].insert(x);
        while (m--)
        {
            ll y;
            char ch;
            cin >> y >> ch;
            while (!st[indx].empty())
            {
                ll flag = *(st[indx].begin());
                st[indx].erase(flag);
                if (ch == '?' || ch == '0')
                {
                    st[indx ^ 1].insert((flag + y - 1) % n + 1);
                }
                if (ch == '?' || ch == '1')
                {
                    st[indx ^ 1].insert((flag - y - 1 + n) % n + 1);
                }
            }
            indx ^= 1;
        }
        cout << st[indx].size() << endl;
        for (auto &x : st[indx])
        {
            cout << x << ' ';
        }
        cout << endl;
    }
    return 0;
}