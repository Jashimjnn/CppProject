#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
void display()
{
    ll n, q;
    cin >> n >> q;
    vector<ll> v(n);
    vector<ll> v1(n+1);
    v1[0]=0;
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        if(v[i]==1)
        {
          v1[i+1]=v1[i]+1;
        }
        else
        {
            v1[i+1]=v1[i];
        }
    }
    vector<ll>pre(n+1);
    pre[0]=0;
    for(int i=1;i<=n;i++)
    {
        pre[i]=v[i-1]+pre[i-1]-1;
    }
    while (q--)
    {
        ll l, r;
        cin >> l >> r;
        if(l==r)
        {
            cout<<"NO"<<endl;
            continue;
        }
        ll ans = v1[r]-v1[l-1];
        ll ans1 = pre[r]-pre[l-1];
        if (ans1>=ans)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        display();
    }
    return 0;
}