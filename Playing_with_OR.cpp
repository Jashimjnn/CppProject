#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        int ans = 0;
        for (int i = 0; i <= n - k; i++)
        {
            bool flag = false;
            for (int j = 0; j < k; j++)
            {
                if ((ar[i+j]) % 2 == 1)
                {
                    flag = true;
                    break;
                }
            }
            if (flag)
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
