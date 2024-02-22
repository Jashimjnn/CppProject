#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    // ll n, k;
    // cin >> n >> k;
    // vector<ll> v(n);
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> v[i];
    // }
    // ll sum = 0;
    // ll mn = LLONG_MAX;
    // ll idx, ans;
    // for (int i = 0; i < n; i++)
    // {
    //     sum += v[i];
    //     for (int j = i + 1; j < k; j++)
    //     {
    //         sum += (v[j] + v[j + 1]);
    //         mn=min(mn,sum);
    //         if(mn<ans)
    //         {
    //             idx=j;
    //         }
    //         else
    //         {
    //             ans=mn;
    //         }
    //     }
    // }
    // cout << (idx+1) << endl;

    int n, k;
    cin >> n >> k;
    vector<int> heights(n);
    for (int i = 0; i < n; i++)
    {
        cin >> heights[i];
    }
    long long sum = 0;
    for (int i = 0; i < k; i++)
    {
        sum += heights[i];
    }
    long long min_sum = sum;
    int min_idx = 0;
    for (int i = 1; i <= n - k; i++)
    {
        sum = sum - heights[i - 1] + heights[i + k - 1];
        if (sum < min_sum)
        {
            min_sum = sum;
            min_idx = i;
        }
    }
    cout << min_idx + 1 << endl;
    return 0;
}