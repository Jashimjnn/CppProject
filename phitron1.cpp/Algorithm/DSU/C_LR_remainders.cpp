#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
void display()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    string str;
    cin >> str;
    ll lft = 0;
    ll rght = n - 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (str[i] == 'L')
        {
            lft++;
        }
        else
        {
            rght--;
        }
    }
    vector<int> v1(n);
    v1[n - 1] = v[lft] % m;
    for (int i = n - 2; i >= 0; i--)
    {
        if (str[i] == 'L')
        {
            v1[i] = (v1[i + 1] * v[--lft]) % m;
        }
        else
        {
            v1[i] = (v1[i + 1] * v[++rght]) % m;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << v1[i] << " ";
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