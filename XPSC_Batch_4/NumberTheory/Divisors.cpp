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
    vector<ll>v;
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            v.push_back(i);
            if((n%i)!=i)
            {
                v.push_back(n/i);
            }
        }
    }
    for(auto x:v)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}