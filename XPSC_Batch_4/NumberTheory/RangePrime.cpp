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
vector<bool> prime(50, true);
vector<ll> v;
map<ll, ll> mp;
void SieveOfEratosthenes(ll n)
{
    prime[0] = false;
    prime[1] = false;
    for (int i = 2; i * i <= n; i++)
    {
        if (prime[i] == true)
        {
            for (int j = i * i; j <= n; j += i)
            {
                prime[j] = false;
            }
        }
    }
}
int main()
{
    SieveOfEratosthenes(50);
    for (int i = 1; i <= 50; i++)
    {
        if (prime[i] == true)
        {
            v.push_back(i * i);
            mp[i * i]++;
        }
    }
    for (int i = 1; i <= 50; i++)
    {
        if (prime[i] == true)
        {
            cout << i << " ";
        }
    }
    cout << endl;
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }
    // cout << endl;
    return 0;
}
