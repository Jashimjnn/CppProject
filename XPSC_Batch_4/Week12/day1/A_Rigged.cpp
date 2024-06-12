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
        vector<pair<ll, ll>> v;
        ll ans = 0, ans1 = 0;
        for (int i = 0; i < n; i++)
        {
            ll x, y;
            cin >> x >> y;
            if(i==0)
            {
                ans=x;
                ans1=y;
            }
            else
            {
                v.push_back(make_pair(x,y));
            }
        }
        ll flag = false;
        for(auto va:v)
        {
            if(va.first>=ans && va.second>=ans1)
            {
                flag = true;
                break;
            }
        }
        if(flag==true)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<ans<<endl;
        }
    }
    return 0;
}