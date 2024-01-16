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
        int x[4], y[4];

        for (int i = 0; i < 4; i++)
        {
            cin >> x[i] >> y[i];
        }


        sort(x, x + 4);
        sort(y, y + 4);


        int side = max(x[2] - x[1], y[2] - y[1]);
        cout << side * side << endl;
    }

    return 0;

    return 0;
}