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
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    if(n==2)
    {
        cout<<2<<endl;
        return 0;
    }
    if (n < 2)
    {
        cout<<0<<endl;
    }
    int cnt1 = 0, cnt2 = 0;
    if (nums[0] % 2 == 0)
    {
        cnt1=1;
    }
    else
    {
        cnt2=1;
    }
    for (int i = 0; i < n; i++)
    {
        if (nums[i] % 2 == 0)
        {
            cnt1 = max(cnt1, cnt2 + 1);
        }
        else
        {
            cnt2 = max(cnt2, cnt1 + 1);
        }
    }
    cout<<max(cnt1,cnt2)<<endl;
    return 0;
}