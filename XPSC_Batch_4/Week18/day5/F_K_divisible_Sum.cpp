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
        ll n,k;
        cin>>n>>k;
        if(n==k)
        {
            one;
            continue;
        }
        if(n>k)
        {
            if(n%k==0)
            {
                one;
            }
            else
            {
                cout<<2<<endl;
            }
        }
        else
        {
            ll cnt = k/n;
            if(k%n)
            {
                cnt++;
            }
            cout<<cnt<<endl;
        }
    }
    return 0;
}