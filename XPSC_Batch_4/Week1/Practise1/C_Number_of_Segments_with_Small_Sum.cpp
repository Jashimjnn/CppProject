#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    ll n, s;
    cin >> n >> s;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll lft = 0, rght = 0;
    ll sum = 0, cnt = 0, ans = 0;
    while (rght < n)
    {
        sum += v[rght];
        if (sum <= s)
        {
            ans += (rght - lft + 1);
            cnt++;
        }
        else
        {
            while (sum > s)
            {
                sum -= v[lft];
                lft++;
            }
            if (sum <= s)
            {
                ans += (rght - lft + 1);
                cnt++;
            }
        }
        rght++;
    }
    cout<<ans<<endl;
    return 0;
}