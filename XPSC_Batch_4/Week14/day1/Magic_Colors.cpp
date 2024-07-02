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
        stack<char> st;
        string tmp = "";
        for (int i = 0; i < str.size(); i++)
        {
            if(st.empty())
            {
                st.push(str[i]);
            }
            else if(st.top()==str[i])
            {
                st.pop();
            }
            else if(((str[i]=='R' && st.top()=='B') || (str[i]=='B' && st.top()=='R')))
            {
                st.pop();
                st.push('P');
            }
            else if(((str[i]=='R' && st.top()=='G') || (str[i]=='G' && st.top()=='R')))
            {
                st.pop();
                st.push('Y');
            }
            else if(((str[i]=='B' && st.top()=='G') || (str[i]=='G' && st.top()=='B')))
            {
                st.pop();
                st.push('C');
            }
            else
            {
                st.push(str[i]);
            }
        }
        while(!st.empty())
        {
            //cout<<st.top();
            tmp+=st.top();
            st.pop();
        }
        stack<char>st1;
        for(int i=0;i<tmp.size();i++)
        {
            if(st1.empty())
            {
                st1.push(tmp[i]);
            }
            else if(st1.top()==tmp[i])
            {
                st1.pop();
            }
            else
            {
                st1.push(tmp[i]);
            }
        }
        while(!st1.empty())
        {
            cout<<st1.top();
            //tmp+=st.top();
            st1.pop();
        }
        cout<<endl;
    }
    return 0;
}
