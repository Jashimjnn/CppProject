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
        set<ll> st;
        for (int i = 1; i * i <= n; i++)
        {
            st.insert(i * i);
        }
        for (int i = 1; i * i * i <= n; i++)
        {
            st.insert(i * i * i);
        }
        cout << st.size() << endl;
    }
    return 0;
}