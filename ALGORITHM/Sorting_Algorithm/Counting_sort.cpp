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
void counting_sort(vector<ll> &v, ll n)
{
    ll mx = *max_element(v.begin(),v.end());
    vector<ll>count(mx+1,0);
    for(int i=0;i<n;i++)
    {
        count[v[i]]++;
    }
    for(int i=1;i<=mx;i++)
    {
        count[i]+=count[i-1];
    }
    vector<ll>v1(n);
    for(int i=n-1;i>=0;i--)
    {
        v1[count[v[i]]-1] = v[i];
        count[v[i]]--;
    }
    for(auto x:v1)
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
    counting_sort(v, n);
    return 0;
}