#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
ll a[110];
vector<ll>v(110);
int main()
{
    ll T;
    cin >> T;
    while (T--)
    {
        ll n,cnt;
        cin >> n;
        for(ll i=1;i<=n;i++)
		{
            cin>>a[i];
        }
		sort(a+1,a+n+1);
        for (cnt = (n + 1) / 2; cnt; cnt--)
        {
            bool flag = true;
            for (ll j = 1; j <= cnt && flag; j++)
            {
                if (a[j + cnt - 1] > j)
                {
                    flag = false;
                }
            }
            if (flag==true)
            {
                break;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}