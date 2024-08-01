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
    string str;
    cin>>str;
    stack<char>st;
    bool flag = true;
    ll cnt=0;
    for(int i=0;i<str.size();i++)
    {
        if(st.empty())
        {
            st.push(str[i]);
        }
        else if(st.top()==str[i])
        {
            st.pop();
            cnt++;
        }
        else
        {
            st.push(str[i]);
        }
    }
    if(cnt%2==0)
    {
        nn;
    }
    else
    {
        yy;
    }
    return 0;
}