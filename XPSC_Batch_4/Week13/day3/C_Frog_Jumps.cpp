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
        string str;
        cin>>str;
        ll cntR = count(str.begin(),str.end(),'R');
        if(cntR==str.size())
        {
            cout<<1<<endl;
            continue;
        }
        ll cntL = count(str.begin(),str.end(),'L');
        if(cntL==str.size())
        {
            cout<<(str.size()+1)<<endl;
            continue;
        }
        vector<ll>v;
        v.push_back(0);
        for(int i=0;i<str.size();i++)
        {
            if(str[i]=='R')
            {
                v.push_back(i+1);
            }
        }
        v.push_back(str.size()+1);
        ll mx = LLONG_MIN;
        for(int i=0;i<v.size()-1;i++)
        {
            mx = max(mx,v[i+1]-v[i]);
        }
        cout<<mx<<endl;
    }
    return 0;
}