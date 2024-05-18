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
    map<ll, ll> cnt;
    vector<ll>v1;
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                cnt[i]++;
                v1.push_back(i);
                n /= i;
            }
        }
    }
    for(auto e:v1)
    {
        cout<<e<<" ";
    }
    cout<<endl;
    cout<<endl;
    vector<ll>v;
    if (n > 1)
    {
        cnt[n]++;
    }

    for (auto [x, y] : cnt)
    {
        cout << x << " " << y << '\n';
        // ll flag = x;
        // for(int i=0;i<y;i++)
        // {
        //     v.push_back(flag);
        // }
    }
    // for(auto e:v)
    // {
    //     cout<<e<<" ";
    // }
    // cout<<endl;
    return 0;
}