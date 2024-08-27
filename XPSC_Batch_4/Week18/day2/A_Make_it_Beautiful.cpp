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
        deque<ll>dq(n);
        for(int i=0;i<n;i++)
        {
            cin>>dq[i];
        }
        if(dq[0]==dq[n-1])
        {
            N;
        }
        else
        {
            Y;
            cout<<dq[n-1]<<" ";
            for(int i=0;i<n-1;i++)
            {
                cout<<dq[i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}