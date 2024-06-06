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
    set<ll>st;
    while (q--)
    {
        ll x,y;
        cin >> x;
        if (x == 1)
        {
            cin>>y;
            st.insert(y);
        }
        else if (x == 2)
        {
            if (!st.empty())
            {
                cout << *st.begin() << "\n"; 
                st.erase(st.begin());
            }
            else
            {
                cout << "empty\n";
            }
        }
    }
    return 0;
}