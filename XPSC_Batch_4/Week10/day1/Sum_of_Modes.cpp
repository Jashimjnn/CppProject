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
        ll cnt = 0;
        if(n==2 && (str[0]=='0' && str[1]=='1'))
        {
           cout<<4<<endl;
           continue;
        }
        ll cnt1 = 0;
        string tmp = "01";
        auto pos = str.find(tmp);

        while (pos != -1)
        {
            cnt1++;
            pos = str.find(tmp, pos + tmp.length());
        }
        for (int i = 0; i < n; i++)
        {
            if (str[i] == '0' || str[i] == '1')
            {
                cnt++;
            }
            if (str[i] == '0' && str[i+1] == '1')
            {
                cnt += 4;
            }
        }
        cout << (cnt+(cnt1*4)) << endl;
    }
    return 0;
}