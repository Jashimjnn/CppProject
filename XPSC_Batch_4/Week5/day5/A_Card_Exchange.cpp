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
        ll n, k;
        cin >> n >> k;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        map<ll,ll>mp;
        for(int i=0;i<n;i++)
        {
            mp[v[i]]++;
        }
        bool flag = false;
        for(auto e:mp)
        {
            if(e.second>=k)
            {
              flag = true;
              break;
            }
        }
        if(flag==true)
        {
            cout<<k-1<<endl;
        }
        else
        {
            cout<<n<<endl;
        }
    }
    return 0;
}
