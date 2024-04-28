#include <iostream>
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
const ll X = 1'000'000'000'000L;
unordered_set<ll> st;
void Jashim()
{
    for (ll i = 1; i * i * i <= X; i++)
    {
        st.insert(i * i * i);
    }
}
void Jashim1()
{
    ll n;
    cin >> n;
    bool flag = false;
    for (ll i = 1; i * i * i <= n; i++)
    {
        if (st.count(n - i * i * i))
        {
            Y;
            return;
        }
    }
    N;
}
int main()
{
    Jashim();
    ll t;
    cin >> t;
    while (t--)
    {
        Jashim1();
    }
    return 0;
}