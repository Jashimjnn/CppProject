#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    ll n;
    cin >> n;
    if (n % 2 == 1)
    {
        cout << -1 << endl;
        // return 0;
    }
    else
    {
        vector<int> v(n);
        for (int i = 0; i < n; i += 2)
        {
            v[i] = i + 2;
            v[i + 1] = i + 1;
        }

        for (int i = 0; i < n; i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }

    return 0;
}