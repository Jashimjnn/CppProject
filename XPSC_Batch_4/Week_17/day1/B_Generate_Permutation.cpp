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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(n%2==0)
        {
            onee;
            continue;
        }
        deque<ll>dq;
        ll x = n/2;
        for(int i=1;i<=x;i++)
        {
            dq.push_back(i);
        }
        for(int i=n;i>x;i--)
        {
            dq.push_back(i);
        }
        for(auto e:dq)
        {
            cout<<e<<" ";
        }
        cout<<endl;
    }
    return 0;
}