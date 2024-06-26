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
    string str,str1;
    cin>>str>>str1;
    ll cnt=0;
    while(true)
    {
        ll l = str.size()-cnt-1;
        ll r = str1.size()-cnt-1;
        if(l>=0 && r>=0 && str[l]==str1[r])
        {
            cnt++;
        }
        else
        {
            break;
        }
    }
    cout<<(str.size()+str1.size())-2*cnt<<endl;
    return 0;
}