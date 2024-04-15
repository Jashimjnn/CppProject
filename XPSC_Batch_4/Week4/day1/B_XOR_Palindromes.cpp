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
        int n;
        cin >> n;
        string str;
        cin >> str;

        string ans = "";

        int mkpair = 0;
        int flag = 0;
        int l = 0, r = n - 1;
        while (l < r)
        {
            if (str[l] == str[r])
            {
                mkpair += 2;
            }
            else
            {
                flag++;
            }
            l++, r--;
        }

        for (int i = 0; i <= n; i++)
        {
            int total = i;
            total -= flag;

            if (total < 0)
            {
                ans.push_back('0');
                continue;
            }

            total = max((total % 2), total - mkpair);
            total = max(0, total - (n % (int)2));

            if (total == 0)
            {
                ans.push_back('1');
            }
            else
            {
                ans.push_back('0');
            }
        }

        cout << ans << endl;
    }
    return 0;
}