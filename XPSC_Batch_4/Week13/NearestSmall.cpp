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
    vector<ll>next(n);
    stack<ll>st;
    st.push(-1);
    // for(int i=n-1;i>=0;i--)
    // {
    //     ll cur = v[i];
    //     while(st.top()!=-1 && v[st.top()]>=cur)
    //     {
    //         st.pop();
    //     }
    //     next[i] = st.top();
    //     st.push(i);
    // }
    for(int i=n-1;i>=0;i--)
    {
        ll cur = v[i];
        while(!st.empty())
        {
            if(st.top()<cur)
            {
                next[i] = st.top();
                break;
            }
            else
            {
                st.pop();
            }
        }
        st.push(cur);
    }
    for(auto x:next)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}