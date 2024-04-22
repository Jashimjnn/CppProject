#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    map<ll, ll> mp;
    ll left = 0, right = 0;
    ll cnt = 0;
    while (right < n)
    {
        mp[v[right]]++;
        while(mp.size()>k)
        {
            mp[v[left]]--;
            if(mp[v[left]]==0)
            {
                mp.erase(v[left]);
            }
            left++;
        }
        cnt+=(right-left+1);
        right++;
    }
    cout<<cnt<<endl;
    return 0;
}