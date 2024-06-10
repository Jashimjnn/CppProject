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
        ll d,c;
        cin>>d>>c;
        ll sum=0,sum1=0;
        for(int i=0;i<3;i++)
        {
            ll x;
            cin>>x;
            sum+=x;
        }
        for(int i=0;i<3;i++)
        {
            ll x;
            cin>>x;
            sum1+=x;
        }
        ll cnt = sum+sum1 +2*d;
        ll cnt1 = sum+sum1+c;
        if(sum<150)
        {
            cnt1+=d;
        }
        if(sum1<150)
        {
            cnt1+=d;
        }
        if(cnt1<cnt)
        {
            Y;
        }
        else
        {
            N;
        }
    }
    return 0;
}