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
    ll k;
    cin >> k;
    ll mx;
    vector<ll>v1;
    for(int i=0;i<=n-k;i++)
    {
        mx = v[i];
        for(int j=1;j<k;j++)
        {
            if(mx<v[i+j])
            {
                mx = v[i+j];
            }
        }
        v1.push_back(mx);
    }
    for(auto va:v1)
    {
        cout<<va<<" ";
    }
    return 0;
}
