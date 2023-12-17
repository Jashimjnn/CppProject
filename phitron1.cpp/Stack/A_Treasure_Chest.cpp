#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    int t;
    cin >> t;
 
    while (t--)
    {
        int x, y, k;
        cin >> x >> y >> k;
 
        if (x < y)
        {
            if (y - x <= k)
            {
                cout << y << endl;
            }
            else
            {
                int ans = (2 * y - (x + k));
                cout << ans << endl;
            }
        }
        else
        {
            cout << x << endl;
        }
    }
    return 0;
}