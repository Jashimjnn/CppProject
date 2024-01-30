#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;

void display()
{
    ll n;
    cin >> n;
    vector<ll> v1(n + 1);
    vector<ll> v2(n + 1);
    for (int i = 0; i < (n + n); i++)
    {
        // cin >> (i < n ? v1[i] : v2[v1[i - n]]);
        if (i < n)
        {
            cin >> v1[i];
        }
        else
        {
            cin >> v2[v1[i - n]];
        }
    }
    sort(v1.begin(), v1.end());
    for (auto va : v1)
    {
        if (va == 0)
        {
            continue;
        }
        cout << va << " ";
    }
    cout << endl;
    for (auto va : v2)
    {
        if (va == 0)
        {
            continue;
        }
        cout << va << " ";
    }
    cout << endl;
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