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
        vector<ll> v(n - 1);
        for (int i = 0; i < n-1; i++)
        {
            cin >> v[i];
        }
        if(v.size()==1)
        {
            cout<<v[0]+1<<" "<<v[0]<<endl;
            continue;
        }
        vector<ll> v1(n);
        ll mx = *max_element(v.begin(),v.end());
        v1[0] = mx+1;
        for (int i = 1; i < n; i++)
        {
            v1[i] = v[i - 1] + v1[i - 1];
        }
        for (auto x : v1)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}