#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    ll n, x;
    cin >> n >> x;
    vector<pair<ll, ll>> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i + 1;
    }

    sort(a.begin(), a.end());

    for (int i = 0; i < n - 2; i++)
    {
        ll left = i + 1;
        ll right = n - 1;

        while (left < right)
        {
            ll sum = a[i].first + a[left].first + a[right].first;

            if (sum == x)
            {
                cout << a[i].second << " " << a[left].second << " " << a[right].second << endl;
                return 0;
            }
            else if (sum < x)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
    }

    cout << "IMPOSSIBLE" << endl;

    return 0;
}
