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
int numberOfAlternatingGroups(vector<ll> &colors)
{
    ll cnt = 0;
    ll n = colors.size();

    if (n < 3)
    {
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        if (colors[i] != colors[(i + 1) % n] && colors[(i + 1) % n] != colors[(i + 2) % n] && colors[i] != colors[(i + 2) % n])
        {
            cnt++;
        }
    }

    return cnt;
}
int main()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    
    cout << numberOfAlternatingGroups(v) << endl;
    return 0;
}