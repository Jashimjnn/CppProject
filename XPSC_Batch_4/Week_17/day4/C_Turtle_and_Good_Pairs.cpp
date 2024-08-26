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
        ll n;
        cin>>n;
        string str;
        cin>>str;
        if(n==3)
        {
            cout<<str[n-1];
            str.pop_back();
            cout<<str<<endl;
            continue;
        }
        sort(begin(str),end(str));
        deque<char>dq;
        for(auto x:str)
        {
            dq.push_back(x);
        }
        ll i=1;
        while(true)
        {
            if(i%2==0)
            {
               cout<<dq.back();
               dq.pop_back();
            }
            else
            {
                cout<<dq.front();
                dq.pop_front();
            }
            if(i==str.size())
            {
                break;
            }
            i++;
        }
        cout<<endl;
    }
    return 0;
}