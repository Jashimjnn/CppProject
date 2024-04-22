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
read:
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n + 1);
        set<ll> st;
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
            st.insert(v[i]);
        }
        for (ll i = 2; i <= n - 1; i++)
        {
            if (v[i] > v[i - 1] && v[i] > v[i + 1])
            {
                Y;
                cout << i - 1 << " " << i << " " << i + 1 << endl;
                goto read;
            }
        }
        N;
    }
    return 0;
}