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

bool fun(vector<ll>&v)
{
    ll i=0;
    ll j=v.size()-1;
    while(i<j)
    {
        if(v[i]!=v[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        ll a, b;
        ll i = 0, j = n - 1;
        ll flag = false;
        while (i < j)
        {
            if (v[i] != v[j])
            {
                flag = true;
                a = v[i];
                b = v[j];
                break;
            }
            i++;
            j--;
        }
        if(flag == false)
        {
            cout<<"YES"<<endl;
            continue;
        }
        else
        {
            vector<ll>v1,v2;
            for(int i=0;i<n;i++)
            {
                if(v[i]==a)
                {
                    continue;
                }
                else
                {
                    v1.push_back(v[i]);
                }
            }
            for(int i=0;i<n;i++)
            {
                if(v[i]==b)
                {
                    continue;
                }
                else
                {
                    v2.push_back(v[i]);
                }
            }
            bool flag1 = fun(v1);
            bool flag2 = fun(v2);
            if(flag1 || flag2)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}