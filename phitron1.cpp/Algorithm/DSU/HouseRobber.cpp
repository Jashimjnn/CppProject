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
    vector<ll> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    int rob = 0;
    int norob = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        int newRob = norob + nums[i];
        int newNoRob = max(norob, rob);
        rob = newRob;
        norob = newNoRob;
    }
    ll ans = max(rob, norob);
    cout << ans << endl;
    return 0;
}