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
        int n, k;
        cin >> n >> k;

        vector<int> v(n);

        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
        }

        vector<int> v1;

        for (int i = 0; i <= n - k;i++)
        {
            int mx = -1;
            int mxIdx = -1;

            for (int j = i; j < i + k; j++)
            {
                if (v[j] > mx)
                {
                    mx = v[j];
                    mxIdx = j;
                }
            }

            v1.push_back(v[mxIdx]);
        }

        for (int candy : v1)
        {
            cout << candy << " ";
        }

        cout << endl;
    }

    return 0;
}
