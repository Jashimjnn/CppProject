#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
bool Elimination(string str)
{
    stack<char> st;
    for (char ch : str)
    {
        if (ch == '0')
        {
            st.push(ch);
        }
        else
        {
            if (st.empty() || (ch == '0' && st.top() != '1'))
            {
                return false;
            }
            st.pop();
        }
    }
    return st.empty();
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        bool flag = Elimination(str);
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}