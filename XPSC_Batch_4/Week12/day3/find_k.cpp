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
    ll n;
    cin >> n;
    vector<ll> v(n);
    deque<ll> queue;
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        queue.push_back(i);
    }
    ll k;
    cin >> k;
    ll x = queue.front();
    queue.pop_front();
    ll w = 0;

    while (w < k)
    {
        ll y = queue.front();
        queue.pop_front();

        if (v[x] > v[y])
        {
            w++;
            queue.push_back(y);
        }
        else
        {
            queue.push_back(x);
            x = y;
            w = 1;
        }

        if (w >= queue.size())
        {
            break;
        }
    }
    cout<<x<<endl;
    return 0;
}