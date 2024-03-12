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
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        set<ll> st;
        ll cnt = 0;
        for (int i = n-1; i>=0; i--)
        {
            st.insert(v[i]);
            cnt++;
            if (cnt > st.size())
            {
                break;
            }
        }
        cout << n - st.size() << endl;
    }
    return 0;
}