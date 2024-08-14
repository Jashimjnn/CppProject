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

vector<vector<ll>> ans;
void Sub_set(vector<ll> &nums, ll idx, vector<ll> v1,ll n)
{
    ans.push_back(v1);
    for (int j = idx; j < n; j++)
    {
        if (j > idx && nums[j] == nums[j - 1])
        {
            continue;
        }
        v1.push_back(nums[j]);
        Sub_set(nums, j + 1, v1,n);
        v1.pop_back();
    }
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
    ll tar;
    cin>>tar;
    sort(begin(v), end(v));
    vector<ll> v1;
    vector<vector<ll>>path;
    vector<ll>p;
    Sub_set(v, 0, v1,n);
    for (auto subset : ans)
    {
        ll sum=0;
        for (auto elem : subset)
        {
            //cout << elem << " ";
            sum+=elem;
            p.push_back(elem);
        }
        if(sum==tar)
        {
            path.push_back(p);
        }
        sum=0;
        p.clear();
        //cout << endl;
    }
    for(auto e:path)
    {
        for(auto x:e)
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}