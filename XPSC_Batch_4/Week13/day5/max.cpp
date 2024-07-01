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
    ll red, blue;
    cin >> red >> blue;
    int red2 = red, blue2 = blue;
    int i = 1, j = 2;
    int k = 1, cnt = 0;
    while (1)
    {
        if (k % 2 != 0)
        {
            if (blue < i)
            {
                break;
            }
            cnt++;
            blue -= i;
            i += 2;
        }
        else
        {
            if (red < j)
            {
                break;
            }
            cnt++;
            red -= j;
            j += 2;
        }
        k++;
    }
    k = 1, i = 1, j = 2;
    int cnt2 = 0;
    while (1)
    {
        if (k % 2 != 0)
        {
            if (red2 < i)
            {
                break;
            }
            cnt2++;
            red2 -= i;
            i += 2;
        }
        else
        {
            if (blue2 < j)
            {
                break;
            }
            cnt2++;
            blue2 -= j;
            j += 2;
        }
        k++;
    }
    //cout << cnt << " " << cnt2 << endl;
    cout<<max(cnt,cnt2)<<endl;
    return 0;
}