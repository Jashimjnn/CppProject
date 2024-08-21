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
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string str;
        cin >> str;
        ll cnt = 0,cnt1=0;
        ll i=n-1;
        while(i>=0)
        {
            if(str[i]=='B')
            {
              cnt++;
            }
            else
            {
                cnt1+=cnt;
                if(cnt)
                {
                    str[i]='B';
 
                    cnt=0;
                    i++;
                }
                //i++;
            }
            i--;
        }
        cout << cnt1 << endl;
    }
    return 0;
}