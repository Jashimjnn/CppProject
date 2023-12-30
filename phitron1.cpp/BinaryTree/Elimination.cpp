#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;

int main()
{
    string str;
    cin >> str;

    ll q;
    cin >> q;

    vector<pair<ll, ll>> v;
    for (ll i = 0; i < q; ++i)
    {
        ll l, r;
        cin >> l >> r;
        v.push_back({l, r});
    }

    for (auto el : v)
    {
        ll l = el.first - 1; 
        ll r = el.second - 1;

        stack<char> st;
        ll cnt = 0;

        for (ll i = l; i <= r; i++)
        {
            if (str[i] == '1')
            {
                if (!st.empty() && st.top() == '0')
                {

                    st.pop();
                    cnt += 2;
                }
                else
                {

                    st.push('1');
                }
            }
            else
            {

                st.push('0');
            }
        }

        cout << cnt << endl;
    }

    return 0;
}
