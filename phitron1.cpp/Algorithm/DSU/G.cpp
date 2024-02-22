
#include <iostream>
#include <vector>
#define ll long long
using namespace std;

int main()
{
    ll T;
    cin >> T;

    for (int t = 1; t <= T; ++t)
    {
        int n;
        cin >> n;

        vector<ll> a(n), b(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; ++i)
        {
            cin >> b[i];
        }
        ll cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
            {
                cnt++;
            }
        }
        cout << "Case " << t << ": " << cnt << endl;
    }

    return 0;
}
