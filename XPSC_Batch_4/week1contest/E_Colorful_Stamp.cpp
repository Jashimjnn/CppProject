#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int r, b;
    for (int i = 0; i < s.size(); i++)
    {
        r = 0;
        b = 0;
        if (s[i] != 'W')
        {
            while (i < n and s[i] != 'W')
            {
                if (s[i] == 'R')
                    r++;
                if (s[i] == 'B')
                    b++;
                i++;
            }
            if (!r or !b)
            {
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    while (tc--)
        solve();
}
