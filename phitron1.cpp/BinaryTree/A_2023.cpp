#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
void display()
{
    ll n, k;
    cin >> n >> k;
    ll v[n];
    ll ans = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        ans *= v[i];
    }
    if (2023 % ans != 0)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
        cout << 2023 / ans << " ";
        k--;
        while (k--)
        {
            cout << 1 << " ";
        }
        cout << endl;
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