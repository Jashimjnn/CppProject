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
        vector<ll> v1;
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] >= k)
            {
                v1.push_back(v[i]%k);
            }
        }
        sort(v1.begin(),v1.end());
        if(v1.size()==0)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<v1[0]<<endl;
        }
    }
    return 0;
}
