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

ll maximumGain(string s, ll x, ll y)
{
    if (x < y)
    {
        swap(x, y);
        reverse(s.begin(),s.end());
    }

    int sum = 0;
    string tmp = "ab";
    size_t pos = s.find(tmp);
    while (pos != string::npos)
    {
        s.erase(pos, tmp.length());
        pos = s.find(tmp);
        sum += x;
    }

    tmp = "ba";
    pos = s.find(tmp);
    while (pos != string::npos)
    {
        s.erase(pos, tmp.length());
        pos = s.find(tmp);
        sum += y;
    }

    return sum;
}
int main()
{
    string str;
    ll x, y;
    cin >> str >> x >> y;
    //cout << maximumGain(str, x, y) << endl;
    cout<<str<<endl;
    return 0;
}