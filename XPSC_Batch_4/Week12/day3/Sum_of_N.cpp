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
bool prime[1000005];
vector<ll> my_prime;
void SieveOfEratosthenes(ll n)
{
  my_prime.resize(n + 1, 0);
  for (int i = 0; i <= n; i++)
  {
    my_prime[i] = i;
  }
  memset(prime, true, sizeof(prime));
  prime[0] = false;
  prime[1] = false;
  for (int i = 2; i * i <= n; i++)
  {
    if (prime[i] == true)
    {
      for (int j = i * i; j <= n; j += i)
      {
        prime[j] = false;
        if (my_prime[j] == j)
        {
          my_prime[j] = my_prime[i];
        }
      }
    }
  }
}
vector<int> prime_value;
vector<ll> pre;
void solve()
{
  ll n;
  cin >> n;
  ll ans = 0;
  ll min_prime = my_prime[n];

  ll ind = upper_bound(prime_value.begin(), prime_value.end(), min_prime) - prime_value.begin();
  ind--;
  ll smm = pre[ind];
  ans = smm * n;
  cout << ans << endl;
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  SieveOfEratosthenes(1000005);
  for (int i = 1; i <= 1000000; i++)
  {
    if (prime[i])
    {
      prime_value.push_back(i);
      pre.push_back(i);
    }
  }
  for (ll i = 1; i < pre.size(); i++)
  {
    pre[i] += pre[i - 1];
  }

  ll tt;
  cin >> tt;
  while (tt--)
  {
    solve();
  }
  return 0;
}