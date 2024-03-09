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
        string n;
        cin >> n;
        if ((n.back() - '0') % 2 == 0)
        {
            cout << "0" << endl;
        }
        else if ((n[0] - '0') % 2 == 0)
        {
            cout << "1" << endl;
        }
        else
        {
            ll count_2 = count(n.begin(), n.end(), '2');
            ll count_4 = count(n.begin(), n.end(), '4');
            ll count_6 = count(n.begin(), n.end(), '6');
            ll count_8 = count(n.begin(), n.end(), '8');
            if (count_2 > 0 || count_4 > 0 || count_6 > 0 || count_8 > 0)
            {
                cout << "2" << endl;
            }
            else
            {
                cout << "-1" << endl;
            }
        }
    }
    return 0;
}