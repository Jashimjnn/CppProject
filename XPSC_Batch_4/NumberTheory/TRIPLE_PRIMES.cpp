/**
 *    author:  Mohammad Jashim Uddin
 **/
#include <iostream>
#include <vector>
#include <map>
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

vector<bool> prime(1000005, true);
vector<ll> v;
map<ll, ll> mp;

void SieveOfEratosthenes(ll n)
{
    prime[0] = false;
    prime[1] = false;
    for (ll i = 2; i * i <= n; i++)
    {
        if (prime[i])
        {
            for (ll j = i * i; j <= n; j += i)
            {
                prime[j] = false;
            }
        }
    }
}

void display()
{
    ll n;
    cin >> n;
    for (ll i = 0; i < v.size(); i++)
    {
        if (v[i] <= n)
        {
            ll x = n - v[i];
            for (ll j = i + 1; j < v.size(); j++)
            {
                if (v[j] <= x)
                {
                    if (mp.find(x - v[j]) != mp.end() && v[i] != v[j] && v[j] != (x - v[j]) && v[i] != (x - v[j]))
                    {
                        yy;
                        return;
                    }
                }
                else
                {
                    break;
                }
            }
        }
        else
        {
            break;
        }
    }
    nn;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    SieveOfEratosthenes(1000003);
    for (ll i = 1; i <= 1000000; i++)
    {
        if (prime[i])
        {
            v.push_back(i * i);
            mp[i * i]++;
        }
    }
    ll t;
    cin >> t;
    while (t--)
    {
        display();
    }
    return 0;
}
