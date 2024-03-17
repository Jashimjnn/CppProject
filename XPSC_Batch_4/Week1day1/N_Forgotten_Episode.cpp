#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    ll n;
    cin >> n;
    set<ll>st;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        st.insert(x);
    }
    ll cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (st.find(i)==st.end())
        {
            cnt = i;
            break;
        }
    }
    cout << cnt << endl;
    return 0;
}