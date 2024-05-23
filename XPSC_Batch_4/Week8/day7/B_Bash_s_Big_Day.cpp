#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
ll mx = 1, s = 0, x;
ll a[100010];
int main()
{
    ll n;
    cin >> n;
    while (n--)
    {
        cin >> x;
        a[x]++;
    }
    for (int i = 2; i <= 100000; i++)
    {
        s = 0;
        for (int j = i; j <= 100000; j += i)
        {
            s += a[j];
        }
        mx = max(s, mx);
    }
    cout << mx<<endl;
    return 0;
}