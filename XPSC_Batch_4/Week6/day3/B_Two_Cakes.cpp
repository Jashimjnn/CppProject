#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    ll n, a, b;
    cin >> n >> a >> b;
    ll mx = 0;
    for (int i = 1; i < n; i++)
    {
        mx = max(min(a / i, b / (n - i)), mx);
    }
    cout << mx << endl;
    return 0;
}