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
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        ll cnt = 0;
        ll sum=0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] < 0)
            {
                cnt++;
                v[i]=-v[i];
            }
            sum+=v[i];
        }
        if(cnt%2==0)
        {
            cout<<sum<<endl;
        }
        else
        {
            sort(v.begin(),v.end());
            cout<<sum-(2*v[0])<<endl;
        }
    }
    return 0;
}