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
        ll n;
        cin >> n;
        cout << 32 << endl;
        for (int i = 0; i < 32; i++, n >>= 1)
        {
            if (n & 1)
            {
                if (n & 2)
                {
                    n++;
                    cout << -1 << " ";
                }
                else
                {
                    cout << 1 << " ";
                }
            }
            else
            {
                cout << 0 << " ";
            }
        }
        cout<<endl;
    }
    return 0;
}