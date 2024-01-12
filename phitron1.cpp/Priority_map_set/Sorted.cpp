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
        list<ll> list1;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin>>x;
            list1.push_back(x);
        }
        list1.sort();
        list1.unique();
        for(int x:list1)
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}