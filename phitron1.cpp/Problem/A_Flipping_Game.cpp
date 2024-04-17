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
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            vector<ll> temp = v;
            for (int k = i; k <= j; k++)
            {
                temp[k] = 1 - temp[k];
            }
            ll cnt1 = 0;
            for (int k = 0; k < n; k++)
            {
                cnt1 += temp[k];
            }
            cnt = max(cnt, cnt1);
        }
    }
    cout<<cnt<<endl;
    return 0;
}