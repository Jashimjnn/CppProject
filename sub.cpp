#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
#define all(v) v.begin(), v.end()
#define min(a, b) a <= b ? a : b
#define max(a, b) a >= b ? a : b
//ll i = 0;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        ll ans = 0;
        ll i=0;
        for (i = 0; i < arr.size(); i++)
        {
           // for (int j = i + 1; j <= arr.size(); j++)
            //{
                vector<ll> subarray(arr.begin() + i, arr.begin() + i+1);
                sort(subarray.begin(), subarray.end());

                if (subarray[0] == subarray[subarray.size() - 1])
                {
                    continue;
                }
                else
                {
                    ans++;
                }
            //}
        }
        cout << "Case " << i << ": " << ans << endl;
    }

    return 0;
}
