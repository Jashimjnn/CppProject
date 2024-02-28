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
        int a, b, l;
        cin >> a >> b >> l;
        set<int> st1;
        for (int i = 0; i < 21; i++)
        {
            int z1 = (pow(a, i));
            if (l % z1 == 0)
            {
                int val1 = (l / z1);
                for (int j = 0; j < 21; j++)
                {
                    int z2 = (pow(b, j));
                    if (val1 % z2 == 0)
                    {
                        st1.insert(val1 / z2);
                    }
                }
            }
        }
        cout << st1.size() << endl;
    }
    return 0;
}