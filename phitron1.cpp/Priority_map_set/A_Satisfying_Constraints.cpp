#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int display()
{
    int n;
    cin >> n;
    set<int> s;
    int mn = 0;
    int mx = INT_MAX;
    while (n--)
    {
        int a, x;
        cin >> a >> x;
        if (a == 1)
        {
            mn = max(mn, x);
        }
        else if (a == 2)
        {
            mx = min(mx, x);
        }
        else if (a == 3)
        {
            s.insert(x);
        }
    }
    int cnt = (mx - mn) + 1;
    for (auto v : s)
    {
        if (v >= mn && v <= mx)
        {
            cnt--;
        }
    }
    if (cnt < 0)
    {
        cnt = 0;
    }
    return cnt;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int ans = display();
        cout << ans << endl;
    }
    return 0;
}