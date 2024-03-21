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
    ll sum = 0;
    cin >> sum;
    ll lft = 0;
    ll curSum = v[0];
    bool flag = false;
    for (int i = 1; i <= n; i++)
    {
        while (curSum > sum && lft < (i - 1))
        {
            curSum -= v[lft];
            lft++;
        }
        if (curSum == sum)
        {
            flag = true;
            break;
        }
        if (i < n)
        {
            curSum += v[i];
        }
    }
    if (flag == true)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}