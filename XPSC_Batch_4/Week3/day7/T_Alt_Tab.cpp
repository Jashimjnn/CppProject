#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    ll t;
    cin >> t;
    stack<string> st;
    while (t--)
    {
        string str;
        cin >> str;
        st.push(str);
    }
    set<string> s;
    while (!st.empty())
    {
        if (s.find(st.top()) == s.end())
        {
            s.insert(st.top());
            string str1 = st.top();
            if (str1.size() > 2)
            {
                cout << str1.substr(str1.size() - 2);
            }
        }
        st.pop();
    }
    return 0;
}