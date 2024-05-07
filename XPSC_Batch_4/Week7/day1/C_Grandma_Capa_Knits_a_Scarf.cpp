#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string str;
        cin >> str;
        ll cnt = 0;
        ll ans = n+1;
        for (int c = 0; c < 26; ++c)
        {
            ll left = 0, right = n - 1, cnt = 0;
            while (left <= right)
            {
                if (str[left] == str[right])
                {
                    left++, right--;
                }
                else if (str[left] == char('a' + c))
                {
                    cnt++, left++;
                }
                else if (str[right] == char('a' + c))
                {
                    cnt++, right--;
                }
                else
                {
                    cnt = n + 1;
                    break;
                }
            }
            ans = min(ans, cnt);
        }
        if (ans == n + 1)
        {
            ans = -1;
        }
        cout << ans << endl;
    }
    return 0;
}