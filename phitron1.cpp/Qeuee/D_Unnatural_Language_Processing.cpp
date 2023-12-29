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
        string tmp = "";
        int cnt = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            tmp += str[i];
            if (str[i] == 'b' || str[i] == 'c' || str[i] == 'd')
            {
                if (cnt > 0 && i != 0)
                {
                    cnt = 0;
                    tmp += '.';
                }
                else
                {
                    cnt++;
                }
            }
            else
            {
                cnt++;
            }
        }
        reverse(tmp.begin(), tmp.end());
        cout << tmp << endl;
    }
    return 0;
}