/**
 *    author:  Mohammad Jashim Uddin
 **/
#include <iostream>
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define yy cout << "Yes" << endl;
#define N cout << "NO" << endl;
#define nn cout << "No" << endl;
#define one cout << "1" << endl;
#define onee cout << "-1" << endl;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        ll matA[n][m];
        ll matB[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                char x;
                cin >> x;
                matA[i][j] = x - '0';
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                char x;
                cin >> x;
                matB[i][j] = x - '0';
            }
        }
        for (int i = n - 1; i >= 1; i--)
        {
            for (int j = m - 1; j >= 1; j--)
            {
                if (matA[i][j] != matB[i][j])
                {
                    ll y = ((matB[i][j] - matA[i][j]) + 3) % 3;
                    matA[i][j] = (matB[i][j]);
                    matA[i - 1][j] = (matA[i - 1][j] + 2*y) % 3;
                    matA[i][j - 1] = (matA[i][j - 1] + 2*y) % 3;
                    matA[i - 1][j - 1] = (matA[i - 1][j - 1]+y)%3;
                }
            }
        }
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (matA[i][j] != matB[i][j])
                {
                    flag = false;
                    break;
                }
            }
        }
        if (flag)
        {
            Y;
        }
        else
        {
            N;
        }
    }
    return 0;
}
