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
    cin>>n;
    vector<ll>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    vector<vector<ll>>v1;
    sort(begin(v),end(v));
    do
    {
        v1.push_back(v);
    }
    while(next_permutation(v.begin(),v.end()));
    for(int i=0;i<v1.size();i++)
    {
        for(int j=0;j<v1[0].size();j++)
        {
            cout<<v1[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}