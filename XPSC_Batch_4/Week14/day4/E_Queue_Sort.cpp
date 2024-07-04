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
        if(is_sorted(begin(dq),end(dq)))
        {
            cout<<0<<endl;
            continue;
        }
        ll cnt=0;
        for(int i=0;i<n;i++)
        {
            if(dq[i]<dq[cnt])
            {
                cnt=i;
            }
        }
        bool flag = true;
        for(int i=cnt+1;i<n;i++)
        {
            if(dq[i]<dq[i-1])
            {
                flag = false;
                break;
            }
        }
        if(flag==true)
        {
            cout<<cnt<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
    return 0;
}