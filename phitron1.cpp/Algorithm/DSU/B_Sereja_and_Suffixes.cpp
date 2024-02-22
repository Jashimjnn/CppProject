#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> v(n+1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    set<ll> st;
    for (int i = n; i > 0; i--)
    {
        st.insert(v[i]);
        v[i] = st.size();
    }
    for (int i = 1; i <= m; i++)
    {
        ll l;
        cin >> l;
        cout << v[l] << endl;
    }
    return 0;
}