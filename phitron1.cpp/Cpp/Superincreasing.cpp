#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
void Jashim()
{
    ll n, k, x;
    cin >> n >> k >> x;
    vector<ll> pre;
    ll sum = 3;
    ll cnt = 0;
    pre.push_back(1);
    pre.push_back(2);
    for (int i = 3; i <= n; i++)
    {
        // if (i > pre[i - 1])
        // {
        //     pre.push_back(i);
        //     sum += i;
        // }
        // else
        // {
            sum ++;
            pre.push_back(sum);
            sum+=(sum+i);
           
        //}
    }
    if (pre[k-1]<=x)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        Jashim();
    }
    return 0;
}