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
void insertion_sort(vector<ll> &v, ll n)
{
    for (int i = 1; i < n; i++)
    {
        ll tmp = v[i];
        ll j = i - 1;
        while (j >= 0 && v[j] > tmp)
        {
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = tmp;
    }
    for(auto x:v)
    {
        cout<<x<<" ";
    }
    cout<<endl;
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
    insertion_sort(v, n);
    return 0;
}