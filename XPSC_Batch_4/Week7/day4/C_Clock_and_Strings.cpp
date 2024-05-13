#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
void Jashim()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    bool f = true;
    for (int i = 0; i < v.size(); i++)
    {
        bool flag1 = false, flag2 = false;
        if (v[i] == a)
        {
            for (int j = i + 1; v[j] != b; j++)
            {
                if (v[j] == c)
                {
                    flag1 = true;
                }
                if (v[j] == d)
                {
                    flag2 = true;
                }
            }
            if (flag1 and flag2)
            {
                N;
                return;
            }
            if ((flag1 == false and flag2) || (flag2 == false and flag1))
            {
                Y;
                return;
            }
        }
        else if (v[i] == b)
        {
            flag1 = false;
            flag2 = false;
            for (int j = i + 1; v[j] != a; j++)
            {
                if (v[j] == c)
                {
                    flag1 = true;
                }
                if (v[j] == d)
                {
                    flag2 = true;
                }
            }
            if (flag1 and flag2)
            {
                N;
                return;
            }
            if ((flag1 == false and flag2) || (flag2 == false and flag1))
            {
                Y;
                return;
            }
        }
    }
    Y;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        Jashim();
    }
    return 0;
}