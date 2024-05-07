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
        vector<ll> v(n);
        set<ll> st;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            st.insert(v[i]);
        }
        if (st.size() == 0)
        {
            cout << 0 << endl;
            continue;
        }
        ll mx = LLONG_MAX;
        for (int i = 1; i < n - 1; i++)
        {
            ll flag = max(abs(v[i] - v[i - 1]), abs(v[i] - v[i + 1]));
            if (mx > flag)
            {
                mx = flag;
            }
        }
        mx = min(abs(v[0]-v[1]),min(mx,abs(v[n-1]-v[n-2])));
        cout<<mx<<endl;
    }
    return 0;
}