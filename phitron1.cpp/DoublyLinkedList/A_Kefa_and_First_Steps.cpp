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
    vector<ll>v1;
    ll cnt = 0;
    ll mx = INT_MIN;
    if(n==1)
    {
        cout<<1<<endl;
        return 0;
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] <= v[i + 1])
        {
             cnt++;
            // mx = max(mx, cnt);
            //v1.push_back(v[i]);
        }
        else
        {
            cnt=0;
        }
         mx = max(mx, cnt);
    }
    cout << mx+1 << endl;
    return 0;
}